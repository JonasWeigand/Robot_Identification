function MASTER_create_traj_for_robot

%% ------------------------------------------------------------------------
%  --------------------------------- INIT ---------------------------------
%  ------------------------------------------------------------------------

addpath('create_traj_for_robot', 'data', 'robot_model')


% prepare data for real robot
enable_update_kinematics                    = true;
enable_update_dynamics                      = true;
enable_prepare_data_for_target_system       = true;



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



if enable_prepare_data_for_target_system
    prepare_data_for_target;
end

end