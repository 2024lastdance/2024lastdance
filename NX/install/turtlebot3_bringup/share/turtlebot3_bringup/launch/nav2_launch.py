from launch import LaunchDescription

from launch_ros.actions import Node

from launch.substitutions import LaunchConfiguration

import os

 

def generate_launch_description():

    urdf_file = './turtlebot3_waffle.urdf'



    return LaunchDescription([

        Node(

            package='dynamixel_workbench_controllers',

            #node_namespace='node1',

            node_executable='dynamixel_workbench_controllers',

            node_name='dynamixel_workbench_controllers'

        ),

        Node(

            package='sllidar_ros2',

            #node_namespace='node2',

            node_executable='sllidar_node',

            node_name='sllidar_node'

        ),

        Node(

            package='robot_state_publisher',

            node_executable='robot_state_publisher',

            node_name='robot_state_publisher',

            #node_namespace='node3',

            arguments=[urdf_file]

        ),

        Node(

            package='odometry_ros2',

            #node_namespace='node4',

            node_executable='odometry_ros2',

            node_name='odometry'

        ),


    ])