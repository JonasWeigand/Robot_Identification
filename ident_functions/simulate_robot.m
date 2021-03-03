function [xSim, torqueSim] = simulate_robot( optVec, z, time_cont, x0)

optVec              = reshape(optVec, [], 1);
scaledOptVec        = z.opt.scaleOptVec .* optVec;

static.phi_r        = z.sim.phi_r_all';       % reference link angle
static.phi_r_d1     = z.sim.phi_r_all_d1';    % reference link velocity
static.tau_dist     = z.sim.tau_dist';        % disturbance torque
static.tau_ff       = z.sim.tau_ff_all';      % feed forward torque

if not(z.enable_ff_torque)
    static.tau_ff(:) = 0;
end

% axis dependend parameters
static.K_pos_eff    = z.para.K_pos_eff;     % position control parameter
static.K_vel_eff    = z.para.K_vel_eff;     % veclotiy control parameter
static.s_f_ode      = z.para.s_f;           % friction smoothness factor
static.u            = z.para.u;             % transmission factor

static.x_init       = zeros(12, 1);
static.n_axis       = 6;

% define indizes of opt variables
static.f_vis_idx      = z.opt.f_vis_idx;
static.f_coul_idx     = z.opt.f_coul_idx;
static.f_a_idx        = z.opt.f_a_idx;
static.f_b_idx        = z.opt.f_b_idx;
static.f_asym_idx     = z.opt.f_asym_idx;
static.m_pay_idx      = z.opt.m_pay_idx;

static.q_update_threshold   = z.q_update_threshold;
static.qd_update_threshold  = z.qd_update_threshold;

dyn.M_inverse           = eye(static.n_axis);
dyn.C                   = eye(static.n_axis);
dyn.G                   = eye(static.n_axis, 1);
dyn.q_update            = zeros(static.n_axis, 1);
dyn.qd_update           = zeros(static.n_axis, 1);

dyn.count_rob_updates   = 0;


if z.enable_MEX

    [xSim, torqueSim] = runge_kutta_4_mex(time_cont, x0, scaledOptVec, static, dyn);
    
else
    
    % solve ODE for time horizon
    [xSim, torqueSim] = runge_kutta_4(time_cont, x0, scaledOptVec, static, dyn);
    
end

xSim = xSim';
torqueSim = torqueSim';

end