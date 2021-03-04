function z = initialise_model(z, enable_disturbance)

n_axis                      = z.n_axis;
nt_sim                      = z.sim.nt_sim;

time_cont_data              = z.sim.time_cont_data;
time_cont_sim               = z.sim.time_cont_sim;


z.sim.tau_g_all             = zeros(nt_sim, n_axis);
z.sim.tau_a_all             = zeros(nt_sim, n_axis);
z.sim.tau_c_all             = zeros(nt_sim, n_axis);
z.sim.m_all                 = zeros(nt_sim, n_axis);
z.sim.tau_ff                = zeros(nt_sim, n_axis);
z.sim.phi_r_m_all           = zeros(nt_sim, n_axis);
z.sim.phi_r_m_all_d1        = zeros(nt_sim, n_axis);
z.sim.phi_r_all             = zeros(nt_sim, n_axis);
z.sim.phi_r_all_d1          = zeros(nt_sim, n_axis);
z.sim.phi_r_all_d2          = zeros(nt_sim, n_axis);
z.sim.phi_r_all_d3          = zeros(nt_sim, n_axis);
z.sim.phi_r_all_d4          = zeros(nt_sim, n_axis);
z.sim.tau_dist              = zeros(nt_sim, n_axis);
z.sim.tau_c_init            = zeros(1, n_axis);
z.sim.tau_g_init            = zeros(1, n_axis);
z.sim.tau_a_init            = zeros(1, n_axis);
z.sim.tau_ff_init           = zeros(1, n_axis);


if not(z.enable_ff_torque)
    z.tau_ff_all(:) = 0;
end






for k_ax = 1:n_axis
    
    
    z.tau_ff_all(k_ax,:) = z.tau_ff_all(k_ax,:) + z.tau_ff_init(k_ax);

    z.sim.tau_g_all(:,k_ax)      = interp1(time_cont_data, z.tau_g_all(k_ax,:), time_cont_sim);     % gravity
    z.sim.tau_a_all(:,k_ax)      = interp1(time_cont_data, z.tau_a_all(k_ax,:), time_cont_sim);     % acceleration
    z.sim.tau_c_all(:,k_ax)      = interp1(time_cont_data, z.tau_c_all(k_ax,:), time_cont_sim);     % coriolis & coulomb
    z.sim.m_all(:,k_ax)          = interp1(time_cont_data, z.m_all(k_ax,:), time_cont_sim);         % inertia
    z.sim.tau_ff_all(:,k_ax)     = interp1(time_cont_data, z.tau_ff_all(k_ax,:), time_cont_sim);    % feed forward torque
    
    z.sim.phi_r_m_all(:,k_ax)    = interp1(time_cont_data, z.ref_dyn.phi_r_m_all(:,k_ax), time_cont_sim);     % reference motor angle
    z.sim.phi_r_m_all_d1(:,k_ax) = interp1(time_cont_data, z.ref_dyn.phi_r_m_all_d1(:,k_ax), time_cont_sim);  % reference motor velocity
    
    z.sim.phi_r_all(:,k_ax)      = interp1(time_cont_data, z.ref_kin.phi_r_all(:,k_ax), time_cont_sim);     % reference link angle
    z.sim.phi_r_all_d1(:,k_ax)   = interp1(time_cont_data, z.ref_kin.phi_r_all_d1(:,k_ax), time_cont_sim);  % reference link velocity
    z.sim.phi_r_all_d2(:,k_ax)   = interp1(time_cont_data, z.ref_kin.phi_r_all_d2(:,k_ax), time_cont_sim);  % reference link acceleration
    z.sim.phi_r_all_d3(:,k_ax)   = interp1(time_cont_data, z.ref_kin.phi_r_all_d3(:,k_ax), time_cont_sim);  % reference link jerk
    z.sim.phi_r_all_d4(:,k_ax)   = interp1(time_cont_data, z.ref_kin.phi_r_all_d4(:,k_ax), time_cont_sim);  % reference link jerk derivative
        
    if enable_disturbance
        Band = [0 1e-2];
        Range = 2e-1*[-1,1];
        rand_data = z.para.u(k_ax) * idinput(51100,'prbs',Band,Range);
        z.sim.tau_dist(:,k_ax) = rand_data(1:nt_sim);
        
    else
        
        z.sim.tau_dist(:,k_ax) = 0;
    end
end


end