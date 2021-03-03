function KR300 = mdl_KR300_dynamics_sym

% KR300 was modeled by Sebastian Harttig sebastian-harttig@gmx.net
%
% mdl_KUKAQuantecUltraSE Creates a model of KUKA Quantec KR300 R2500 ultra SE manipulator
%
% mdl_KUKAQuantecUltraSE is a script that creates the workspace variable KR300 which
% describes the kinematic and dynamic characteristics of a KUKA Quantec KR300 R2500 ultra SE manipulator using standard DH conventions. 
%
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
    'I', 0*[16733765, 29799119, 32814954, -1703664, 129384, 4404062]*10^-6, ...  % inertia tensor of link with respect to center of mass I = [L_xx, L_yy, L_zz, L_xy, L_yz, L_xz]
    'r', 0*[-353, 174, -4]*10^-3, ...                       % distance of ith origin to center of mass [x,y,z] in link reference frame
    'm', 0*395.40, ...                                                            % mass of link 
    'Jm',0* 0.00923, ...                                                          % actuator inertia 
    'G', 1798/7, ...                                                            % gear ratio
    'B', 0.001476346, ...                                                         % actuator viscous friction coefficient (actual value/G²)
    'Tc', [0.73192436, -0.73192436], ...                                              % actuator Coulomb friction coefficient for direction [-,+] (actual value/G)
    'qlim', [-147, 147]*deg_to_rad, ...                                                % maximum backward and forward link rotation
    'offset', 0*deg_to_rad);                                                        
    

L(2) = Link('revolute','d', -0.189, 'a', 1.15, 'alpha', 0, ...
    'I', 0*[7507819, 88886691, 88673761, 430046, 173157, -4396607]*10^-6, ...
    'r', 0*[-709, -1, 23]*10^-3, ...
    'm', 0*339.12, ...
    'Jm', 0*0.0118, ...
    'G', 1872/7, ...
    'B', 0.010681832, ...
    'Tc', [1.832264957 -1.832264957], ...
    'qlim', [-140, -5]*deg_to_rad, ...
    'offset', 0*deg_to_rad);
                                                                   

L(3) = Link('revolute','d', 0.189, 'a', 0.041, 'alpha', -pi/2, ...
    'I', 0*[10783798, 10186135, 1943179, 118474, -606384, -101950]*10^-6, ...
    'r', 0*[-18, -18, -76]*10^-3, ...
    'm', 0*105.21, ...
    'Jm',0* 0.0118, ...
    'G', 757/3, ...
    'B', 0.08398663, ...
    'Tc', [1.862615588, -1.862615588], ...
    'qlim', [-112 153]*deg_to_rad, ...
    'offset', 90*deg_to_rad);


L(4) = Link('revolute','d', -1, 'a', 0, 'alpha', pi/2,  ...
    'I', 0*[425035, 217993, 428465, -4, -11353, -27]*10^-6, ...
    'r', 0*[0, 236, 1]*10^-3, ...
    'm', 0*35.80, ...
    'Jm', 0*0.00173, ...
    'G', 221, ...
    'B', 0.001916077, ...
    'Tc', [0.447963801, -0.447963801], ...
    'qlim', [-350, 350]*deg_to_rad, ...
    'offset', 0*deg_to_rad);

L(5) = Link('revolute','d', 0, 'a', 0, 'alpha', -pi/2,  ...
    'I', 0*[283826, 229562, 258266, -4, -19521, -120]*10^-6, ...
    'r', 0*[0, -80, -9]*10^-3, ...
    'm',0* 31.46, ...
    'Jm',0* 0.00173, ...
    'G', 5032/21, ...
    'B', 0.001629877, ...
    'Tc', [0.413155803, -0.413155803], ...
    'qlim', [-122.5 122.5]*deg_to_rad, ...
    'offset', 0*deg_to_rad);




%% new total mass and center of mass for axis 6
% mass link: 17.78 kg at -0.05 m
% mass payload: 150 kg at 0.1 m
% new total mass: 167.78
% new center of mass: (17.78*(-0.05) + 150*0.1)/167.78 m = 0.0841 m

% values for axis 6 without payload
%     'r', [0, 0, -50]*10^-3, ...
%     'm', 17.78, ...

% new values for axis 6 with payload
%     'I', [60429, 60382, 90701, 21, 6, 4]*10^-6, ...
%     'r', [0, 0, 84.1]*10^-3, ...


r_payload = 100; % mm
m_payload = sym('m_pay', 'real'); % kg

L(6) = Link('revolute','d',-0.24, ...
    'a', 0, 'alpha', pi,  ...
    'I', zeros(1,6), ...
    'r', [0, 0, r_payload]*10^-3, ...
    'm', m_payload, ...
    'Jm',0* 0.00173, ...
    'G', 206793/1340, ...
    'B', 0.002205322, ...
    'Tc', [0.372594817, -0.372594817], ...
    'qlim', [-350 350]*deg_to_rad);

KR300 = SerialLink(L, 'name', 'Quantec Ultra SE Sym', 'base', trotx(180,'deg'),'tool', troty(-90,'deg'), ...
    'manufacturer', 'KUKA', 'ikine', 'kr5');


% KR300.gravity = [0 0 9.81];
% % 
% qs = [0,-pi/2, pi/2,0,0,0];
% 
% 
% M = KR300.inertia(qs);
% KR300.plot(qs);


% 
% n_axis = 6;
% m = sym('m', [6, 1]);
% r = sym('r', [6, 3]);
% I = sym('I', [6, 6]);

% qsym = sym('q',[1, 6]);

% qdsym = sym('qd',[1, 6]);
% 
% for k1 = 1:n_axis
%     KR300.links(k1).m = m(k1, :); % link mass, kg, >0
%     KR300.links(k1).r = r(k1, :); % link center of gravity, m, [x,y,z]
%     KR300.links(k1).I = I(k1, :); % link intertia, kgm^2, [xx, yy, zz, xy, xz, yz], positiv definit im schwerpunkt
% end

% M = KR300.inertia(qsym)
% 
% save('inertia_sym.mat', 'M')
% 
% simplify(M_simple)


% % G = KR300.gravload( qsym );
% % C = KR300.coriolis( qsym, qdsym );

cg = CodeGenerator(KR300, 'mex');

cg.geninertia()
cg.gengravload()
cg.gencoriolis()


end


