function cost = cost_fun( optVec, z, meas, time_cont, x0)


optVec  = reshape(optVec, [], 1);
[xSim, torqueSim] = simulate_robot( optVec, z, time_cont, x0);



cost = mean( z.opt.regOptVec .* optVec.^2 ) + ...
       mean(mean( z.opt.weightState .* ( meas.xAll(:, z.time_idx) - xSim(:, z.time_idx)).^2  )) + ...
       mean(mean( z.opt.weightTorque .* ( meas.torqueMeas(:, z.time_idx) - torqueSim(:, z.time_idx)).^2  ));
   
end