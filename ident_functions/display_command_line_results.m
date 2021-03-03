
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
    disp(['Time for identification: ',num2str(t_end),' seconds.'])
    disp('--- FRICTION ---')
    if enable_command_line_bounds
        disp(['Viscous LB : ',num2str(scaledLB(z.opt.f_vis_idx)),'.'])
    end
    disp(['Viscous EST: ',num2str(scaledOptVec(z.opt.f_vis_idx)),'.'])
    if enable_command_line_bounds
        disp(['Viscous UB : ',num2str(scaledUB(z.opt.f_vis_idx)),'.'])
        disp(['Coulomb LB : ',num2str(scaledLB(z.opt.f_coul_idx)),'.'])
    end
    disp(['Coulomb EST: ',num2str(scaledOptVec(z.opt.f_coul_idx)),'.'])
    if enable_command_line_bounds
        disp(['Coulomb UB : ',num2str(scaledUB(z.opt.f_coul_idx)),'.'])
        disp(['Degressive A LB : ',num2str(scaledLB(z.opt.f_a_idx)),'.'])
    end
    disp(['Degressive A EST: ',num2str(scaledOptVec(z.opt.f_a_idx)),'.'])
    if enable_command_line_bounds
        disp(['Degressive A UB : ',num2str(scaledUB(z.opt.f_a_idx)),'.'])
        disp(['Degressive B LB : ',num2str(scaledLB(z.opt.f_b_idx)),'.'])
    end
    disp(['Degressive B EST: ',num2str(scaledOptVec(z.opt.f_b_idx)),'.'])
    if enable_command_line_bounds
        disp(['Degressive B UB : ',num2str(scaledUB(z.opt.f_b_idx)),'.'])
        disp(['Asymmetrical LB : ',num2str(scaledLB(z.opt.f_asym_idx)),'.'])
    end
    disp(['Asymmetrical EST: ',num2str(scaledOptVec(z.opt.f_asym_idx)),'.'])
    if enable_command_line_bounds
        disp(['Asymmetrical UB : ',num2str(scaledUB(z.opt.f_asym_idx)),'.'])
    end
    disp('--- PAYLOAD ---')
    if enable_command_line_bounds
        disp(['Payload LB: ',num2str(75 + 25*scaledLB(z.opt.m_pay_idx)),'.'])
    end
    disp(['Payload est: ',num2str(75 + 25*scaledOptVec(z.opt.m_pay_idx)),'.'])
    if enable_command_line_bounds
        disp(['Payload UB: ',num2str(75 + 25*scaledUB(z.opt.m_pay_idx)),'.'])
    end
end
end

