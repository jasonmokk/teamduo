#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "teamduo_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block teamduo/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_teamduo_std_msgs_Float64> Sub_teamduo_7;

// For Block teamduo/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_teamduo_std_msgs_Float64> Sub_teamduo_8;

// For Block teamduo/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_teamduo_std_msgs_Float64> Sub_teamduo_9;

// For Block teamduo/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_teamduo_std_msgs_Float64> Pub_teamduo_6;

void slros_node_init(int argc, char** argv);

#endif
