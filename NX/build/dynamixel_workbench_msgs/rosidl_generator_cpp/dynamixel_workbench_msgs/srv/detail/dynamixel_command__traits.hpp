// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:srv/DynamixelCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__TRAITS_HPP_

#include "dynamixel_workbench_msgs/srv/detail/dynamixel_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>()
{
  return "dynamixel_workbench_msgs::srv::DynamixelCommand_Request";
}

template<>
inline const char * name<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>()
{
  return "dynamixel_workbench_msgs/srv/DynamixelCommand_Request";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>()
{
  return "dynamixel_workbench_msgs::srv::DynamixelCommand_Response";
}

template<>
inline const char * name<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>()
{
  return "dynamixel_workbench_msgs/srv/DynamixelCommand_Response";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_workbench_msgs::srv::DynamixelCommand>()
{
  return "dynamixel_workbench_msgs::srv::DynamixelCommand";
}

template<>
inline const char * name<dynamixel_workbench_msgs::srv::DynamixelCommand>()
{
  return "dynamixel_workbench_msgs/srv/DynamixelCommand";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>::value &&
    has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>::value &&
    has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>::value
  >
{
};

template<>
struct is_service<dynamixel_workbench_msgs::srv::DynamixelCommand>
  : std::true_type
{
};

template<>
struct is_service_request<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__TRAITS_HPP_
