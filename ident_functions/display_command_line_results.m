
function display_command_line_results(z, estOptVecAll, t_end,...
    enable_command_line_res, enable_command_line_bounds, lb, ub)


scaledOptVec    = z.opt.scaleOptVec .* estOptVecAll;
scaledLB        = z.opt.scaleOptVec .* lb;
scaledUB        = z.opt.scaleOptVec .* ub;

scaledOptVec    = reshape(scaledOptVec, 1, []);
scaledLB        = reshape(scaledLB, 1, []);
scaledUB        = reshape(scaledUB, 1, []);



format SHORTENG
if enable_command_line_res
    disp('--- IDENTIFIED PARAMETERS ---')
    fprintf('Time for identification: %1.3f seconds. \n', t_end)
    disp('LB: Lower Bound, UB: Upper Bound, EST: Estimated Parameter')
    disp('--- FRICTION ---')
    if enable_command_line_bounds
        fprintf('Viscous LB      :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledLB(z.opt.f_vis_idx))
    end
    fprintf('Viscous EST     :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledOptVec(z.opt.f_vis_idx))
    if enable_command_line_bounds
        fprintf('Viscous UB      :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledUB(z.opt.f_vis_idx))
        fprintf('Coulomb LB      :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledLB(z.opt.f_coul_idx))
    end
    fprintf('Coulomb EST     :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledOptVec(z.opt.f_coul_idx))
    if enable_command_line_bounds
        fprintf('Coulomb UB      :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledUB(z.opt.f_coul_idx))
        fprintf('Degressive A LB :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledLB(z.opt.f_a_idx))
    end
    fprintf('Degressive A EST:  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledOptVec(z.opt.f_a_idx))
    if enable_command_line_bounds
        fprintf('Degressive A UB :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledUB(z.opt.f_a_idx))
        fprintf('Degressive B LB :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledLB(z.opt.f_b_idx))
    end
    fprintf('Degressive B EST:  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledOptVec(z.opt.f_b_idx))
    if enable_command_line_bounds
        fprintf('Degressive B UB :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledUB(z.opt.f_b_idx))
        fprintf('Asymmetrical LB :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledLB(z.opt.f_asym_idx))
    end
    fprintf('Asymmetrical EST:  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledOptVec(z.opt.f_asym_idx))
    if enable_command_line_bounds
        fprintf('Asymmetrical UB :  %1.0f %1.0f %1.0f %1.0f %1.0f %1.0f\n',scaledUB(z.opt.f_asym_idx))
    end
    disp('--- PAYLOAD ---')
    if enable_command_line_bounds
        fprintf('Payload LB      : %1.0f kg\n',75 + 25*scaledLB(z.opt.m_pay_idx))
    end
    fprintf('Payload EST     : %1.0f kg\n',75 + 25*scaledOptVec(z.opt.m_pay_idx))
    if enable_command_line_bounds
        fprintf('Payload UB      : %1.0f kg\n',75 + 25*scaledUB(z.opt.m_pay_idx))
    end
end
end

