function Robot_reference_dynamics



enable_update_ff = true;

enable_plot_ff_torque = true;
n_plot = 1:3;


%% load KUKA model
robot = model_KUKA_Quantec_Ultra_KR300;




%% load data

ident_results       = load('data/ident_results.mat');
z                   = ident_results.z;

data_ref            = load('data/data_ref.mat');
n_axis              = data_ref.n_axis;
nt                  = data_ref.time_data.nt;
time_cont                  = data_ref.time_data.time_cont;

%% robot parametes

u = [1798/7; 1872/7; 757/3; 221/1; 5032/21; 206793/1340];
u_inv = 1 ./ u;

s_f = 1e0*ones(n_axis,1);

k_T = [1.81; 1.89; 1.89; 1.41; 1.41; 1.41];

K_vel = [20; 20; 20; 1.8; 1.8; 1.8];
K_pos = [10; 10; 10; 10; 10; 10];

K_vel_eff = ( u .* K_vel .* k_T )/( 360 * sqrt(2) ) * 360/2/pi;
K_pos_eff = K_pos * 360/2/pi;




%% identified parameters
optVec              = reshape(ident_results.estOptVecAll, [], 1);
scaledOptVec        = z.opt.scaleOptVec .* optVec;

% friction
f_vis       = scaledOptVec(z.opt.f_vis_idx);
f_coul      = scaledOptVec(z.opt.f_coul_idx);
f_a         = scaledOptVec(z.opt.f_a_idx);
f_b         = scaledOptVec(z.opt.f_b_idx);
f_asym      = scaledOptVec(z.opt.f_asym_idx);
m_payload   = scaledOptVec(z.opt.m_pay_idx);







%% feed forward

if enable_update_ff
    tau_ff_all    = zeros(n_axis, nt); % Nm
    
    for t_disc = 1:nt
        
        q           = data_ref.ref_kin.phi_r_all(t_disc, :)';
        qd          = data_ref.ref_kin.phi_r_all_d1(t_disc, :)';
        qdd         = data_ref.ref_kin.phi_r_all_d2(t_disc, :)';
        
        qs          = [0 -pi/2 pi/2 0 0 0];
        q_global    = q' + qs;
        qd_global   = qd';
        
        C           = coriolis_150(q_global, qd_global);
        G           = gravload_150(q_global);
        M           = inertia_150(q_global);
        
        tau_hyd     = hydraulic_weight_counterbalance( q_global(2));
        G(2)        = G(2) + tau_hyd;
        G           = reshape(G, [], 1);
        
        % continous differentiable sign of the link velocity
        f_sign      = tanh(s_f .* qd);
        
        tau_fr      = f_asym + f_vis.*qd + f_coul.*f_sign + f_a.*tanh(f_b .* qd);
        
        tau_ff_all(:,t_disc) =  u_inv .* (M * qdd + ...
            C * qd + G + tau_fr);
        
    end
    
    if enable_plot_ff_torque
        
        figure
        for k_ax = n_plot
            subplot( numel(n_plot), 1, k_ax )
            plot( time_cont, tau_ff_all( k_ax, :))
            xlabel('time in s');
            ylabel('torque in Nm');
            title(['torque q', num2str(k_ax)]);
        end
    end
    
end


%% save results

para.m_payload = m_payload;
para.u = u;
para.u_inv = u_inv;
para.s_f = s_f;
para.f_coul = f_coul;
para.f_vis = f_vis;
para.f_asym = f_asym;
para.f_a = f_a;
para.f_b = f_b;
para.K_vel_eff = K_vel_eff;
para.K_pos_eff = K_pos_eff;


% use append-option to not delete other content in mat file
save('data/data_ref.mat', 'para', 'robot', '-append')

if enable_update_ff
    save('data/data_ref.mat','tau_ff_all','-append');
end
end


