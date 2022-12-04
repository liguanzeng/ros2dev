// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learning_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFACE__MSG__DETAIL__OBJECT_POSITION__STRUCT_H_
#define LEARNING_INTERFACE__MSG__DETAIL__OBJECT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ObjectPosition in the package learning_interface.
typedef struct learning_interface__msg__ObjectPosition
{
  /// 表示目标的X坐标
  int32_t x;
  /// 表示目标的Y坐标
  int32_t y;
} learning_interface__msg__ObjectPosition;

// Struct for a sequence of learning_interface__msg__ObjectPosition.
typedef struct learning_interface__msg__ObjectPosition__Sequence
{
  learning_interface__msg__ObjectPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__msg__ObjectPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_INTERFACE__MSG__DETAIL__OBJECT_POSITION__STRUCT_H_
