// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learning_interface:action/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFACE__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_H_
#define LEARNING_INTERFACE__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveCircle in the package learning_interface.
typedef struct learning_interface__action__MoveCircle_Goal
{
  /// 定义动作的目标，表示动作开始的指令
  bool enable;
} learning_interface__action__MoveCircle_Goal;

// Struct for a sequence of learning_interface__action__MoveCircle_Goal.
typedef struct learning_interface__action__MoveCircle_Goal__Sequence
{
  learning_interface__action__MoveCircle_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__action__MoveCircle_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveCircle in the package learning_interface.
typedef struct learning_interface__action__MoveCircle_Result
{
  /// 定义动作的结果，表示是否成功执行
  bool finish;
} learning_interface__action__MoveCircle_Result;

// Struct for a sequence of learning_interface__action__MoveCircle_Result.
typedef struct learning_interface__action__MoveCircle_Result__Sequence
{
  learning_interface__action__MoveCircle_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__action__MoveCircle_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveCircle in the package learning_interface.
typedef struct learning_interface__action__MoveCircle_Feedback
{
  /// 定义动作的反馈，表示当前执行到的位置
  int32_t state;
} learning_interface__action__MoveCircle_Feedback;

// Struct for a sequence of learning_interface__action__MoveCircle_Feedback.
typedef struct learning_interface__action__MoveCircle_Feedback__Sequence
{
  learning_interface__action__MoveCircle_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__action__MoveCircle_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "learning_interface/action/detail/move_circle__struct.h"

/// Struct defined in action/MoveCircle in the package learning_interface.
typedef struct learning_interface__action__MoveCircle_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  learning_interface__action__MoveCircle_Goal goal;
} learning_interface__action__MoveCircle_SendGoal_Request;

// Struct for a sequence of learning_interface__action__MoveCircle_SendGoal_Request.
typedef struct learning_interface__action__MoveCircle_SendGoal_Request__Sequence
{
  learning_interface__action__MoveCircle_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__action__MoveCircle_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveCircle in the package learning_interface.
typedef struct learning_interface__action__MoveCircle_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} learning_interface__action__MoveCircle_SendGoal_Response;

// Struct for a sequence of learning_interface__action__MoveCircle_SendGoal_Response.
typedef struct learning_interface__action__MoveCircle_SendGoal_Response__Sequence
{
  learning_interface__action__MoveCircle_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__action__MoveCircle_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveCircle in the package learning_interface.
typedef struct learning_interface__action__MoveCircle_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} learning_interface__action__MoveCircle_GetResult_Request;

// Struct for a sequence of learning_interface__action__MoveCircle_GetResult_Request.
typedef struct learning_interface__action__MoveCircle_GetResult_Request__Sequence
{
  learning_interface__action__MoveCircle_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__action__MoveCircle_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "learning_interface/action/detail/move_circle__struct.h"

/// Struct defined in action/MoveCircle in the package learning_interface.
typedef struct learning_interface__action__MoveCircle_GetResult_Response
{
  int8_t status;
  learning_interface__action__MoveCircle_Result result;
} learning_interface__action__MoveCircle_GetResult_Response;

// Struct for a sequence of learning_interface__action__MoveCircle_GetResult_Response.
typedef struct learning_interface__action__MoveCircle_GetResult_Response__Sequence
{
  learning_interface__action__MoveCircle_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__action__MoveCircle_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "learning_interface/action/detail/move_circle__struct.h"

/// Struct defined in action/MoveCircle in the package learning_interface.
typedef struct learning_interface__action__MoveCircle_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  learning_interface__action__MoveCircle_Feedback feedback;
} learning_interface__action__MoveCircle_FeedbackMessage;

// Struct for a sequence of learning_interface__action__MoveCircle_FeedbackMessage.
typedef struct learning_interface__action__MoveCircle_FeedbackMessage__Sequence
{
  learning_interface__action__MoveCircle_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__action__MoveCircle_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_INTERFACE__ACTION__DETAIL__MOVE_CIRCLE__STRUCT_H_
