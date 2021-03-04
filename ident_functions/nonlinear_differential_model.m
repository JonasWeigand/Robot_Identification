function [x_dot, tau_m, dyn] = nonlinear_differential_model(t_disc, x, scaledOptVec, static, dyn)



x_dot         = static.x_init;

% time dependend parameters
q_r           = static.phi_r(:, t_disc);    % reference link angle
q_r_d1        = static.phi_r_d1(:, t_disc); % reference link velocity
tau_dist      = static.tau_dist(:, t_disc); % disturbance torque
tau_ff        = static.tau_ff(:, t_disc);   % feed forward torque

% axis dependend parameters
K_pos_eff     = static.K_pos_eff;     % position control parameter
K_vel_eff     = static.K_vel_eff;     % veclotiy control parameter
s_f_ode       = static.s_f_ode;       % friction smoothness factor
u             = static.u;             % transmission factor


% static sizes for code generation
q             = zeros(6, 1);
qd            = zeros(6, 1);

q(:)          = x(1:static.n_axis); % angle
qd(:)         = x(static.n_axis+1:end); % velocity



%% override with values for optimisation
% use the nominal model for the feed forward terms

% friction
f_vis       = scaledOptVec(static.f_vis_idx);
f_coul      = scaledOptVec(static.f_coul_idx);
f_a         = scaledOptVec(static.f_a_idx);
f_b         = scaledOptVec(static.f_b_idx);
f_asym      = scaledOptVec(static.f_asym_idx);
m_payload   = scaledOptVec(static.m_pay_idx);




%% calculate gravity, coriolis, inertia


if t_disc == 1 || norm(q - dyn.q_update) > static.q_update_threshold || norm(qd - dyn.qd_update) > static.qd_update_threshold
    dyn.count_rob_updates = dyn.count_rob_updates + 1;
    
        
    dyn.q_update = q;
    dyn.qd_update = qd;
    
    [dyn.M_inverse, dyn.C, dyn.G] = robot_dynamics(q, qd, m_payload);

end


%% friction torque


% continous differentiable sign of the link velocity
f_sign = tanh(s_f_ode .* qd);

tau_f = f_asym + f_vis.*qd + f_coul.*f_sign + f_a.*tanh(f_b .* qd);



%% motor control torque

tau_m = tau_ff + K_vel_eff.*( q_r_d1 - qd ) + K_pos_eff.*(q_r - q);


%% derivatives


x_dot(1:static.n_axis) = qd;

x_dot(static.n_axis+1:end) = dyn.M_inverse*(-tau_f -dyn.G -dyn.C*qd + tau_m.*u + tau_dist );



end