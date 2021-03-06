# Robot Identification
Real-time nonlinear parameter identification for an industrial robot. Code includes measurements and algorithm for a single batch optimization.
This contribution is submitted to IROS 2021. The code features three entry points:

MASTER_identification 
Starts the identification of parameters given a recorded movement.

MASTER_create_symbolic_robot 
Computes the symbolic solution of the robot model, including inertia, gravitational load and coriolis matrix.
Only required if the robot model is changed.

MASTER_create_traj_for_robot 
Generates the trajectories and data needed for execution on the target system.
Only required if a new experiment shell be designed and executed on the robot.

Jonas Weigand \
Researcher at the Technical University Kaiserslautern, Chair of Machine Tools and Control Systems\
and at the German Research Center for Artificial Intelligence, Kaiserslautern.\
jonas.weigand@mv.uni-kl.de\
March 2021

# Requirements
All algorithms run in MATLAB.

MATLAB global optimization toolbox is required for the surrogateopt solver. Obligatory for this implementation. 
However, other global optimization solvers such as https://nlopt.readthedocs.io/en/latest/ can be applied.

MATLAB parallel computing toolbox is applied for faster computation of the surrogate solver. Optional.

MATLAB coder is required to compile the robot simulator including the nonlinear differential equation. 
Optional, coder is only required if the simulator is updated.
Currently the code is compiled in both, windows and linux.

MATLAB symbolic toolbox and robotics toolbox by Peter Corke are required to update the robot model.\
https://petercorke.com/toolboxes/robotics-toolbox/ \
Optional, only required if the model is updated and if the MASTER_create_symbolic_robot file is executed.
