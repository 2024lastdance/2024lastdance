// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelState.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__TRAITS_HPP_

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_workbench_msgs::msg::DynamixelState>()
{
  return "dynamixel_workbench_msgs::msg::DynamixelState";
}

template<>
inline const char * name<dynamixel_workbench_msgs::msg::DynamixelState>()
{
  return "dynamixel_workbench_msgs/msg/DynamixelState";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::msg::DynamixelState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::msg::DynamixelState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_workbench_msgs::msg::DynamixelState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__TRAITS_HPP_
