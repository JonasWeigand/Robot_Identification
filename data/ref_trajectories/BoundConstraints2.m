function c = BoundConstraints2(v,t,omega__f,numberOfConstraints)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
c = zeros(numberOfConstraints,length(t));

c(1,:) = v(1) / omega__f * sin(omega__f * t) - v(31) / omega__f * cos(omega__f * t) + v(2) / omega__f * sin(0.2e1 * omega__f * t) / 0.2e1 - v(32) / omega__f * cos(0.2e1 * omega__f * t) / 0.2e1 + v(3) / omega__f * sin(0.3e1 * omega__f * t) / 0.3e1 - v(33) / omega__f * cos(0.3e1 * omega__f * t) / 0.3e1 + v(4) / omega__f * sin(0.4e1 * omega__f * t) / 0.4e1 - v(34) / omega__f * cos(0.4e1 * omega__f * t) / 0.4e1 + v(5) / omega__f * sin(0.5e1 * omega__f * t) / 0.5e1 - v(35) / omega__f * cos(0.5e1 * omega__f * t) / 0.5e1 + v(61) ;
c(2,:) = v(6) / omega__f * sin(omega__f * t) - v(36) / omega__f * cos(omega__f * t) + v(7) / omega__f * sin(0.2e1 * omega__f * t) / 0.2e1 - v(37) / omega__f * cos(0.2e1 * omega__f * t) / 0.2e1 + v(8) / omega__f * sin(0.3e1 * omega__f * t) / 0.3e1 - v(38) / omega__f * cos(0.3e1 * omega__f * t) / 0.3e1 + v(9) / omega__f * sin(0.4e1 * omega__f * t) / 0.4e1 - v(39) / omega__f * cos(0.4e1 * omega__f * t) / 0.4e1 + v(10) / omega__f * sin(0.5e1 * omega__f * t) / 0.5e1 - v(40) / omega__f * cos(0.5e1 * omega__f * t) / 0.5e1 + v(62) ;
c(3,:) = v(11) / omega__f * sin(omega__f * t) - v(41) / omega__f * cos(omega__f * t) + v(12) / omega__f * sin(0.2e1 * omega__f * t) / 0.2e1 - v(42) / omega__f * cos(0.2e1 * omega__f * t) / 0.2e1 + v(13) / omega__f * sin(0.3e1 * omega__f * t) / 0.3e1 - v(43) / omega__f * cos(0.3e1 * omega__f * t) / 0.3e1 + v(14) / omega__f * sin(0.4e1 * omega__f * t) / 0.4e1 - v(44) / omega__f * cos(0.4e1 * omega__f * t) / 0.4e1 + v(15) / omega__f * sin(0.5e1 * omega__f * t) / 0.5e1 - v(45) / omega__f * cos(0.5e1 * omega__f * t) / 0.5e1 + v(63) ;
c(4,:) = v(16) / omega__f * sin(omega__f * t) - v(46) / omega__f * cos(omega__f * t) + v(17) / omega__f * sin(0.2e1 * omega__f * t) / 0.2e1 - v(47) / omega__f * cos(0.2e1 * omega__f * t) / 0.2e1 + v(18) / omega__f * sin(0.3e1 * omega__f * t) / 0.3e1 - v(48) / omega__f * cos(0.3e1 * omega__f * t) / 0.3e1 + v(19) / omega__f * sin(0.4e1 * omega__f * t) / 0.4e1 - v(49) / omega__f * cos(0.4e1 * omega__f * t) / 0.4e1 + v(20) / omega__f * sin(0.5e1 * omega__f * t) / 0.5e1 - v(50) / omega__f * cos(0.5e1 * omega__f * t) / 0.5e1 + v(64) ;
c(5,:) = v(21) / omega__f * sin(omega__f * t) - v(51) / omega__f * cos(omega__f * t) + v(22) / omega__f * sin(0.2e1 * omega__f * t) / 0.2e1 - v(52) / omega__f * cos(0.2e1 * omega__f * t) / 0.2e1 + v(23) / omega__f * sin(0.3e1 * omega__f * t) / 0.3e1 - v(53) / omega__f * cos(0.3e1 * omega__f * t) / 0.3e1 + v(24) / omega__f * sin(0.4e1 * omega__f * t) / 0.4e1 - v(54) / omega__f * cos(0.4e1 * omega__f * t) / 0.4e1 + v(25) / omega__f * sin(0.5e1 * omega__f * t) / 0.5e1 - v(55) / omega__f * cos(0.5e1 * omega__f * t) / 0.5e1 + v(65) ;
c(6,:) = v(26) / omega__f * sin(omega__f * t) - v(56) / omega__f * cos(omega__f * t) + v(27) / omega__f * sin(0.2e1 * omega__f * t) / 0.2e1 - v(57) / omega__f * cos(0.2e1 * omega__f * t) / 0.2e1 + v(28) / omega__f * sin(0.3e1 * omega__f * t) / 0.3e1 - v(58) / omega__f * cos(0.3e1 * omega__f * t) / 0.3e1 + v(29) / omega__f * sin(0.4e1 * omega__f * t) / 0.4e1 - v(59) / omega__f * cos(0.4e1 * omega__f * t) / 0.4e1 + v(30) / omega__f * sin(0.5e1 * omega__f * t) / 0.5e1 - v(60) / omega__f * cos(0.5e1 * omega__f * t) / 0.5e1 + v(66) ;
c(7,:) = v(1) * cos(omega__f * t) + v(31) * sin(omega__f * t) + v(2) * cos(0.2e1 * omega__f * t) + v(32) * sin(0.2e1 * omega__f * t) + v(3) * cos(0.3e1 * omega__f * t) + v(33) * sin(0.3e1 * omega__f * t) + v(4) * cos(0.4e1 * omega__f * t) + v(34) * sin(0.4e1 * omega__f * t) + v(5) * cos(0.5e1 * omega__f * t) + v(35) * sin(0.5e1 * omega__f * t) ;
c(8,:) = v(6) * cos(omega__f * t) + v(36) * sin(omega__f * t) + v(7) * cos(0.2e1 * omega__f * t) + v(37) * sin(0.2e1 * omega__f * t) + v(8) * cos(0.3e1 * omega__f * t) + v(38) * sin(0.3e1 * omega__f * t) + v(9) * cos(0.4e1 * omega__f * t) + v(39) * sin(0.4e1 * omega__f * t) + v(10) * cos(0.5e1 * omega__f * t) + v(40) * sin(0.5e1 * omega__f * t) ;
c(9,:) = v(11) * cos(omega__f * t) + v(41) * sin(omega__f * t) + v(12) * cos(0.2e1 * omega__f * t) + v(42) * sin(0.2e1 * omega__f * t) + v(13) * cos(0.3e1 * omega__f * t) + v(43) * sin(0.3e1 * omega__f * t) + v(14) * cos(0.4e1 * omega__f * t) + v(44) * sin(0.4e1 * omega__f * t) + v(15) * cos(0.5e1 * omega__f * t) + v(45) * sin(0.5e1 * omega__f * t) ;
c(10,:) = v(16) * cos(omega__f * t) + v(46) * sin(omega__f * t) + v(17) * cos(0.2e1 * omega__f * t) + v(47) * sin(0.2e1 * omega__f * t) + v(18) * cos(0.3e1 * omega__f * t) + v(48) * sin(0.3e1 * omega__f * t) + v(19) * cos(0.4e1 * omega__f * t) + v(49) * sin(0.4e1 * omega__f * t) + v(20) * cos(0.5e1 * omega__f * t) + v(50) * sin(0.5e1 * omega__f * t) ;
c(11,:) = v(21) * cos(omega__f * t) + v(51) * sin(omega__f * t) + v(22) * cos(0.2e1 * omega__f * t) + v(52) * sin(0.2e1 * omega__f * t) + v(23) * cos(0.3e1 * omega__f * t) + v(53) * sin(0.3e1 * omega__f * t) + v(24) * cos(0.4e1 * omega__f * t) + v(54) * sin(0.4e1 * omega__f * t) + v(25) * cos(0.5e1 * omega__f * t) + v(55) * sin(0.5e1 * omega__f * t) ;
c(12,:) = v(26) * cos(omega__f * t) + v(56) * sin(omega__f * t) + v(27) * cos(0.2e1 * omega__f * t) + v(57) * sin(0.2e1 * omega__f * t) + v(28) * cos(0.3e1 * omega__f * t) + v(58) * sin(0.3e1 * omega__f * t) + v(29) * cos(0.4e1 * omega__f * t) + v(59) * sin(0.4e1 * omega__f * t) + v(30) * cos(0.5e1 * omega__f * t) + v(60) * sin(0.5e1 * omega__f * t) ;
c(13,:) = v(31) * cos(omega__f * t) - v(1) * sin(omega__f * t) + 0.2e1 * v(32) * cos(0.2e1 * omega__f * t) - 0.2e1 * v(2) * sin(0.2e1 * omega__f * t) + 0.3e1 * v(33) * cos(0.3e1 * omega__f * t) - 0.3e1 * v(3) * sin(0.3e1 * omega__f * t) + 0.4e1 * v(34) * cos(0.4e1 * omega__f * t) - 0.4e1 * v(4) * sin(0.4e1 * omega__f * t) + 0.5e1 * v(35) * cos(0.5e1 * omega__f * t) - 0.5e1 * v(5) * sin(0.5e1 * omega__f * t) ;
c(14,:) = v(36) * cos(omega__f * t) - v(6) * sin(omega__f * t) + 0.2e1 * v(37) * cos(0.2e1 * omega__f * t) - 0.2e1 * v(7) * sin(0.2e1 * omega__f * t) + 0.3e1 * v(38) * cos(0.3e1 * omega__f * t) - 0.3e1 * v(8) * sin(0.3e1 * omega__f * t) + 0.4e1 * v(39) * cos(0.4e1 * omega__f * t) - 0.4e1 * v(9) * sin(0.4e1 * omega__f * t) + 0.5e1 * v(40) * cos(0.5e1 * omega__f * t) - 0.5e1 * v(10) * sin(0.5e1 * omega__f * t) ;
c(15,:) = v(41) * cos(omega__f * t) - v(11) * sin(omega__f * t) + 0.2e1 * v(42) * cos(0.2e1 * omega__f * t) - 0.2e1 * v(12) * sin(0.2e1 * omega__f * t) + 0.3e1 * v(43) * cos(0.3e1 * omega__f * t) - 0.3e1 * v(13) * sin(0.3e1 * omega__f * t) + 0.4e1 * v(44) * cos(0.4e1 * omega__f * t) - 0.4e1 * v(14) * sin(0.4e1 * omega__f * t) + 0.5e1 * v(45) * cos(0.5e1 * omega__f * t) - 0.5e1 * v(15) * sin(0.5e1 * omega__f * t) ;
c(16,:) = v(46) * cos(omega__f * t) - v(16) * sin(omega__f * t) + 0.2e1 * v(47) * cos(0.2e1 * omega__f * t) - 0.2e1 * v(17) * sin(0.2e1 * omega__f * t) + 0.3e1 * v(48) * cos(0.3e1 * omega__f * t) - 0.3e1 * v(18) * sin(0.3e1 * omega__f * t) + 0.4e1 * v(49) * cos(0.4e1 * omega__f * t) - 0.4e1 * v(19) * sin(0.4e1 * omega__f * t) + 0.5e1 * v(50) * cos(0.5e1 * omega__f * t) - 0.5e1 * v(20) * sin(0.5e1 * omega__f * t) ;
c(17,:) = v(51) * cos(omega__f * t) - v(21) * sin(omega__f * t) + 0.2e1 * v(52) * cos(0.2e1 * omega__f * t) - 0.2e1 * v(22) * sin(0.2e1 * omega__f * t) + 0.3e1 * v(53) * cos(0.3e1 * omega__f * t) - 0.3e1 * v(23) * sin(0.3e1 * omega__f * t) + 0.4e1 * v(54) * cos(0.4e1 * omega__f * t) - 0.4e1 * v(24) * sin(0.4e1 * omega__f * t) + 0.5e1 * v(55) * cos(0.5e1 * omega__f * t) - 0.5e1 * v(25) * sin(0.5e1 * omega__f * t) ;
c(18,:) = v(56) * cos(omega__f * t) - v(26) * sin(omega__f * t) + 0.2e1 * v(57) * cos(0.2e1 * omega__f * t) - 0.2e1 * v(27) * sin(0.2e1 * omega__f * t) + 0.3e1 * v(58) * cos(0.3e1 * omega__f * t) - 0.3e1 * v(28) * sin(0.3e1 * omega__f * t) + 0.4e1 * v(59) * cos(0.4e1 * omega__f * t) - 0.4e1 * v(29) * sin(0.4e1 * omega__f * t) + 0.5e1 * v(60) * cos(0.5e1 * omega__f * t) - 0.5e1 * v(30) * sin(0.5e1 * omega__f * t) ;

end



