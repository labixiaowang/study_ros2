import launch
import launch_ros
from ament_index_python.packages import get_package_share_directory
import os

import launch_ros.parameter_descriptions

def generate_launch_description():
    # 获取默认的URDF文件路径
    urdf_package_path = get_package_share_directory('fishbot_description')
    default_xacro_file_path =os.path.join(urdf_package_path, 'urdf', 'robot/robot.urdf.xacro') #拼接路径
    # default_urdf_rviz_config_file_path = os.path.join(urdf_package_path, 'config','display_robot_model.rviz') #拼接路径
    default_gazebo_world_file_path = os.path.join(urdf_package_path, 'world','custom_room.world')
    # 申明URDF文件的参数
    action_declare_arg_model_path = launch.actions.DeclareLaunchArgument(
        'model',
        default_value=str(default_xacro_file_path),
        description='Absolute path to robot urdf file')
    # 通过文件路径转换为参数，传入robot_state_publisher节点
    # substitutions_commend_result=launch.substitutions.Command(['cat ', launch.substitutions.LaunchConfiguration('model')])
    substitutions_commend_result=launch.substitutions.Command(['xacro ', launch.substitutions.LaunchConfiguration('model')])
    robot_description_value = launch_ros.parameter_descriptions.ParameterValue(substitutions_commend_result,value_type=str)

    action_robot_state_publisher = launch_ros.actions.Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{'robot_description': robot_description_value}],
        )
    
    # joint_state_publisher = launch_ros.actions.Node(
    #     package='joint_state_publisher',
    #     executable ='joint_state_publisher',
    # )

    # action_rviz_node = launch_ros.actions.Node(
    #     package='rviz2',
    #     executable='rviz2',
    #     # arguments=['-d', default_urdf_rviz_config_file_path],
    # )
    action_launch_gazebo = launch.actions.IncludeLaunchDescription(
        launch.launch_description_sources.PythonLaunchDescriptionSource(
            [get_package_share_directory('gazebo_ros'), '/launch/gazebo.launch.py']
            
        ),
        launch_arguments= [ ('world', default_gazebo_world_file_path),('verbose','true')]
    )

    action_spwn_entity = launch_ros.actions.Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=['-topic','/robot_description','-entity','fishbot']
    )
    return launch.LaunchDescription([
        action_declare_arg_model_path,
        action_robot_state_publisher,
        action_launch_gazebo,
        action_spwn_entity
    ])