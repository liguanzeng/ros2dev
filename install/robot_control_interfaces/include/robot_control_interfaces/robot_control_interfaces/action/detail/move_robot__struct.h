// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_control_interfaces:action/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__STRUCT_H_
#define ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveRobot in the package robot_control_interfaces.
typedef struct robot_control_interfaces__action__MoveRobot_Goal
{
  float distance;
} robot_control_interfaces__action__MoveRobot_Goal;

// Struct for a sequence of robot_control_interfaces__action__MoveRobot_Goal.
typedef struct robot_control_interfaces__action__MoveRobot_Goal__Sequence
{
  robot_control_interfaces__action__MoveRobot_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__action__MoveRobot_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveRobot in the package robot_control_interfaces.
typedef struct robot_control_interfaces__action__MoveRobot_Result
{
  float pose;
} robot_control_interfaces__action__MoveRobot_Result;

// Struct for a sequence of robot_control_interfaces__action__MoveRobot_Result.
typedef struct robot_control_interfaces__action__MoveRobot_Result__Sequence
{
  robot_control_interfaces__action__MoveRobot_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__action__MoveRobot_Result__Sequence;


// Constants defined in the message

/// Constant 'STATUS_MOVEING'.
enum
{
  robot_control_interfaces__action__MoveRobot_Feedback__STATUS_MOVEING = 3ul
};

/// Constant 'STATUS_STOP'.
enum
{
  robot_control_interfaces__action__MoveRobot_Feedback__STATUS_STOP = 4ul
};

/// Struct defined in action/MoveRobot in the package robot_control_interfaces.
typedef struct robot_control_interfaces__action__MoveRobot_Feedback
{
  float pose;
  uint32_t status;
} robot_control_interfaces__action__MoveRobot_Feedback;

// Struct for a sequence of robot_control_interfaces__action__MoveRobot_Feedback.
typedef struct robot_control_interfaces__action__MoveRobot_Feedback__Sequence
{
  robot_control_interfaces__action__MoveRobot_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__action__MoveRobot_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_control_interfaces/action/detail/move_robot__struct.h"

/// Struct defined in action/MoveRobot in the package robot_control_interfaces.
typedef struct robot_control_interfaces__action__MoveRobot_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_control_interfaces__action__MoveRobot_Goal goal;
} robot_control_interfaces__action__MoveRobot_SendGoal_Request;

// Struct for a sequence of robot_control_interfaces__action__MoveRobot_SendGoal_Request.
typedef struct robot_control_interfaces__action__MoveRobot_SendGoal_Request__Sequence
{
  robot_control_interfaces__action__MoveRobot_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__action__MoveRobot_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveRobot in the package robot_control_interfaces.
typedef struct robot_control_interfaces__action__MoveRobot_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_control_interfaces__action__MoveRobot_SendGoal_Response;

// Struct for a sequence of robot_control_interfaces__action__MoveRobot_SendGoal_Response.
typedef struct robot_control_interfaces__action__MoveRobot_SendGoal_Response__Sequence
{
  robot_control_interfaces__action__MoveRobot_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__action__MoveRobot_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveRobot in the package robot_control_interfaces.
typedef struct robot_control_interfaces__action__MoveRobot_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_control_interfaces__action__MoveRobot_GetResult_Request;

// Struct for a sequence of robot_control_interfaces__action__MoveRobot_GetResult_Request.
typedef struct robot_control_interfaces__action__MoveRobot_GetResult_Request__Sequence
{
  robot_control_interfaces__action__MoveRobot_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__action__MoveRobot_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_control_interfaces/action/detail/move_robot__struct.h"

/// Struct defined in action/MoveRobot in the package robot_control_interfaces.
typedef struct robot_control_interfaces__action__MoveRobot_GetResult_Response
{
  int8_t status;
  robot_control_interfaces__action__MoveRobot_Result result;
} robot_control_interfaces__action__MoveRobot_GetResult_Response;

// Struct for a sequence of robot_control_interfaces__action__MoveRobot_GetResult_Response.
typedef struct robot_control_interfaces__action__MoveRobot_GetResult_Response__Sequence
{
  robot_control_interfaces__action__MoveRobot_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__action__MoveRobot_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_control_interfaces/action/detail/move_robot__struct.h"

/// Struct defined in action/MoveRobot in the package robot_control_interfaces.
typedef struct robot_control_interfaces__action__MoveRobot_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_control_interfaces__action__MoveRobot_Feedback feedback;
} robot_control_interfaces__action__MoveRobot_FeedbackMessage;

// Struct for a sequence of robot_control_interfaces__action__MoveRobot_FeedbackMessage.
typedef struct robot_control_interfaces__action__MoveRobot_FeedbackMessage__Sequence
{
  robot_control_interfaces__action__MoveRobot_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_control_interfaces__action__MoveRobot_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__STRUCT_H_
