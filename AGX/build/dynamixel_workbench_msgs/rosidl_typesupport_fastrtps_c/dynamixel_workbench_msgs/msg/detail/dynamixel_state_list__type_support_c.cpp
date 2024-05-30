// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelStateList.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dynamixel_workbench_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__struct.h"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__functions.h"  // dynamixel_state

// forward declare type support functions
size_t get_serialized_size_dynamixel_workbench_msgs__msg__DynamixelState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dynamixel_workbench_msgs__msg__DynamixelState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_workbench_msgs, msg, DynamixelState)();


using _DynamixelStateList__ros_msg_type = dynamixel_workbench_msgs__msg__DynamixelStateList;

static bool _DynamixelStateList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DynamixelStateList__ros_msg_type * ros_message = static_cast<const _DynamixelStateList__ros_msg_type *>(untyped_ros_message);
  // Field name: dynamixel_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dynamixel_workbench_msgs, msg, DynamixelState
      )()->data);
    size_t size = ros_message->dynamixel_state.size;
    auto array_ptr = ros_message->dynamixel_state.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _DynamixelStateList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DynamixelStateList__ros_msg_type * ros_message = static_cast<_DynamixelStateList__ros_msg_type *>(untyped_ros_message);
  // Field name: dynamixel_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dynamixel_workbench_msgs, msg, DynamixelState
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->dynamixel_state.data) {
      dynamixel_workbench_msgs__msg__DynamixelState__Sequence__fini(&ros_message->dynamixel_state);
    }
    if (!dynamixel_workbench_msgs__msg__DynamixelState__Sequence__init(&ros_message->dynamixel_state, size)) {
      return "failed to create array for field 'dynamixel_state'";
    }
    auto array_ptr = ros_message->dynamixel_state.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_workbench_msgs
size_t get_serialized_size_dynamixel_workbench_msgs__msg__DynamixelStateList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DynamixelStateList__ros_msg_type * ros_message = static_cast<const _DynamixelStateList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dynamixel_state
  {
    size_t array_size = ros_message->dynamixel_state.size;
    auto array_ptr = ros_message->dynamixel_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_dynamixel_workbench_msgs__msg__DynamixelState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DynamixelStateList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynamixel_workbench_msgs__msg__DynamixelStateList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_workbench_msgs
size_t max_serialized_size_dynamixel_workbench_msgs__msg__DynamixelStateList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: dynamixel_state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_dynamixel_workbench_msgs__msg__DynamixelState(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DynamixelStateList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dynamixel_workbench_msgs__msg__DynamixelStateList(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DynamixelStateList = {
  "dynamixel_workbench_msgs::msg",
  "DynamixelStateList",
  _DynamixelStateList__cdr_serialize,
  _DynamixelStateList__cdr_deserialize,
  _DynamixelStateList__get_serialized_size,
  _DynamixelStateList__max_serialized_size
};

static rosidl_message_type_support_t _DynamixelStateList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DynamixelStateList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_workbench_msgs, msg, DynamixelStateList)() {
  return &_DynamixelStateList__type_support;
}

#if defined(__cplusplus)
}
#endif
