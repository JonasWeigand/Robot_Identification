function MASTER_create_symbolic_robot
%% This file create symbolic models of the robot with different payloads




% Jonas Weigand
% jonas.weigand@mv.uni-kl.de
% Chair of Machine Tools and Control Systems, TU Kaiserslautern, Germany
% 02-03-2021

% define all payloads
m_all_payloads = [100, 125, 150, 175, 200]; % kg

% get default robot
robot = model_KUKA_Quantec_Ultra_KR300();


for pay_idx = 1:length(m_all_payloads)

    m_payload = m_all_payloads(pay_idx);

    % payload is defined as additional weight on joint 6
    m_axis6 = 17.78; % kg
    r_axis6 = -50; % mm
    r_payload = 100; % mm
    m_payload_axis = m_payload + m_axis6;
    r_payload_axis = (m_payload*r_payload + m_axis6*r_axis6)/m_payload_axis; 

    
    robot.links(6).r = [0, 0, r_payload_axis]*10^-3;
    robot.links(6).m = m_payload_axis;
    robot.name = ['Quantec Ultra ', num2str(m_payload)];

cg = CodeGenerator(robot);
cg.genccode = false;
cg.genmex = false;
cg.compilemex = false;


cg.geninertia()
cg.gengravload()
cg.gencoriolis()


end
end

