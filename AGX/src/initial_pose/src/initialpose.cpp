#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/header.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "geometry_msgs/msg/"

using namespace std;

using namespace std::chrono_literals;
using std::placeholders::_1;

class InitalposePublisher : public rclcpp::Node
{
public:
    InitalposePublisher()
    : Node("initalpose_publisher")
    {
        //initial_pose pub
        auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));
        initalpose_pub = this->create_publisher<geometry_msgs::msg::PoseWithCovarianceStamped>("initialpose",qos_profile);
        timer_ = this->create_wall_timer(100ms, std::bind(&InitalposePublisher::publish_initalpose_msg, this));

        //msg sub
        msg_sub=this->create_subscription<std_msgs::msg::String>(
            "msg",
            qos_profile,
            std::bind(&InitalposePublisher::subscribe_topic_message,this,_1));
    }
private:
    void subscribe_topic_message(const std_msgs::msg::String::SharedPtr msg)
    {
        str=msg->data.c_str();
        cout<<str<<endl;
        RCLCPP_INFO(this->get_logger(),"Received message: '%s'",msg->data.c_str());
    }
    void publish_initalpose_msg()
    {
        pose.header.frame_id=fixed_frame;

        //set x,y coord
        pose.pose.pose.position.x=0.0;
        pose.pose.pose.position.y=0.0;
        pose.pose.pose.position.z=0.0;
        pose.pose.pose.orientation.w=0.1;
        
        float x,y,z,w;
        x=pose.pose.pose.position.x;
        y=pose.pose.pose.position.y;
        z=pose.pose.pose.position.z;
        w=pose.pose.pose.orientation.w;
        
        if(str=="init" && !spin && !once_spin){
            initalpose_pub->publish(pose);
            RCLCPP_INFO(this->get_logger(), "Published message initialpose-> x:%lf, y:%lf, z:%lf, w:%lf",x,y,z,w);
            once_spin=true;
        }
        
    }
    string fixed_frame="map";
    string str="null";
    bool spin=false,once_spin=false;
    rclcpp::TimerBase::SharedPtr timer_;
    geometry_msgs::msg::PoseWithCovarianceStamped pose;
    rclcpp::Publisher<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr initalpose_pub;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr msg_sub;
};

int main(int argc,char*argv[])
{
    rclcpp::init(argc,argv);
    auto node =std::make_shared<InitalposePublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}