function MASTER_update_robot_model

addpath('create_traj_for_robot', 'data', 'robot_model',...
    'symbolic_code', 'ident_functions')


% prepare data for real robot
enable_update_kinematics                    = true;
enable_update_dynamics                      = true;



if enable_update_kinematics
    tic
    Robot_reference_kinematics;
    disp('Update of kinematics is done.')
    toc
end


if enable_update_dynamics
    tic
    Robot_reference_dynamics;
    disp('Update of dynamics is done.')
    toc
end

end
