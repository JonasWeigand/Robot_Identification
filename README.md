# Robot_Identification
Real-time nonlinear parameter identification for an industrial robot.

MASTER_identification 
starts the identification of parameters given a recorded movement.

MASTER_create_symbolic_robot 
computes the symbolic solution of the robot model, including inertia, gravitational load and coriolis matrix.

MASTER_create_traj_for_robot 
generates the trajectories and data needed for execution of of movement on the target system.


Jonas Weigand
jonas.weigand@mv.uni-kl.de
03.03.2021

# Requirements

MATLAB global optimization toolbox for solver surrogate_opt. Obligatory for this solver.

MATLAB parallel computing toolbox for faster solution of the surrogate solver. Optional.

MATLAB coder to compile the nonlinear differential equation. 
Optional, coder is only required if the file is updated.

MATLAB symbolic toolbox and Peter Corke Robotics toolbox for update of the robot model.
Optional, only required if the model is updated and MASTER_create_symbolic_robot file is executed.
