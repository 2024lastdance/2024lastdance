// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelStateList.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace dynamixel_workbench_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const dynamixel_workbench_msgs::msg::DynamixelState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  dynamixel_workbench_msgs::msg::DynamixelState &);
size_t get_serialized_size(
  const dynamixel_workbench_msgs::msg::DynamixelState &,
  size_t current_alignment);
size_t
max_serialized_size_DynamixelState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace dynamixel_workbench_msgs


namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
cdr_serialize(
  const dynamixel_workbench_msgs::msg::DynamixelStateList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dynamixel_state
  {
    size_t size = ros_message.dynamixel_state.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.dynamixel_state[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dynamixel_workbench_msgs::msg::DynamixelStateList & ros_message)
{
  // Member: dynamixel_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.dynamixel_state.resize(size);
    for (size_t i = 0; i < size; i++) {
      dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.dynamixel_state[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
get_serialized_size(
  const dynamixel_workbench_msgs::msg::DynamixelStateList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dynamixel_state
  {
    size_t array_size = ros_message.dynamixel_state.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.dynamixel_state[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
max_serialized_size_DynamixelStateList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: dynamixel_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DynamixelState(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DynamixelStateList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dynamixel_workbench_msgs::msg::DynamixelStateList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DynamixelStateList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dynamixel_workbench_msgs::msg::DynamixelStateList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DynamixelStateList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dynamixel_workbench_msgs::msg::DynamixelStateList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DynamixelStateList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DynamixelStateList(full_bounded, 0);
}

static message_type_support_callbacks_t _DynamixelStateList__callbacks = {
  "dynamixel_workbench_msgs::msg",
  "DynamixelStateList",
  _DynamixelStateList__cdr_serialize,
  _DynamixelStateList__cdr_deserialize,
  _DynamixelStateList__get_serialized_size,
  _DynamixelStateList__max_serialized_size
};

static rosidl_message_type_support_t _DynamixelStateList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DynamixelStateList__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dynamixel_workbench_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_workbench_msgs::msg::DynamixelStateList>()
{
  return &dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::_DynamixelStateList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_workbench_msgs, msg, DynamixelStateList)() {
  return &dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::_DynamixelStateList__handle;
}

#ifdef __cplusplus
}
#endif
