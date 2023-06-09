#include "example_action_rclcpp/robot.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "robot_control_interfaces/action/move_robot.hpp"

// 创建一个ActionServer类
class ActionRobot01 : public rclcpp::Node {
 public:
  explicit ActionRobot01(std::string name) : Node(name) {
    RCLCPP_INFO(this->get_logger(), "节点已启动：%s.", name.c_str());
  }


};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto action_server = std::make_shared<ActionRobot01>("action_robot_01");
  rclcpp::spin(action_server);
  rclcpp::shutdown();
  return 0;
}
