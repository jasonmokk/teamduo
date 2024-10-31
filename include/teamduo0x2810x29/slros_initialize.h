#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "TeamDuo0x2810x29_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block TeamDuo0x2810x29/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_TeamDuo0x2810x29_std_msgs_Float64> Sub_TeamDuo0x2810x29_7;

// For Block TeamDuo0x2810x29/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_TeamDuo0x2810x29_std_msgs_Float64> Sub_TeamDuo0x2810x29_8;

// For Block TeamDuo0x2810x29/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_TeamDuo0x2810x29_std_msgs_Float64> Pub_TeamDuo0x2810x29_6;

void slros_node_init(int argc, char** argv);

#endif
