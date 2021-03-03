function prepare_data_for_target

load('data_ref.mat', 'time_data', 'ref_kin', 'tau_ff_all', 'n_axis', 'para')


% make sure that the sample time is equal to BR cycle time
dt_BR = 0.0008;
n_datasets = 3;
n_cutoff_end_torque = 100;
n_cutoff_start_torque = 100;
n_cycles = 1;

tend = time_data.tend;
time_BR = 0:dt_BR:tend;
nt_BR = numel(time_BR);
time_cont = time_data.time_cont;


interp_phi_r_all = zeros(nt_BR, n_axis);
interp_phi_r_all_d1 = zeros(nt_BR, n_axis);
interp_ref_d1_phi_m = zeros(nt_BR, n_axis);
interp_tau_ff_all = zeros(nt_BR, n_axis);
% interpolate to BR time
for k_axis = 1:n_axis
    
    interp_phi_r_all(:,k_axis)        = interp1(time_cont, ref_kin.phi_r_all(:,k_axis), time_BR);
    interp_phi_r_all_d1(:,k_axis)     = interp1(time_cont, ref_kin.phi_r_all_d1(:,k_axis), time_BR);
    interp_tau_ff_all(:,k_axis)       = interp1(time_cont, tau_ff_all(k_axis, :), time_BR);
    
end
% change units to BR units (degLink, degLink/s, Nm)
for k_axis = 1:n_axis
    
    interp_phi_r_all(:,k_axis)        = interp_phi_r_all(:,k_axis);
    interp_phi_r_all_d1(:,k_axis)     = interp_phi_r_all_d1(:,k_axis);
    interp_tau_ff_all(:,k_axis)       = interp_tau_ff_all(:,k_axis);
    
end
interp_tau_ff_all(end-n_cutoff_end_torque:end, :) = 0;
interp_tau_ff_all(1:n_cutoff_start_torque, :) = 0;

data = cell(n_datasets,1);
cycles_phi_r_all = zeros(nt_BR, n_axis);
cycles_phi_r_all_d1 = zeros(nt_BR, n_axis);
cycles_tau_ff_all = zeros(nt_BR, n_axis);

for k_cycles = 1:n_cycles
    
    time_index = (k_cycles -1)*nt_BR + (1:nt_BR);
    cycles_phi_r_all(time_index, :) = 180/pi*interp_phi_r_all;
    cycles_phi_r_all_d1(time_index, :) = 180/pi*interp_phi_r_all_d1;
    cycles_tau_ff_all(time_index, :) = interp_tau_ff_all;
end


data{1}        = cycles_phi_r_all; % motor reference angle
data{2}        = cycles_phi_r_all_d1; % link reference speed
data{3}        = cycles_tau_ff_all; % feed forward torque

nt_cycles = length(cycles_tau_ff_all);
time_BR_cylces = linspace(0, tend*n_cycles, nt_cycles);

% make sure all initial values are set to zero
for k_data = 1:n_datasets
    for k_axis = 1:nt_cycles
        data{k_data}(k_axis, :) = data{k_data}(k_axis, :) - data{k_data}(1, :);
    end
    
    % make sure all final values are set to zero
    data{k_data}(k_axis, end) = 0;
end



%% plot dataset
figure
for k_data = 1:n_datasets
    
    subplot(n_datasets,1,k_data)
    hold on
    for k_axis = 1:n_axis
        plot(time_BR_cylces, data{k_data}(:, k_axis))
    end
    switch k_data
        case 1
            title('Link pos degLink');
            legend('q1','q2','q3','q4','q5','q6')
        case 2
            title('Link vel degLink/s');
            legend('q1','q2','q3','q4','q5','q6')
        case 3
            title('FF Torque Nm');
            legend('q1','q2','q3','q4','q5','q6')
    end
    
end


%% check for joint limits

joint_limit_lb_deg = [-90, -30, -110, -180, -90, -180];
joint_limit_ub_deg = [90, 40, 40, 180, 90, 180];
joint_limit_reserve_deg = 3;
k_data = 1;
joint_limits_ok = true;
for k_axis = 1:n_axis
    %% check if position is within joint limits
    if any(data{k_data}(:, k_axis) >= joint_limit_ub_deg(k_axis) - joint_limit_reserve_deg   )
        joint_limits_ok = false;
        warning('----- DO NOT EXECUTE -----')
        warning(['All data will be overridden with zeros. Position is not within upper joint limits. Axis ',num2str(k_axis),'.'])
    end
    if any(data{k_data}(:, k_axis) <= joint_limit_lb_deg(k_axis) + joint_limit_reserve_deg   )
        joint_limits_ok = false;
        warning('----- DO NOT EXECUTE -----')
        warning(['All data will be overridden with zeros. Position is not within lower joint limits. Axis ',num2str(k_axis),'.'])
    end
    % override data with zeros
    if not( joint_limits_ok )
        for k_data = 1:n_datasets
            % use (:) to leave the data size unchanged
            data{k_data}(:) = 0;
        end
    end
end



%% create text file
fid = fopen('data/data_target_system.txt','wt');
fprintf(fid,'data_points : UDINT := %i; \n',nt_cycles);
fprintf(fid,'data_end_time : LREAL := %f; \n',tend);
fprintf(fid,'data_sample_time : LREAL := %f; \n',dt_BR);
% for all datasets
for k_data = 1:n_datasets
    switch k_data
        case 1
            name = 'phi_r';
        case 2
            name = 'phi_rd';
        case 3
            name = 'tau_flat';
    end
    
    % for all axis
    for k_axis = 1:n_axis
        
        fprintf(fid, name);
        fprintf(fid,'_%i : ARRAY[1..%i] OF REAL := [', k_axis, nt_cycles);
        
        % for all timesteps
        for k_time = 1:nt_cycles-1
            
            val = data{k_data}(k_time, k_axis);
            
            fprintf(fid,'%f, ',val);
            
        end
        % last one without comma
        val = data{k_data}(end, k_axis);
        
        fprintf(fid,'%f]; \n', val);
    end
end
% close file
fclose(fid);

end




