function [z, trueOptVecAll, ...
    initOptVecAll, lb, ub] = initialise_optimization(z, ...
    enable_random_init)

n_axis = z.n_axis;

n_opt = 5*n_axis + 1;
z.opt.n_opt = n_opt;

% define indizes of opt variables
z.opt.f_vis_idx      = 0*n_axis + (1:n_axis);
z.opt.f_coul_idx     = 1*n_axis + (1:n_axis);
z.opt.f_a_idx        = 2*n_axis + (1:n_axis);
z.opt.f_b_idx        = 3*n_axis + (1:n_axis);
z.opt.f_asym_idx     = 4*n_axis + (1:n_axis);
z.opt.m_pay_idx      = 5*n_axis + 1;


z.opt.weightState    = [1e-5*ones(n_axis,1); 1e-3*ones(n_axis,1)];
z.opt.weightTorque   = ones(n_axis,1);

regOptVec      = [1e-8, 1e-8, 5e-8, 1e-8, 1e-2;
                  1e-8, 1e-8, 5e-8, 1e-8, 1e-2;
                  1e-8, 1e-8, 5e-8, 1e-8, 1e-2;
                  1e-8, 1e-8, 5e-8, 1e-8, 1e-2;
                  1e-8, 1e-8, 5e-8, 1e-8, 1e-2;
                  1e-8, 1e-8, 5e-8, 1e-8, 1e-2];

regOptVec = reshape(regOptVec, [], 1);
regOptVec = [regOptVec; 1e-8];

scaleOptVec    = [5e2,  2e1,  5e1,  5e2,  5e0;
                  5e2,  2e1,  1e2,  5e3,  1e1;
                  5e2,  2e1,  5e1,  5e3,  1e1;
                  1e2,  2e1,  1e1,  5e2,  1e1;
                  1e2,  2e1,  1e1,  5e2,  1e1;
                  1e2,  2e1,  1e1,  5e2,  1e1];

scaleOptVec = reshape(scaleOptVec, [], 1);
scaleOptVec = [scaleOptVec; 1];

lb    = [0.1,  0.1,  0.1,  0.1,  -5;
         0.1,  0.1,  0.1,  0.1,  -5;
         0.1,  0.1,  0.1,  0.1,  -5;
         0.1,  0.1,  0.1,  0.1,  -5;
         0.1,  0.1,  0.1,  0.1,  -5;
         0.1,  0.1,  0.1,  0.1,  -5];

lb = reshape(lb, [], 1);
lb = [lb; 1];    
    
ub    = [10,  10,  10,  10,  5;
        10,  10,  10,  10,  5;
        10,  10,  10,  10,  5;
        10,  10,  10,  10,  5;
        10,  10,  10,  10,  5;
        10,  10,  10,  10,  5];

ub = reshape(ub, [], 1);
ub = [ub; 5];        
    
ident_results = load('data/ident_results.mat', 'estOptVecAll');

trueOptVecAll = reshape( ident_results.estOptVecAll, [], 1);

% check parameters
for k_ax = 1:n_axis
    if any( trueOptVecAll(k_ax,:) > ub(k_ax,:) )
        warning(['optVec exceeds upper bounds. Axis q', num2str(k_ax),'. On position ', num2str(trueOptVecAll(k_ax,:) > ub(k_ax,:)),'.'])
    end
    
    if any( any( trueOptVecAll(k_ax,:) < lb(k_ax,:) ))
        warning(['optVec exceeds lower bounds. Axis q', num2str(k_ax),'. On position ', num2str(trueOptVecAll(k_ax,:) < lb(k_ax,:)),'.'])
    end    
end


if enable_random_init
    % randomize over the complete workspace
    initOptVecAll = lb + (ub - lb) .* rand( size(ub) );
    
else
    initOptVecAll = trueOptVecAll;
    
end



ub = reshape(ub, [], 1);
lb = reshape(lb, [], 1);
initOptVecAll = reshape(initOptVecAll, [], 1);
trueOptVecAll = reshape(trueOptVecAll, [], 1);

z.opt.regOptVec = reshape(regOptVec, [], 1);
z.opt.scaleOptVec = reshape(scaleOptVec, [], 1);

end