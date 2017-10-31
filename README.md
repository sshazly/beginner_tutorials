# beginner_tutorials
Beginner ROS tutorials:

http://wiki.ros.org/ROS/Tutorials/NavigatingTheWiki (Links to an external site.)

http://wiki.ros.org/ROS/Tutorials/NavigatingTheFilesystem (Links to an external site.)

http://wiki.ros.org/ROS/Tutorials/CreatingPackage (Links to an external site.)

http://wiki.ros.org/ROS/Tutorials/BuildingPackages (Links to an external site.)

http://wiki.ros.org/ROS/Tutorials/UnderstandingNodes (Links to an external site.)

http://wiki.ros.org/ROS/Tutorials/UnderstandingTopics (Links to an external site.)

http://wiki.ros.org/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29 (Links to an external site.)

http://wiki.ros.org/ROS/Tutorials/ExaminingPublisherSubscriber (Links to an external site.)


-----------------------------------------------------------

# Dependencies

The following was build using ROS/Kinetic. Dependencies include:
cpp_common
rostime
roscpp_traits
roscpp_serialization
catkin
genmsg
genpy
message_runtime
gencpp
genlisp
message_generation
rosbuild
rosconsole
std_msgs
rosgraph_msgs
xmlrpcpp
roscpp
rosgraph
rospack
roslib
rospy

--------------------------------------------------------------

# Summary

The following repository contains the completed tutorials for creating ROS packages and implementing nodes. Publisher and Subscriber are used to send messages to a node and read messages from that same node using listener.cpp and talker.cpp located in the ~/catkin_ws/src/beginner_tutorials/src/ directory.

Once cloned, the implementation of the Publisher/Subscriber can be achieved by:

1)  Navigating to the ~/catkin_ws/ directory

 	$ cd ~/catkin_ws

2)  Implementing the cmake equivalent for ROS

 	$ catkin_make

3)  Opening three new terminals...

On the first terminal:

 	$ roscore

On the second terminal:

 	$ source ./devel/setup.bash
 	$ rosrun beginner_tutorials talker

On the third terminal

 	$ source ./devel/setup.bash
 	$ rosrun beginner_tutorials listener

	

