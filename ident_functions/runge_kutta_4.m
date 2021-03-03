function [xSim, uSim] = runge_kutta_4(time_cont, x0, optVec, static, dyn)

% Jonas Weigand
% 07.12.2017
% jonas.weigand@mv.uni-kl.de

% define a max variable size for solver
% NT_MAX = 1e5;
% NX_MAX = 1e1;
% NP_MAX = 1e1;´
% time_cont   = time_cont(1:nt);
% x0          = x0(1:nx);
% optVec      = optVec(1:np);
% time fixed for 
% t_start_sim         = 1.8;
% t_end_sim           = 8.1;
% time_cont_sim       = t_start_sim:0.0002:t_end_sim;
% nt = 31501;
% states fixed for
% nx = 2
% parameters fixed for
% np = 5


%% initialise

% get the number of timesteps
nt = numel(time_cont);
% get the length of a timestep
dt = time_cont(2) - time_cont(1);

% define an aribitry vector for extra outputs
[dx0, tau0, ~]  = nonlinear_differential_model(1, x0, optVec, static, dyn);
nOutX       = size(dx0, 1);
nOutU       = size(tau0, 1);
xSim        = zeros( nOutX, nt);
uSim        = zeros( nOutU, nt);

% by definition, first entry of xAll is x0
xSim(:,1) = x0;

% initialise temporary matrix z
% the dimension "4" of matrix z is by definition of using rungeKutta4
% the dimension "2" corresponds to the number of outputs
z = zeros(nOutX, 4);

%% Core loop
% for these equations, look for "Runge Kutta 4th. Order"
% example source: https://de.wikipedia.org/wiki/Klassisches_Runge-Kutta-Verfahren

% for all timesteps but the last one
for k1 = 1:nt-1
      
    [z(:, 1), uSim(:, k1), dyn]  = nonlinear_differential_model( k1, xSim(:, k1), optVec, static, dyn);
    
    [z(:, 2), ~, dyn]  = nonlinear_differential_model( k1, xSim(:, k1) + dt/2*z(:,1), optVec, static, dyn);
    
    [z(:, 3), ~, dyn]  = nonlinear_differential_model( k1, xSim(:, k1) + dt/2*z(:,2), optVec, static, dyn);
    
    [z(:, 4), ~, dyn]  = nonlinear_differential_model( k1, xSim(:, k1) + dt*z(:,3), optVec, static, dyn);
    
    xSim(:, k1+1) = xSim(:, k1) + dt/6*( z(:, 1)+2*z(:, 2)+2*z(:, 3)+z(:, 4) );
    
end

[~, uSim(:, end), ~]  = nonlinear_differential_model( nt, xSim(:, nt), optVec, static, dyn);

xSim = xSim';
uSim = uSim';


end
