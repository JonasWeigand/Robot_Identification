function [tau, press] = hydraulic_weight_counterbalance(angle_ax_2)
%% Calculate the torque on joint 2 caused by the hydraulic weight counterbalance


% measured data from robot for comparison
% p_data = 1e5*[170, 167, 164, 162, 164, 170, 180, 190, 200]; % pressure in bar
% a_data =  -1*[120, 110, 100, 90,  80,   70,  60,  50,  40]; % angle in deg
% press = interp1(a_data,p_data,angle_ax_2,'linear','extrap');

% Input:   angle_ax_2 - angle link 2 in deg 
% Output:  tau - torque acting on link 2 resulting from hydraulic spring
%          press - pressure in hydraulic spring in Pa



%% Parameters for Bucher Hydraulics Bladder Accumulator Piston 0000179517 GA12 24967030000049.02.1

% Geometric Parameters Anchor Points (measured on robot CAD-model)
D = 8e-1; % direct distance between anchor point of spring on link 1 to axis 2
k = 2e-1; % distance anchor point of spring on link 2 to axis 2
l = D-k; % lenght of spring in fully retracted position

% Geometric Parameters Piston
Diameter_Rod = 30e-3;                                    % in m
Diameter_Piston = 55e-3;                                 % in m, approximated using Website of Bucher, DIN EN 22553 and the width of welding seam on piston as well as taking the max ammount of force needed)
Area_Piston = pi*(Diameter_Piston^2 - Diameter_Rod^2)/4; % in m^2

% % fluid parameters Nitrogen
mass_nitrogen = 2*0.0795;           % in kg
v_max = 2* 0.00048;                 % in m^3
Z_176bar = 1.01 ;                   % compressibility factor nitrogen at pressure of 176 bar and T = 295.5 K (at 328 K: Z = 1.02986)
realGasFactor_nitrogen = 296.8;
temperature = 328;                  % max operating temperature of the robot: T_max = 328 K



%% Geometry calculation
% set angle alpha to deviation from vertical pose -5°
delta = angle_ax_2 + 95*pi/180;  % set deviation from vertical pose -5° (due to mount of spring, the vertical pose is not at minimum force. That is at -95°)

% calculate displacement of piston rod dl in m with cosine-rule
dl = sqrt(D^2 + k^2 - 2*D*k*cos(delta))-l;

% calculate lever arm h in m
h = (sin(delta)*D*k)/(dl+l); % utilizing sine-rule

% calcuate pressure
press = (Z_176bar * realGasFactor_nitrogen * temperature * mass_nitrogen) / ( v_max - dl * Area_Piston);

% calculate torque
tau = h*press*Area_Piston;

end