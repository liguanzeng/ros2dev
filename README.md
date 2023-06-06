# ros2dev
## 本仓库目标
1. 记录ros2的学习节点
2. 维护开发的功能包
## 埋坑列表
1. 编写一个轨迹跟踪控制节点
2. 编写一个服务上传车辆的状态信息
    - 使用nanomsg
## 文件说明
- src目录内为源码
- install目录为编译好的pkg
## 常用命令
- `ros2 pkg create example_parameters_rclcpp --build-type ament_cmake --dependencies rclcpp` ws下执行，创建功能包
- `ros2 run package-name node-name` ros2运行某个包下面的某个节点
- `ros2 run package-name node-name --ros-args --<arg name> <arg value>` 以特定的参数运行某个节点
- `ros2 param set` 使用param命令可以在node运行过程中动态修改参数
