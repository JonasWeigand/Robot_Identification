function robot = model_KUKA_Quantec_Ultra_KR300_dynamics


%% model_KUKA_Quantec_Ultra_KR300
% contains a model of the KUKA in the Robot Robotics Toolbox for MATLAB by
% Peter Corke

% Jonas Weigand, Gajanan Kanagalingam, Sebastian Harttig
% jonas.weigand@mv.uni-kl.de
% Chair of Machine Tools and Control Systems, TU Kaiserslautern, Germany
% 02-03-2021


%% This file is part of The Robotics Toolbox for MATLAB (RTB).
% Copyright of the RTB (C) 1993-2015, by Peter I. Corke
% RTB is free software: you can redistribute it and/or modify
% it under the terms of the GNU Lesser General Public License as published by
% the Free Software Foundation, either version 3 of the License, or
% (at your option) any later version.
% 
% RTB is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU Lesser General Public License for more details.
% 
% You should have received a copy of the GNU Leser General Public License
% along with RTB.  If not, see <http://www.gnu.org/licenses/>.
%
% http://www.petercorke.com



%% Link parameter postulation

deg_to_rad = pi/180;


L(1) = Link('revolute',...  
    'd', -0.675, 'a', 0.350, 'alpha',pi/2, ...                                  % link length, link offset, link twist (Denavit-Hartenberg-Notation)
    'I', [16733765, 29799119, 32814954, -1703664, 129384, 4404062]*10^-6, ...   % inertia tensor of link with respect to center of mass I = [L_xx, L_yy, L_zz, L_xy, L_yz, L_xz]
    'r', [-353, 174, -4]*10^-3, ...                                             % distance of ith origin to center of mass [x,y,z] in link reference frame
    'm', 395.40, ...                                                            % mass of link 
    'Jm', 0.00923, ...                                                          % actuator inertia 
    'G', 1798/7, ...                                                            % gear ratio
    'B', 0.001476346, ...                                                       % actuator viscous friction coefficient (actual value/G²)
    'Tc', [0.73192436, -0.73192436], ...                                        % actuator Coulomb friction coefficient for direction [-,+] (actual value/G)
    'qlim', [-147, 147]*deg_to_rad, ...                                         % maximum backward and forward link rotation
    'offset', 0*deg_to_rad);                                                        
    

L(2) = Link('revolute','d', -0.189, 'a', 1.15, 'alpha', 0, ...
    'I', [7507819, 88886691, 88673761, 430046, 173157, -4396607]*10^-6, ...
    'r', [-709, -1, 23]*10^-3, ...
    'm', 339.12, ...
    'Jm', 0.0118, ...
    'G', 1872/7, ...
    'B', 0.010681832, ...
    'Tc', [1.832264957 -1.832264957], ...
    'qlim', [-140, -5]*deg_to_rad, ...
    'offset', 0*deg_to_rad);
                                                                   

L(3) = Link('revolute','d', 0.189, 'a', 0.041, 'alpha', -pi/2, ...
    'I', [10783798, 10186135, 1943179, 118474, -606384, -101950]*10^-6, ...
    'r', [-18, -18, -76]*10^-3, ...
    'm', 105.21, ...
    'Jm', 0.0118, ...
    'G', 757/3, ...
    'B', 0.08398663, ...
    'Tc', [1.862615588, -1.862615588], ...
    'qlim', [-112 153]*deg_to_rad, ...
    'offset', 90*deg_to_rad);


L(4) = Link('revolute','d', -1, 'a', 0, 'alpha', pi/2,  ...
    'I', [425035, 217993, 428465, -4, -11353, -27]*10^-6, ...
    'r', [0, 236, 1]*10^-3, ...
    'm', 35.80, ...
    'Jm', 0.00173, ...
    'G', 221, ...
    'B', 0.001916077, ...
    'Tc', [0.447963801, -0.447963801], ...
    'qlim', [-350, 350]*deg_to_rad, ...
    'offset', 0*deg_to_rad);

L(5) = Link('revolute','d', 0, 'a', 0, 'alpha', -pi/2,  ...
    'I', [283826, 229562, 258266, -4, -19521, -120]*10^-6, ...
    'r', [0, -80, -9]*10^-3, ...
    'm', 31.46, ...
    'Jm', 0.00173, ...
    'G', 5032/21, ...
    'B', 0.001629877, ...
    'Tc', [0.413155803, -0.413155803], ...
    'qlim', [-122.5 122.5]*deg_to_rad, ...
    'offset', 0*deg_to_rad);

% payload is defined as additional weight on joint 6
m_axis6 = 17.78; % kg
r_axis6 = -50; % mm
r_payload = 100; % mm
m_payload = 200; % kg
m_payload_axis = m_payload + m_axis6;
r_payload_axis = (m_payload*r_payload + m_axis6*r_axis6)/m_payload_axis; 

L(6) = Link('revolute','d',-0.24, ...
    'a', 0, 'alpha', pi,  ...
    'r', [0, 0, r_payload_axis]*10^-3, ...
    'm', m_payload_axis, ...
    'Jm', 0.00173, ...
    'G', 206793/1340, ...
    'B', 0.002205322, ...
    'Tc', [0.372594817, -0.372594817], ...
    'qlim', [-350 350]*deg_to_rad);

robot = SerialLink(L, 'name', 'Quantec Ultra', 'base', trotx(180,'deg'),'tool', troty(-90,'deg'), ...
    'manufacturer', 'KUKA', 'ikine', 'kr5');




