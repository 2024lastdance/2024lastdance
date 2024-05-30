// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:msg/XMExt.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XM_EXT__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XM_EXT__TRAITS_HPP_

#include "dynamixel_workbench_msgs/msg/detail/xm_ext__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_workbench_msgs::msg::XMExt>()
{
  return "dynamixel_workbench_msgs::msg::XMExt";
}

template<>
inline const char * name<dynamixel_workbench_msgs::msg::XMExt>()
{
  return "dynamixel_workbench_msgs/msg/XMExt";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::msg::XMExt>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::msg::XMExt>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_workbench_msgs::msg::XMExt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XM_EXT__TRAITS_HPP_
