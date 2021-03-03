function Robot_reference_kinematics


enable_plots = false;
enable_plot_int = false;
enable_save_new_data = true;
enforce_limits = true;


rad_to_deg = 180/pi;

%% time parameters



dt = 0.004;
tstart = 0;
tend = 10;
time_cont = tstart:dt:tend;
nt = numel(time_cont);



n_axis = 6; % DO NOT CHANGE. Number of axis of KR300.
n_states_per_axis   = 2;
n_states            = n_axis * n_states_per_axis;



% add for time steps for derivative
nt_der = 4;




%% load constrains

% 30-09-2020
% d3d4bound_d3zero_F2_v14_grids20_T10_ts60
% d3d4bound_d3zero_F2_v15_grids20_T10_ts50
% d3d4boundandzero_F2_v16_grids20_T10_ts50
% d3d4boundandzero_F2_v17_grids20_T10_ts120
% d3d4boundandzero_F2_v18_grids20_T30_ts200
% d3d4bound_d3zero_F2_v18_grids20_T30_ts200
% d3d4bound_d3zero_F2_vest_grids20_T10_ts60

traj_name = 'data/ref_trajectories/d3d4bound_d3zero_F2_vest_grids20_T10_ts60';
data_traj = load(traj_name);


% data = load('Trajektorien/F2_v13_grids20_T30_ts200');
% data = load('Trajektorien/F2_v6_grids12_T1_ts100');
% data = load('Trajektorien/F2_v7_grids12_T3_ts200');


% 19-10-2020
% A - d3d4boundandzero_F2_v16_grids20_T10_ts50
% B - d3d4boundandzero_F2_v17_grids20_T10_ts120 -> invert direction of axis 3
% C - d3d4bound_d3zero_F2_vest_grids20_T10_ts60

T = tend;
omega__f = 2*pi/T;
numberOfConstraints = 18;
v = data_traj.y;

c = traj_bound_constraints(v, time_cont, omega__f, numberOfConstraints);


% copy reference link angels
phi_r_all = c(1:n_axis, :)';

% add values for derivatives
phi_r_all_end = phi_r_all(end, :);
phi_r_all_add = repmat(phi_r_all_end, nt_der, 1);
phi_r_all = [phi_r_all; phi_r_all_add];

% force to start at zero
phi_r_all = phi_r_all - repmat(phi_r_all(1,:), nt+nt_der, 1);


% invert axis 3 for dataset B, d3d4boundandzero_F2_v17_grids20_T10_ts120
% phi_r_all(:, 3) = -phi_r_all(:, 3);


%% joint space derivatives

% for all six axis
% by definition, all derivaties start at zero
phi_r_all_d1 = zeros(nt,n_axis);
phi_r_all_d2 = zeros(nt,n_axis);
phi_r_all_d3 = zeros(nt,n_axis);
phi_r_all_d4 = zeros(nt,n_axis);

% coefficients for higher order derivatives
% https://en.wikipedia.org/wiki/Finite_difference_coefficient
first = [-1/60 3/20 -3/4 0 3/4 -3/20 1/60];
second = [1/90 -3/20 3/2 -49/18 3/2 -3/20 1/90];
third = [-7/240 3/10 -169/120 61/30 0 -61/30 169/120 -3/10 7/240];
forth = [7/240 -2/5 169/60 -122/15 91/8 -122/15 169/60 -2/5 7/240];

% caluclate derivaties for all axis
% https://en.wikipedia.org/wiki/Finite_difference_coefficient
phi_r_all_init  = phi_r_all(1,:);
phi_r_all_start = phi_r_all - repmat(phi_r_all_init, nt+nt_der, 1);


