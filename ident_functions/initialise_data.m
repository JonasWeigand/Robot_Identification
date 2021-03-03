function [meas, x0] = initialise_data(z, ...
    trueOptVecAll, enable_load_recorded_data, enable_noise)


if enable_load_recorded_data
    
    u                = z.para.u;
    time_cont_sim    = z.sim.time_cont_sim;
    dt_sim           = z.sim.dt_sim;
    nt_sim           = z.sim.nt_sim;
    time_cont_data   = z.sim.time_cont_data;
    n_axis           = z.n_axis;
    
    load('data.mat', 'rec');
    
    deg_to_rad = 2*pi/360;
    
    pos_mot = zeros(n_axis, nt_sim);
    vel_mot = zeros(n_axis, nt_sim);
    torque = zeros(n_axis, nt_sim);
    
    for k_ax = 1:n_axis
    
    pos_mot(k_ax, :) = deg_to_rad* interp1(time_cont_data, rec.act_pos_mot_deg(k_ax, :), time_cont_sim);
    vel_mot(k_ax, :) = deg_to_rad* interp1(time_cont_data, rec.act_vel_mot_deg_per_s(k_ax, :), time_cont_sim);
    % pos_se  = deg_to_rad* interp1(time_cont_data, rec.act_pos_se_deg(i_ax, :), time_cont_sim);
    % vel_se  = deg_to_rad* interp1(time_cont_data, rec.act_vel_se_deg_per_s(i_ax, :), time_cont_sim);
    torque(k_ax, :)       = interp1(time_cont_data, rec.act_torque_abs_nm(k_ax, :), time_cont_sim);
    
    end
    
    xAllTrue = [ pos_mot; vel_mot];
        
    torqueInit = torque(1);
    torqueTrue = torque;
    
    
    windowsSec = 5e-2;
    windowSteps = round(windowsSec / dt_sim);
    filt_b = (1/windowSteps)*ones(1,windowSteps);
    filt_a = 1;
    torqueFilt = filter(filt_b, filt_a, torqueTrue);
    
    
    if z.enable_train_filt
        torqueTrue = torqueFilt;
    end
    
    meas.torqueMeas     = torqueTrue       ; % torques
    meas.torqueFilt     = torqueFilt;
    meas.torqueInit     = torqueInit;
    meas.xAll           = xAllTrue;
    
    
    
    
    for k_ax = 1:n_axis
        z.sim.phi_r_m_all(:,k_ax)     = u(k_ax)*deg_to_rad* interp1(time_cont_data, rec.ref_pos_deg(k_ax, :), time_cont_sim)';
        z.sim.phi_r_m_all_d1(:,k_ax)  = u(k_ax)*deg_to_rad* interp1(time_cont_data, rec.ref_vel_simple_deg_per_s(k_ax, :), time_cont_sim)';
        
        z.sim.phi_r_all(:,k_ax)       = deg_to_rad* interp1(time_cont_data, rec.ref_pos_deg(k_ax, :), time_cont_sim)';
        z.sim.phi_r_all_d1(:,k_ax)    = deg_to_rad* interp1(time_cont_data, rec.ref_vel_simple_deg_per_s(k_ax, :), time_cont_sim)';
    end
    
    
    x0 = [ pos_mot(:, 1); 
           vel_mot(:, 1)];
        
        
    
else
    
% TO DO if simulation is wanted
    
%     x0                      = zeros(n_axis*n_states_per_axis,1);
%     odeFunAn                = @(t,x) ode_fun(t, x, trueOptVecAll{z.i_ax}, z);
%     [xAllTrue, torqueTrue]  = rungeKutta4_disc(odeFunAn, time_cont_sim  , x0);
    
end




% if enable_noise
%     
%     if z.enable_load_recorded_data
%         warning('add additional noise to recorded data.')
%     end
%     
%     meas.xAll         = xAllTrue'        + 0.5*randn(nt_sim,n_states_per_axis*n_axis)'; % link angle;
%     meas.torqueMeas   = torqueTrue       + 0.2*randn(nt_sim,n_axis); % torques
%     
% else
%     
%     meas.xAll         = xAllTrue';
%     meas.torqueMeas   = torqueTrue       ; % torques
%     
% end

end
