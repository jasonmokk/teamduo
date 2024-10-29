#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "teamduo";

// For Block teamduo/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_teamduo_std_msgs_Float64> Sub_teamduo_7;

// For Block teamduo/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_teamduo_std_msgs_Float64> Sub_teamduo_8;

// For Block teamduo/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_teamduo_std_msgs_Float64> Pub_teamduo_6;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