if nt > 1e3
    for k1 = 1:n_axis
        for k2 = 1:nt
            
            time_index_d12 = (k2-3:k2+3);
            time_index_d34 = (k2-4:k2+4);
            time_index_d12 = time_index_d12(time_index_d12 >= 1);
            time_index_d34 = time_index_d34(time_index_d34 >= 1);
            
            n12 = numel(time_index_d12);
            n34 = numel(time_index_d34);
            
            phi_r_all_d1(k2,k1)    = sum( first(end-n12+1:end)' .* phi_r_all_start(time_index_d12,k1)  )./dt;
            phi_r_all_d2(k2,k1)    = sum( second(end-n12+1:end)' .* phi_r_all_start(time_index_d12,k1)  )./dt^2;
            phi_r_all_d3(k2,k1)    = sum( third(end-n34+1:end)' .* phi_r_all_start(time_index_d34,k1) )./dt^3;
            phi_r_all_d4(k2,k1)    = sum( forth(end-n34+1:end)' .* phi_r_all_start(time_index_d34,k1)  )./dt^4;
        end
    end
else
    for k1 = 1:n_axis
        
        phi_r_all_d1(:,k1)    = (toeplitz([first(1), zeros(1,nt-1)],[first, zeros(1,nt-1)])*[phi_r_all_start(1,k1)*ones(3,1);phi_r_all_start(1:end-1,k1)])./dt;
        phi_r_all_d2(:,k1)    = (toeplitz([second(1), zeros(1,nt-1)],[second, zeros(1,nt-1)])*[phi_r_all_start(1,k1)*ones(3,1);phi_r_all_start(1:end-1,k1)])./(dt^2);
        phi_r_all_d3(:,k1)    = (toeplitz([third(1), zeros(1,nt-1)],[third, zeros(1,nt-1)])*[phi_r_all_start(1,k1)*ones(4,1);phi_r_all_start(1:end,k1)])./(dt^3);
        phi_r_all_d4(:,k1)    = (toeplitz([forth(1), zeros(1,nt-1)],[forth, zeros(1,nt-1)])*[phi_r_all_start(1,k1)*ones(4,1);phi_r_all_start(1:end,k1)])./(dt^4);
        
    end
end

% drop last time steps used for derivative
phi_r_all           = phi_r_all(1:end-nt_der,:);











%% enforce limits

tolerance_joint_space = 1e-3;
tolerance_der_d1 = 1e-4;
tolerance_der_d2 = 1e-3;
tolerance_der_d3 = 1e-2;
tolerance_der_d4 = 1e-1;
limit_d1 = 1e2;
limit_d2 = 1e2;
limit_d3 = 1e3;
limit_d4 = 1e3;

     
joint_limit_lb_deg = [-90, -30, -110, -180, -90, -180];
joint_limit_ub_deg = [90, 40, 40, 180, 90, 180];
joint_limit_reserve_deg = 3;

warn_enforcement_is_used = false;

if enforce_limits
    for k1 = 1:n_axis
        
        
        cand = phi_r_all_d1(:,k1);
        
        cand(cand > limit_d1)   = limit_d1;
        cand(cand < -limit_d1)  = -limit_d1;
        
        if any(cand ~= phi_r_all_d1(:,k1))
            warn_enforcement_is_used = true;
        end
        
        phi_r_all_d1(:,k1) = cand;
        
        cand = phi_r_all_d2(:,k1);
        
        cand(cand > limit_d2)   = limit_d2;
        cand(cand < -limit_d2)  = -limit_d2;
        
        if any(cand ~= phi_r_all_d2(:,k1))
            warn_enforcement_is_used = true;
        end
        
        phi_r_all_d2(:,k1) = cand;
        
        cand = phi_r_all_d3(:,k1);
        
        
        cand(cand > limit_d3)   = limit_d3;
        cand(cand < -limit_d3)  = -limit_d3;
        
        if any(cand ~= phi_r_all_d3(:,k1))
            warn_enforcement_is_used = true;
        end
        
        phi_r_all_d3(:,k1) = cand;
        
        cand = phi_r_all_d4(:,k1);
        
        cand(cand > limit_d4)   = limit_d4;
        cand(cand < -limit_d4)  = -limit_d4;
        
        if any(cand ~= phi_r_all_d4(:,k1))
            warn_enforcement_is_used = true;
        end
        phi_r_all_d4(:,k1) = cand;
        
    end
end

if warn_enforcement_is_used
    warning('Derivative limit enforced.')
end


%% plot kinematics
if enable_plots
    
    
    
    
    int_phi_ref_all_d1 = zeros(nt, n_axis);
    int_phi_ref_all_d2 = zeros(nt, n_axis);
    int_phi_ref_all_d3 = zeros(nt, n_axis);
    int_phi_ref_all_d4 = zeros(nt, n_axis);
    
    %% plot angles for each axis over time
    if enable_plot_int
        
        int = 1 / tf('s');
        for k1 = 1:n_axis
            
            int_phi_ref_all_d1(:,k1)    = lsim(int, phi_r_all_d1(:,k1), time_cont) + phi_r_all(1,k1);
            int_phi_ref_all_d2(:,k1)    = lsim(int^2, phi_r_all_d2(:,k1), time_cont) + phi_r_all(1,k1);
            int_phi_ref_all_d3(:,k1)    = lsim(int^3, phi_r_all_d3(:,k1), time_cont) + phi_r_all(1,k1);
            int_phi_ref_all_d4(:,k1)    = lsim(int^4, phi_r_all_d4(:,k1), time_cont) + phi_r_all(1,k1);
        end
        
        figure
        subplot(6,1,1);
        hold on
        plot(time_cont,rad_to_deg*phi_r_all(:,1), 'b')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d1(:,1), 'r-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d2(:,1), 'y-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d3(:,1), 'g-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d4(:,1), 'k-.')
        ylabel('q1 in deg')
        xlabel('time in s')
        title('q axis filtered')
        subplot(6,1,2)
        hold on
        plot(time_cont,rad_to_deg*phi_r_all(:,2), 'b')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d1(:,2), 'r-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d2(:,2), 'y-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d3(:,2), 'g-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d4(:,2), 'k-.')
        ylabel('q2 in deg')
        xlabel('time in s')
        subplot(6,1,3)
        hold on
        plot(time_cont,rad_to_deg*phi_r_all(:,3), 'b')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d1(:,3), 'r-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d2(:,3), 'y-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d3(:,3), 'g-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d4(:,3), 'k-.')
        ylabel('q3 in deg')
        xlabel('time in s')
        subplot(6,1,4);
        hold on
        plot(time_cont,rad_to_deg*phi_r_all(:,4), 'b')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d1(:,4), 'r-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d2(:,4), 'y-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d3(:,4), 'g-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d4(:,4), 'k-.')
        ylabel('q4 in deg')
        xlabel('time in s')
        subplot(6,1,5)
        hold on
        plot(time_cont,rad_to_deg*phi_r_all(:,5), 'b')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d1(:,5), 'r-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d2(:,5), 'y-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d3(:,5), 'g-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d4(:,5), 'k-.')
        ylabel('q5 in deg')
        xlabel('time in s')
        subplot(6,1,6)
        hold on
        plot(time_cont,rad_to_deg*phi_r_all(:,6), 'b')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d1(:,6), 'r-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d2(:,6), 'y-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d3(:,6), 'g-.')
        plot(time_cont,rad_to_deg*int_phi_ref_all_d4(:,6), 'k-.')
        ylabel('q6 in deg')
        xlabel('time in s')
        
        
    end
    
    
    %% plot angle derivatives for axis 1,2,3 over time
    figure
    subplot(3,4,1);
    hold on
    plot(time_cont,phi_r_all_d1(:,1),'r')
    plot( time_cont(1:numel(c(7,:))), c(7,:) ,'b-.')
    xlabel('qd1')
    title('qd axis filtered')
    subplot(3,4,2)
    hold on
    plot(time_cont,phi_r_all_d1(:,2))
    xlabel('qd2')
    subplot(3,4,3)
    hold on
    plot(time_cont,phi_r_all_d1(:,3))
    xlabel('qd3')
    subplot(3,4,4);
    hold on
    plot(time_cont,phi_r_all_d2(:,1))
    xlabel('qdd1')
    title('qdd axis filtered')
    subplot(3,4,5)
    hold on
    plot(time_cont,phi_r_all_d2(:,2))
    xlabel('qdd2')
    subplot(3,4,6)
    hold on
    plot(time_cont,phi_r_all_d2(:,3))
    xlabel('qdd3')
    subplot(3,4,7);
    hold on
    plot(time_cont,phi_r_all_d3(:,1))
    xlabel('qddd1')
    title('qddd axis filtered')
    subplot(3,4,8)
    hold on
    plot(time_cont,phi_r_all_d3(:,2))
    xlabel('qddd2')
    subplot(3,4,9)
    hold on
    plot(time_cont,phi_r_all_d3(:,3))
    xlabel('qddd3')
    subplot(3,4,10);
    hold on
    plot(time_cont,phi_r_all_d4(:,1))
    xlabel('qdddd1')
    title('qdddd axis filtered')
    subplot(3,4,11)
    hold on
    plot(time_cont,phi_r_all_d4(:,2))
    xlabel('qdddd2')
    subplot(3,4,12)
    hold on
    plot(time_cont,phi_r_all_d4(:,3))
    xlabel('qdddd3')
    
    
    %% plot angle derivatives for axis 4,5,6 over time
    figure
    subplot(3,4,1);
    hold on
    plot(time_cont,phi_r_all_d1(:,4))
    xlabel('qd4')
    title('qd axis filtered')
    subplot(3,4,2)
    hold on
    plot(time_cont,phi_r_all_d1(:,5))
    xlabel('qd5')
    subplot(3,4,3)
    hold on
    plot(time_cont,phi_r_all_d1(:,6))
    xlabel('qd6')
    subplot(3,4,4);
    hold on
    plot(time_cont,phi_r_all_d2(:,4))
    xlabel('qdd4')
    title('qdd axis filtered')
    subplot(3,4,5)
    hold on
    plot(time_cont,phi_r_all_d2(:,5))
    xlabel('qdd5')
    subplot(3,4,6)
    hold on
    plot(time_cont,phi_r_all_d2(:,6))
    xlabel('qdd6')
    subplot(3,4,7);
    hold on
    plot(time_cont,phi_r_all_d3(:,4))
    xlabel('qddd4')
    title('qddd axis filtered')
    subplot(3,4,8)
    hold on
    plot(time_cont,phi_r_all_d3(:,5))
    xlabel('qddd5')
    subplot(3,4,9)
    hold on
    plot(time_cont,phi_r_all_d3(:,6))
    xlabel('qddd6')
    subplot(3,4,10);
    hold on
    plot(time_cont,phi_r_all_d4(:,4))
    xlabel('qdddd4')
    title('qdddd axis filtered')
    subplot(3,4,11)
    hold on
    plot(time_cont,phi_r_all_d4(:,5))
    xlabel('qdddd5')
    subplot(3,4,12)
    hold on
    plot(time_cont,phi_r_all_d4(:,6))
    xlabel('qdddd6')
    
    
    
    
    
end

%% check for errors

for k1 = 1:n_axis

    %% check if position is within joint limits
    if any(rad_to_deg*phi_r_all(:,k1) >= joint_limit_ub_deg(k1) - joint_limit_reserve_deg   )
        warning('----- DO NOT EXECUTE -----')
        warning(['Position is not within upper joint limits. Axis ',num2str(k1),'.'])
    end
    if any(rad_to_deg*phi_r_all(:,k1) <= joint_limit_lb_deg(k1) + joint_limit_reserve_deg   )
        warning('----- DO NOT EXECUTE -----')
        warning(['Position is not within lower joint limits. Axis ',num2str(k1),'.'])
    end
    
    %% check if first and last angle align
    if abs(phi_r_all(1,k1) - phi_r_all(end,k1)) >= tolerance_joint_space
        warning(['Start and End Angle do not align. Axis ',num2str(k1),...
            '. Value ', num2str(abs(phi_r_all(1,k1) - phi_r_all(end,k1)))])
    end
    
    %% check if all derivatives start at zero
    if abs(phi_r_all_d1(1,k1)) >= tolerance_der_d1
        warning(['First derivative does not start at zero. Axis ',num2str(k1),...
            '. Value ', num2str(phi_r_all_d1(1,k1))])
    end
    if abs(phi_r_all_d2(1,k1)) >= tolerance_der_d2
        warning(['Second derivative does not start at zero. Axis ',num2str(k1),...
            '. Value ', num2str(phi_r_all_d2(1,k1))])
    end
    if abs(phi_r_all_d3(1,k1)) >= tolerance_der_d3
        warning(['Third derivative does not start at zero. Axis ',num2str(k1),...
            '. Value ', num2str(phi_r_all_d3(1,k1))])
    end
    if abs(phi_r_all_d4(1,k1)) >= tolerance_der_d4
        warning(['Fourth derivative does not start at zero. Axis ',num2str(k1),...
            '. Value ', num2str(phi_r_all_d4(1,k1))])
    end
    
    %% check if all derivatives end at zero
    if abs(phi_r_all_d1(end,k1)) >= tolerance_der_d1
        warning(['First derivative does not end at zero. Axis ',num2str(k1),...
            '. Value ', num2str(phi_r_all_d1(end,k1))])
    end
    if abs(phi_r_all_d2(end,k1)) >= tolerance_der_d2
        warning(['Second derivative does not end at zero. Axis ',num2str(k1),...
            '. Value ', num2str(phi_r_all_d2(end,k1))])
    end
    if abs(phi_r_all_d3(end,k1)) >= tolerance_der_d3
        warning(['Third derivative does not end at zero. Axis ',num2str(k1),...
            '. Value ', num2str(phi_r_all_d3(end,k1))])
    end
    if abs(phi_r_all_d4(end,k1)) >= tolerance_der_d4
        warning(['Fourth derivative does not end at zero. Axis ',num2str(k1),...
            '. Value ', num2str(phi_r_all_d4(end,k1))])
    end
    
    %% check all limits
    if max(abs(phi_r_all_d1(:,k1))) >= limit_d1
        warning(['First derivative exceeds limit. Axis ',num2str(k1),...
            '. Value ', num2str(max(abs(phi_r_all_d1(:,k1))))])
    end
    if max(abs(phi_r_all_d2(:,k1))) >= limit_d2
        warning(['Second derivative exceeds limit. Axis ',num2str(k1),...
            '. Value ', num2str(max(abs(phi_r_all_d2(:,k1))))])
    end
    if max(abs(phi_r_all_d3(:,k1))) >= limit_d3
        warning(['Third derivative exceeds limit. Axis ',num2str(k1),...
            '. Value ', num2str(max(abs(phi_r_all_d3(:,k1))))])
    end
    if max(abs(phi_r_all_d4(:,k1))) >= limit_d4
        warning(['Fourth derivative exceeds limit. Axis ',num2str(k1),...
            '. Value ', num2str(max(abs(phi_r_all_d4(:,k1))))])
    end
    
end



% force start and end angle to align
% just to be save here, this is already done using nt_align
phi_r_all(end,:) = phi_r_all(1,:);
% force all derivatives to start and end at zero
phi_r_all_d1([1,nt],:) = 0;
phi_r_all_d2([1,nt],:) = 0;
phi_r_all_d3([1,nt],:) = 0;
phi_r_all_d4([1,nt],:) = 0;


%% save data

ref_kin.phi_r_all = phi_r_all;
ref_kin.phi_r_all_d1 = phi_r_all_d1;
ref_kin.phi_r_all_d2 = phi_r_all_d2;
ref_kin.phi_r_all_d3 = phi_r_all_d3;
ref_kin.phi_r_all_d4 = phi_r_all_d4;

time_data.time_cont = time_cont;
time_data.dt = dt;
time_data.nt = nt;
time_data.tend = tend;
time_data.tstart = tstart;



if enable_save_new_data
    
    save('data/data_ref.mat',...
        'data_traj','traj_name',...
        'time_data','ref_kin', 'n_axis', 'n_states_per_axis', 'n_states')
    
    % do NOT append kinematics, instead delete *.mat file and create a new
    % one
    
end


end