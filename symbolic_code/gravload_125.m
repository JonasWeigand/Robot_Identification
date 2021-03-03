function G = gravload_125(in2)
%% GRAVLOAD - Computation of the configuration dependent vector of gravitational load forces/torques for Quantec Ultra SE 125 
% ========================================================================= 
%    
%    G = gravload(rob,q) 
%    G = rob.gravload(q) 
%    
%  Description:: 
%    Given a full set of joint variables this function computes the 
%    configuration dependent vector of gravitational load forces/torques. 
%    
%  Input:: 
%    rob: robot object of Quantec Ultra SE 125 specific class 
%    q:  6-element vector of generalized 
%         coordinates 
%    Angles have to be given in radians! 
%    
%  Output:: 
%    G:  [6x1] vector of gravitational load forces/torques 
%    
%  Example:: 
%    --- 
%    
%  Known Bugs:: 
%    --- 
%    
%  TODO:: 
%    --- 
%    
%  References:: 
%    1) Robot Modeling and Control - Spong, Hutchinson, Vidyasagar 
%    2) Modelling and Control of Robot Manipulators - Sciavicco, Siciliano 
%    3) Introduction to Robotics, Mechanics and Control - Craig 
%    4) Modeling, Identification & Control of Robots - Khalil & Dombre 
%    
%  Authors:: 
%    This is an autogenerated function! 
%    Code generator written by: 
%    Joern Malzahn 
%    2012 RST, Technische Universitaet Dortmund, Germany 
%    http://www.rst.e-technik.tu-dortmund.de 
%    
%  See also inertia.
%    
    
% Copyright (C) 1993-2021, by Peter I. Corke 
% Copyright (C) 2012-2021, by Joern Malzahn 
% 
% This file has been automatically generated with The Robotics Toolbox for Matlab (RTB). 
% 
% RTB and code generated with RTB is free software: you can redistribute it and/or modify 
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
% 
% The code generation module emerged during the work on a project funded by 
% the German Research Foundation (DFG, BE1569/7-1). The authors gratefully  
% acknowledge the financial support. 

%% Bugfix
%  In some versions the symbolic toolbox writes the constant $pi$ in
%  capital letters. This way autogenerated functions might not work properly.
%  To fix this issue a local variable is introduced:
PI = pi;
   




%    This function was generated by the Symbolic Math Toolbox version 8.5.
%    02-Mar-2021 15:15:12

q2 = in2(:,2);
q3 = in2(:,3);
q4 = in2(:,4);
q5 = in2(:,5);
t2 = cos(q2);
t3 = cos(q3);
t4 = cos(q4);
t5 = cos(q5);
t6 = sin(q2);
t7 = sin(q3);
t8 = sin(q4);
t9 = sin(q5);
t10 = t2.*t7.*t8.*2.5041006e+1;
t11 = t3.*t6.*t8.*2.5041006e+1;
t12 = t2.*t3.*2.0560500396e+3;
t13 = t6.*t7.*2.0560500396e+3;
t15 = t2.*t7.*1.082187207e+2;
t16 = t3.*t6.*1.082187207e+2;
t17 = t5.*t6.*t7.*4.528427454e+2;
t18 = t2.*t3.*t5.*4.528427454e+2;
t20 = t2.*t4.*t7.*t9.*4.528427454e+2;
t21 = t3.*t4.*t6.*t9.*4.528427454e+2;
t14 = -t12;
t19 = -t18;
G = [0.0,t2.*(-5.0235972102e+3)-t6.*3.3267672+t10+t11+t13+t14+t15+t16+t17+t19+t20+t21,t10+t11+t13+t14+t15+t16+t17+t19+t20+t21,cos(q2+q3).*(t4.*1.149588840882593e+21-t8.*t9.*2.078921936229228e+22).*(-2.178257574314557e-20),t4.*t17+t2.*t7.*t9.*4.528427454e+2+t3.*t6.*t9.*4.528427454e+2-t2.*t3.*t4.*t5.*4.528427454e+2,0.0];
