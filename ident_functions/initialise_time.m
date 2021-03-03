function [z, time_cont_sim] = initialise_time(z, ...
    enable_load_recorded_data, cost_fun_offset_sec)

t_start_sim         = 1.8;
t_end_sim           = 8.2;
time_cont_sim       = t_start_sim:0.0008:t_end_sim;
nt_sim              = numel(time_cont_sim);
dt_sim              = time_cont_sim(2) - time_cont_sim(1);
time_disc_sim       = 1:nt_sim;

z.sim.t_start_sim           = t_start_sim;
z.sim.t_end_sim             = t_end_sim;
z.sim.dt_sim                = dt_sim;
z.sim.nt_sim                = nt_sim;
z.sim.time_cont_data        = z.time_data.time_cont;
z.sim.time_cont_sim         = time_cont_sim;
z.sim.time_disc_sim         = time_disc_sim;

if dt_sim > 0.007
    warning('Low sample frequencies lead to an instable system.')
end
if t_start_sim > 0 && not( enable_load_recorded_data )
    warning('Initial State is phrone to errors.')
end

z.cost_fun_offset = min( nt_sim, max(1, round(cost_fun_offset_sec / dt_sim)));

if z.enable_cost_fun_offset
    start_idx = z.cost_fun_offset;
else
    start_idx = 1;
end
step_idx = 1;
end_idx = nt_sim;

z.time_idx = start_idx:step_idx:end_idx;

end