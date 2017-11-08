/************************************************************
 *                                                          *
 * Copyright (C) 2017 by Sherif Shazly                      *
 *                                                          *
 ***********************************************************/
/**
 *   @file  talkerServer.cpp
 *   @brief   This file is the server side for the talk.cpp client that passes a string argument to listener.cpp
 *
 *   Publishes text to the ROS environment at a specified frequency
 *
 *   @author    Sherif Shazly
 *   @date  2017/11/08
 *  @copyright Copyright (C) 2017 BSD
 *  @bug No known bugs.
 */

#include "ros/ros.h"
#include <beginner_tutorials/StringValue.h>

#include <sstream>

bool print(beginner_tutorials::StringValue::Request  &req,
         beginner_tutorials::StringValue::Response &res)
{
  res.strRes = req.strReq;
  ROS_INFO_STREAM("request string for message: "<<req.strReq);
  ROS_DEBUG_STREAM("string requested");
  return true;
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "talkerServer");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("print_message", print);
  ROS_INFO_STREAM("Ready to receive message for conversation");
  ros::spin();

  return 0;
}
