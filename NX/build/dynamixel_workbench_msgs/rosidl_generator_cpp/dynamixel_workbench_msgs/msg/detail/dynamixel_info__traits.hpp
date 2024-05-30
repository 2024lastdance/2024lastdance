// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__TRAITS_HPP_

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'load_info'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_workbench_msgs::msg::DynamixelInfo>()
{
  return "dynamixel_workbench_msgs::msg::DynamixelInfo";
}

template<>
inline const char * name<dynamixel_workbench_msgs::msg::DynamixelInfo>()
{
  return "dynamixel_workbench_msgs/msg/DynamixelInfo";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::msg::DynamixelInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::msg::DynamixelInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_workbench_msgs::msg::DynamixelInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__TRAITS_HPP_
