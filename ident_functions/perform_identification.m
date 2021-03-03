function    estOptVecAll = perform_identification(z, meas, time_cont_sim, x0, ...
    enable_warm_start_ident, enable_identification,...
    enable_mixed_integer_opt,...
    keep_last_points, trueOptVecAll, initOptVecAll, ...
    lb, ub, opt_surrogate)


if enable_identification
    
    % define cost function
    optFun = @(optVec) cost_fun( optVec, z, meas, time_cont_sim, x0);
      
    if enable_warm_start_ident
        
        ident_results = load('data/ident_results.mat', 'trails');
                
        n_trails                                = numel(ident_results.trails.Fval);
        n_keep_trails                           = floor(n_trails*keep_last_points);
        n_keep_trails(n_keep_trails < 1)        = 1;
        n_keep_trails(n_keep_trails > n_trails) = n_trails;
        
        idx_rand_all                            = randperm(n_trails);
        idx_rand_keep                           = sort(idx_rand_all(1:n_keep_trails));
        
        ident_results.trails.X                  = ident_results.trails.X(idx_rand_keep, :);
        ident_results.trails.Fval               = ident_results.trails.Fval(idx_rand_keep, :);
        
        opt_surrogate.InitialPoints = ident_results.trails;
    end
    
    
    if enable_mixed_integer_opt
        intcon = numel(lb);
        
    else
        intcon = [];
    end
    
    
    [estOptVecAll, fval, ~, ~, trails] = surrogateopt(optFun, lb, ub, intcon, opt_surrogate);
    estOptVecAll = reshape(estOptVecAll, [], 1);
    
    save('data/ident_results.mat','estOptVecAll','initOptVecAll','trueOptVecAll','lb',...
        'ub','z', 'fval', 'trails');
    
    
else
    estOptVecAll = trueOptVecAll;
    
end

end