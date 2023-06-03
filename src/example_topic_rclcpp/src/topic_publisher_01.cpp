#include "rclcpp/rclcpp.hpp"
// #include "rclcpp/rate.hpp"

class TopicPublisher01 : public rclcpp::Node
{
public:
    // 构造函数,有一个参数为节点名称
    TopicPublisher01(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());
    }

private:
    // 声明节点
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    /*创建对应节点的共享指针对象*/
    while (rclcpp::ok())
    {
        auto node = std::make_shared<TopicPublisher01>("topic_publisher_01");
        /* 运行节点，并检测退出信号*/
        // rclcpp::spin(node);
        
    }

    rclcpp::shutdown();
    
    return 0;
}
