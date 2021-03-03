function [xAllTrue, torqueTrue, meas, z] = load_recorded_data( z )

i_ax             = z.i_ax;
u                = z.para.u;
time_cont_sim    = z.sim.time_cont_sim;
n_axis           = z.n_axis;

load('data.mat', 'rec');

nt_data = numel( rec.time_cont );
dt_BR = 0.004;
time_data = 0:dt_BR:(nt_data -1)*dt_BR;
deg_to_rad = 2*pi/360;

a = deg_to_rad* interp1(time_data, rec.act_pos_mot_deg(i_ax, :), time_cont_sim);
b = deg_to_rad* interp1(time_data, rec.act_vel_mot_deg_per_s(i_ax, :), time_cont_sim);
c = deg_to_rad* interp1(time_data, rec.act_pos_se_deg(i_ax, :), time_cont_sim);
d = deg_to_rad* interp1(time_data, rec.act_vel_se_deg_per_s(i_ax, :), time_cont_sim);
e = interp1(time_data, rec.act_torque_abs_nm(i_ax, :), time_cont_sim);

if i_ax <= 3
    xAllTrue = [ a *u(i_ax);
        b*u(i_ax);
        c;
        d]';
else
    xAllTrue = [ a*u(i_ax);
        b*u(i_ax);
        a;
        b]';
end

torqueInit = e(1);
if z.enable_init_torque_zero
    torqueTrue = e' - torqueInit;
else
    torqueTrue = e';
end


dt_sim = time_cont_sim(2) - time_cont_sim(1);
windowsSec = 5e-2;
windowSteps = round(windowsSec / dt_sim); 
filt_b = (1/windowSteps)*ones(1,windowSteps);
filt_a = 1;
torqueFilt = filter(filt_b, filt_a, torqueTrue);


if z.enable_train_filt
    torqueTrue = torqueFilt;
end

meas.phiMMeas       = xAllTrue(:, 1)   ; % motor angle
meas.phiDotMMeas    = xAllTrue(:, 2)   ; % motor velocity
meas.phiLMeas       = xAllTrue(:, 3)   ; % link angle
meas.phiDotLMeas    = xAllTrue(:, 4)   ; % link velocity
meas.torqueMeas     = torqueTrue       ; % torques
meas.torqueFilt     = torqueFilt;
meas.torqueInit     = torqueInit;





for k_ax = 1:n_axis
    z.sim.phi_r_m_all(:,k_ax)     = u(k_ax)*deg_to_rad* interp1(time_data, rec.ref_pos_deg(k_ax, :), time_cont_sim)';
    z.sim.phi_r_m_all_d1(:,k_ax)  = u(k_ax)*deg_to_rad* interp1(time_data, rec.ref_vel_simple_deg_per_s(k_ax, :), time_cont_sim)';
    
    z.sim.phi_r_all(:,k_ax)       = deg_to_rad* interp1(time_data, rec.ref_pos_deg(k_ax, :), time_cont_sim)';
    z.sim.phi_r_all_d1(:,k_ax)    = deg_to_rad* interp1(time_data, rec.ref_vel_simple_deg_per_s(k_ax, :), time_cont_sim)';
end


if z.enable_ref_init
    
%     z.x0 = [ z.sim.phi_r_m_all(1,k_ax);
%         z.sim.phi_r_m_all_d1(1,k_ax);
%         z.sim.phi_r_all(1,k_ax);
%         z.sim.phi_r_all_d1(1,k_ax)];

    z.x0 = [ z.sim.phi_r_all(1,i_ax)*u(i_ax);
        z.sim.phi_r_all_d1(1,i_ax)*u(i_ax);
        z.sim.phi_r_all(1,i_ax);
        z.sim.phi_r_all_d1(1,i_ax)];
    
    
else
    
   %  z.x0 = xAllTrue(1,:);
   
%        z.x0 = [ a(1)*u(i_ax);
%         b(1)*u(i_ax);
%         a(1);
%         b(1)]';
    
       z.x0 = [ c(1)*u(i_ax);
        d(1)*u(i_ax);
        c(1);
        d(1)]';
end

if z.enable_initial_state_steady
    delta_x0 = initial_state_steady(z);
    z.x0 = z.x0 + delta_x0;
end




end