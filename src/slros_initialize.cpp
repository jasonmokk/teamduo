#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "TeamDuo0x2810x29";

// For Block TeamDuo0x2810x29/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_TeamDuo0x2810x29_std_msgs_Float64> Sub_TeamDuo0x2810x29_7;

// For Block TeamDuo0x2810x29/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_TeamDuo0x2810x29_std_msgs_Float64> Sub_TeamDuo0x2810x29_8;

// For Block TeamDuo0x2810x29/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_TeamDuo0x2810x29_std_msgs_Float64> Pub_TeamDuo0x2810x29_6;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

