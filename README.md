# ros2dev
## 本仓库目标
1. 记录ros2的学习节点
2. 维护开发的功能包
## 埋坑列表
1. 编写一个轨迹跟踪控制节点
2. 编写一个服务上传车辆的状态信息
    - 使用nanomsg
3. 日志保存（多模块共享）
    - 使用spdlog
4. rpc在整个系统中的作用
5. 整理ros2中各个pkg的功能
6. 使用Xacro封装常用的机器人部件
## 文件说明
- src目录内为源码
- install目录为编译好的pkg
## 常用命令
### ROS2 - package
- `ros2 pkg list` 查看功能包列表
- `ros2 pkg create <package-name> --build-type ament_cmake` 创建一个新的功能包（在ws目录下执行）
- `ros2 pkg create example_parameters_rclcpp --build-type ament_cmake --dependencies rclcpp` 创建功能包，并为之添加对应的依赖
- `colcon build` 编译工作区下所有的功能包
- `colcom build --packages-select <package-name>` 编译指定的功能包
### ROS2 - node
- `ros2 node list` 查看所有运行节点
- `ros2 node info <node-name>` 查看某一节点信息
- `ros2 run <package-name> <node-name>` ros2运行某个包下面的某个节点（方式1）
- `ros2 launch <package-name> <node_launch_file>` ros2使用launch file（.py文件等）运行节点（方式2）
- `ros2 run package-name node-name --ros-args --<arg name> <arg value>` 以特定的参数运行某个节点
### ROS2 - topic
- `ros2 topic list` 查看系统内活跃topic
- `ros2 topic type <topic-name>` 查看topic的消息类型
- `ros2 topic echo <topic-name>` 显示topic内容
- `ros2 topic pub <topic-name> msg_type 'args'` 向特定topic发送数据
### ROS2 - param
- `ros2 param set` 使用param命令可以在node运行过程中动态修改参数
### ROS2 - interface
- `ros2 interface show geometry_msgs/msg/Twist` 查看指定interface包含的消息内容
- `ros2 interface proto geometry_msgs/msg/Twish` 使用proto序列化工具查看基本数据类型
### micro - ROS
运行microros-agent可以选择选择多种通信协议，常见的有Serial、UDP、TCP、CAN等
- `docker run -it --rm -v /dev:/dev -v /dev/shm:/dev/shm --privileged --net=host microros/micro-ros-agent udp4 --port 8888 -v6` 使用 UDPv4 协议运行 micro-ROS Agent
