#include<ros/ros.h>

int main(int argc, char **argv)
{
 //Initialize the ROS system
 ros::init(argc, argv, "hello_ros");

//link this program to ROS master as a node
ros::NodeHandle nh;

ROS_INFO_STREAM("Hello, ROS!");
}

