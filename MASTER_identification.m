function MASTER_identification

%% Identify the parameters of an Industrial robot

% Jonas Weigand
% March 2021


addpath('symbolic_code', 'ident_functions', 'data')

beep off
close all
clc





%% ------------------------------------------------------------------------
%  ------------- SETTINGS -------------------------------------------------
%  ------------------------------------------------------------------------




% enable motor torque plot, link position and link velocity
enable_plot_ident_torque        = true;
enable_plot_ident_pos           = true;
enable_plot_ident_vel           = true;

% select which axis to plots
% integers for each joints, from 1 to 6
n_axis_plot                     = [1, 2, 3];

% print identified parameters in command line
enable_command_line_res         = true;

% print bounds for the identified parameters in command line
enable_command_line_bounds      = true;

% add additional noise to recorded or simulated data
enable_additional_noise         = false;

% apply a random initialisation for the optimization parameters
% disable for repeatabilty
enable_random_init              = true;

% add an additional disturbance force to the data
enable_disturbance_torque       = false;

% compute simulator using MEX files
% MEX files must be recompiled, if a different data intervall length is
% applied
enable_MEX                      = true;

% offset the cost function for the first x seconds
% increases robustness to unknown initial states of the robot
enable_cost_fun_offset          = true;
cost_fun_offset_sec             = 0.2; % offset in seconds

% train using filtered data
enable_train_filt               = false;

% enable identification
% disable for debuging or testing of a-priori knwon parameters
enable_identification           = true;

% apply trail points from last iteration as initial points for solver
enable_warm_start_ident         = true;
% percentage of last trail points for the optimizer to use
keep_last_points                = 0.8;
% limit the total number of points to not slow down the optimizer
limit_total_points              = 300;


% enable feed forward model in the identification
% required to apply different models in the identification 
% and the feed forward torque
enable_ff_torque                = true;

% enable fixed integer classes for payload identification
enable_mixed_integer_opt        = false;


% threshold for update of the inertia, gravity and corilis matrix
% robot needs to move x degrees and y degree per second before the update
% applies
q_update_threshold              = deg2rad(2);
qd_update_threshold             = deg2rad(2);


% options for the surrogate solver
opt_surrogate = optimoptions('surrogateopt');
opt_surrogate.Display = 'iter';
opt_surrogate.MaxTime = 60;
opt_surrogate.MaxFunctionEvaluations = 200;
opt_surrogate.MinSampleDistance = 1e-1;
opt_surrogate.UseParallel = true;
opt_surrogate.PlotFcn = '';          % 'surrogateoptplot' 'optimplotx',
                                     % leave empty for none


%% ------------------------------------------------------------------------
%  ------------- LOAD RECORDED DATA ---------------------------------------
%  ------------------------------------------------------------------------

% '2020-10-21 10s FF A 08ms' - identification trajectory, 
% '2020-10-21 10s FF A 08ms' - frist validation trajectory,
% '2020-10-21 10s FF A 08ms' - second validation trajectory,
% recorded on 21 october 2020, 10 seconds duration, feedforward active, 
% 800 microseconds sample time  


trajectory_name = '2020-10-21 10s FF A 08ms';

z = load(['data/recorded_trajectories/',trajectory_name,'/data.mat']);


% load additional static parameters
addional_para = load('data/data_ref.mat', 'para');

z.para.K_pos_eff    = addional_para.para.K_pos_eff;
z.para.K_vel_eff    = addional_para.para.K_vel_eff;
z.para.s_f          = addional_para.para.s_f;


%% ------------------------------------------------------------------------
%  ------------- INITIALISE DATA STRUCT -----------------------------------
%  ------------------------------------------------------------------------


z.q_update_threshold            = q_update_threshold;
z.qd_update_threshold           = qd_update_threshold;
z.enable_MEX                    = enable_MEX;
z.enable_cost_fun_offset        = enable_cost_fun_offset;
z.enable_train_filt             = enable_train_filt;
z.enable_ff_torque              = enable_ff_torque;


[z, time_cont_sim] = initialise_time(z, cost_fun_offset_sec);

z = initialise_model(z, enable_disturbance_torque);

[z, trueOptVecAll, ...
    initOptVecAll, lb, ub] = initialise_optimization(z, ...
    enable_random_init);

[meas, x0] = initialise_data(z, enable_additional_noise);





%% ------------------------------------------------------------------------
%  ------------- PARAMETER IDENTIFICATION ---------------------------------
%  ------------------------------------------------------------------------








tic

estOptVecAll = perform_identification(z, meas, time_cont_sim, x0, ...
    enable_warm_start_ident, enable_identification,...
    enable_mixed_integer_opt,...
    keep_last_points, limit_total_points,...
    trueOptVecAll, initOptVecAll, ...
    lb, ub, opt_surrogate);

t_end = toc;


display_command_line_results(z, estOptVecAll, t_end,...
    enable_command_line_res, enable_command_line_bounds, lb, ub);




%% ------------------------------------------------------------------------
%  ----------------------------- PLOT -------------------------------------
%  ------------------------------------------------------------------------


% simulate robot with optimised parameters for plots
[xAllEst, torqueEst] = simulate_robot( estOptVecAll, z, time_cont_sim, x0);


rad_to_deg = 180 / pi;
n_axis_opt = numel(n_axis_plot);
n_axis     = z.n_axis;

if enable_plot_ident_torque
    figure
    for k_ax = n_axis_plot
        if n_axis_opt > 1
            subplot(n_axis_opt, 1, k_ax)
        end
        hold on
        plot(time_cont_sim(z.time_idx), meas.torqueMeas(k_ax, z.time_idx),'g');
        
        if z.enable_train_filt
            plot(time_cont_sim(z.time_idx), meas.torqueFilt(k_ax, z.time_idx),'b');
        end
        
        plot(time_cont_sim(z.time_idx), torqueEst(k_ax, z.time_idx),'r');
        
        
        xlabel('time in s');
        ylabel('torque in Nm');
        title(['torque q', num2str(k_ax)]);
        xlim([z.sim.t_start_sim + cost_fun_offset_sec, z.sim.t_end_sim])
    end
end


if enable_plot_ident_pos
    figure
    for k_ax = n_axis_plot
        if n_axis_opt > 1
            subplot(n_axis_opt, 1, k_ax)
        end
        hold on
        plot(time_cont_sim, rad_to_deg* meas.xAll(k_ax, :),'b');
        plot(time_cont_sim, rad_to_deg* xAllEst(k_ax, :), 'r');
        plot(time_cont_sim, rad_to_deg* z.sim.phi_r_all(:, k_ax)', 'k-.');
        legend('meas', 'sim', 'ref')
        xlabel('time in s');
        ylabel('position in deg');
        title(['link position q', num2str(k_ax)]);
        xlim([z.sim.t_start_sim, z.sim.t_end_sim])
    end
end
if enable_plot_ident_vel
    figure
    for k_ax = n_axis_plot
        if n_axis_opt > 1
            subplot(n_axis_opt, 1, k_ax)
        end
        hold on
        plot(time_cont_sim, rad_to_deg* meas.xAll(k_ax  + n_axis, :),'b');
        plot(time_cont_sim, rad_to_deg* xAllEst(k_ax + n_axis, :), 'r');
        plot(time_cont_sim, rad_to_deg* z.sim.phi_r_all_d1(:, k_ax)', 'k-.');
        legend('meas', 'sim', 'ref')
        xlabel('time in s');
        ylabel('velocity in deg/s');
        title(['link velocity q', num2str(k_ax)]);
        xlim([z.sim.t_start_sim, z.sim.t_end_sim])
    end
    
end
end
