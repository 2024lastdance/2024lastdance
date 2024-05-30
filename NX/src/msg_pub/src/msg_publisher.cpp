#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;
using namespace std;


class HelloworldPublisher : public rclcpp::Node
{
public:
  HelloworldPublisher()
  : Node("helloworld_publisher")
  {
    auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
    helloworld_publisher_ = this->create_publisher<std_msgs::msg::String>("msg", qos_profile);
    timer_ = this->create_wall_timer(100ms, std::bind(&HelloworldPublisher::publish_helloworld_msg, this));
  }
private:
  void publish_helloworld_msg()
  {
    auto msg = std_msgs::msg::String();
    cout<<"input msg: ";
    cin>>msg.data;
    RCLCPP_INFO(this->get_logger(), "Published message: '%s'", msg.data.c_str());
    helloworld_publisher_->publish(msg);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr helloworld_publisher_;
};
int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<HelloworldPublisher>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}