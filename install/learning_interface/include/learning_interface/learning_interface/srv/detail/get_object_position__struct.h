// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learning_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__STRUCT_H_
#define LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetObjectPosition in the package learning_interface.
typedef struct learning_interface__srv__GetObjectPosition_Request
{
  /// 获取目标位置的指令
  bool get;
} learning_interface__srv__GetObjectPosition_Request;

// Struct for a sequence of learning_interface__srv__GetObjectPosition_Request.
typedef struct learning_interface__srv__GetObjectPosition_Request__Sequence
{
  learning_interface__srv__GetObjectPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__srv__GetObjectPosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetObjectPosition in the package learning_interface.
typedef struct learning_interface__srv__GetObjectPosition_Response
{
  /// 目标的X坐标
  int32_t x;
  /// 目标的Y坐标
  int32_t y;
} learning_interface__srv__GetObjectPosition_Response;

// Struct for a sequence of learning_interface__srv__GetObjectPosition_Response.
typedef struct learning_interface__srv__GetObjectPosition_Response__Sequence
{
  learning_interface__srv__GetObjectPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__srv__GetObjectPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__STRUCT_H_
