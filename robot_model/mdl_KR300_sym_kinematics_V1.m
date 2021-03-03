% define DH parameters
%            theta    d           a       alpha
links = [
	    Link([pi/2  -0.675      0.35     pi/2])
		Link([0     -0.189      1.15     pi])
		Link([0     -0.189      -0.041   -pi/2])
		Link([0     -1          0        pi/2])
		Link([0     0           0        -pi/2])
		Link([0     0           0        pi])
	];

KR300=SerialLink(links, 'name', 'Kuka KR5');
KR300.tool=troty(-90,'deg')*trotx(180,'deg')*transl([0.24 0 0]);
KR300.base=trotx(180,'deg');
KR300.ikineType = 'kr5';
KR300.gravity = [0 0 9.81];

% useful poses
qs = [0 -pi/2 0 0 0 0];
