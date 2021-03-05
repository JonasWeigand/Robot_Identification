function [M_inverse, C, G, M] = robot_dynamics(q, qd, m_pay)

% transfer from relative to global coordiantes
qs = [0 -pi/2 pi/2 0 0 0];
q_global = q' + qs;

% enforce bounds
m_pay(m_pay < 1) = 1;
m_pay(m_pay > 5) = 5;

m_pay_low   = floor(m_pay);
m_pay_high  = ceil(m_pay);

[M_inverse_high, C_high, G_high, M_high] = calc_model(m_pay_high, q_global, qd);

% if m_pay is already an integer, then m_pay = m_pay_low = m_pay_high
% and the model does not need to be interpo
if m_pay_low == m_pay_high
    
    M_inverse = M_inverse_high;
    C = C_high;
    G = G_high;
    M = M_high;
    
else
    
    [M_inverse_low, C_low, G_low, M_low] = calc_model(m_pay_low, q_global, qd);
    
    
    M_inverse = M_inverse_low + (M_inverse_high - M_inverse_low) .* ...
        ( m_pay - m_pay_low ) / ( m_pay_high - m_pay_low );
    C = C_low + (C_high - C_low) .* ( m_pay - m_pay_low ) / ( m_pay_high - m_pay_low );
    G = G_low + (G_high - G_low) .* ( m_pay - m_pay_low ) / ( m_pay_high - m_pay_low );
    M = M_low + (M_high - M_low) .* ( m_pay - m_pay_low ) / ( m_pay_high - m_pay_low );
    
end

% hydraulic counter weight
[tau_hyd, ~] = hydraulic_weight_counterbalance( q_global(2) );
G(2) = G(2) + tau_hyd;


    function [M_inverse_calc, C_calc, G_calc, M_calc] = calc_model(m_pay_cand, q_global, qd)
        switch m_pay_cand
            case 1
                M_calc = inertia_100( q_global );
                C_calc = coriolis_100( q_global, qd' );
                G_calc = gravload_100( q_global )';
            case 2
                M_calc = inertia_125( q_global );
                C_calc = coriolis_125( q_global, qd' );
                G_calc = gravload_125( q_global )';
            case 3
                M_calc = inertia_150( q_global );
                C_calc = coriolis_150( q_global, qd' );
                G_calc = gravload_150( q_global )';
            case 4
                M_calc = inertia_175( q_global );
                C_calc = coriolis_175( q_global, qd' );
                G_calc = gravload_175( q_global )';
            case 5
                M_calc = inertia_200( q_global );
                C_calc = coriolis_200( q_global, qd' );
                G_calc = gravload_200( q_global )';
                
            otherwise
                % for code generation
                M_calc = eye(6);
                C_calc = eye(6);
                G_calc = zeros(6, 1);
                
        end
        M_inverse_calc = M_calc^-1;
        