// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_control_interfaces:action/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__TRAITS_HPP_
#define ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_control_interfaces/action/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveRobot_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::action::MoveRobot_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::action::MoveRobot_Goal & msg)
{
  return robot_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_Goal>()
{
  return "robot_control_interfaces::action::MoveRobot_Goal";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_Goal>()
{
  return "robot_control_interfaces/action/MoveRobot_Goal";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_control_interfaces::action::MoveRobot_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveRobot_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::action::MoveRobot_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::action::MoveRobot_Result & msg)
{
  return robot_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_Result>()
{
  return "robot_control_interfaces::action::MoveRobot_Result";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_Result>()
{
  return "robot_control_interfaces/action/MoveRobot_Result";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_control_interfaces::action::MoveRobot_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveRobot_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::action::MoveRobot_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::action::MoveRobot_Feedback & msg)
{
  return robot_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_Feedback>()
{
  return "robot_control_interfaces::action::MoveRobot_Feedback";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_Feedback>()
{
  return "robot_control_interfaces/action/MoveRobot_Feedback";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_control_interfaces::action::MoveRobot_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "robot_control_interfaces/action/detail/move_robot__traits.hpp"

namespace robot_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveRobot_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::action::MoveRobot_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::action::MoveRobot_SendGoal_Request & msg)
{
  return robot_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_SendGoal_Request>()
{
  return "robot_control_interfaces::action::MoveRobot_SendGoal_Request";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_SendGoal_Request>()
{
  return "robot_control_interfaces/action/MoveRobot_SendGoal_Request";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<robot_control_interfaces::action::MoveRobot_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<robot_control_interfaces::action::MoveRobot_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_control_interfaces::action::MoveRobot_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace robot_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveRobot_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::action::MoveRobot_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::action::MoveRobot_SendGoal_Response & msg)
{
  return robot_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_SendGoal_Response>()
{
  return "robot_control_interfaces::action::MoveRobot_SendGoal_Response";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_SendGoal_Response>()
{
  return "robot_control_interfaces/action/MoveRobot_SendGoal_Response";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<robot_control_interfaces::action::MoveRobot_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_SendGoal>()
{
  return "robot_control_interfaces::action::MoveRobot_SendGoal";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_SendGoal>()
{
  return "robot_control_interfaces/action/MoveRobot_SendGoal";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_control_interfaces::action::MoveRobot_SendGoal_Request>::value &&
    has_fixed_size<robot_control_interfaces::action::MoveRobot_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_control_interfaces::action::MoveRobot_SendGoal_Request>::value &&
    has_bounded_size<robot_control_interfaces::action::MoveRobot_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<robot_control_interfaces::action::MoveRobot_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<robot_control_interfaces::action::MoveRobot_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_control_interfaces::action::MoveRobot_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace robot_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveRobot_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::action::MoveRobot_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::action::MoveRobot_GetResult_Request & msg)
{
  return robot_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_GetResult_Request>()
{
  return "robot_control_interfaces::action::MoveRobot_GetResult_Request";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_GetResult_Request>()
{
  return "robot_control_interfaces/action/MoveRobot_GetResult_Request";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_control_interfaces::action::MoveRobot_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_control_interfaces/action/detail/move_robot__traits.hpp"

namespace robot_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveRobot_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::action::MoveRobot_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::action::MoveRobot_GetResult_Response & msg)
{
  return robot_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_GetResult_Response>()
{
  return "robot_control_interfaces::action::MoveRobot_GetResult_Response";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_GetResult_Response>()
{
  return "robot_control_interfaces/action/MoveRobot_GetResult_Response";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<robot_control_interfaces::action::MoveRobot_Result>::value> {};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<robot_control_interfaces::action::MoveRobot_Result>::value> {};

template<>
struct is_message<robot_control_interfaces::action::MoveRobot_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_GetResult>()
{
  return "robot_control_interfaces::action::MoveRobot_GetResult";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_GetResult>()
{
  return "robot_control_interfaces/action/MoveRobot_GetResult";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_control_interfaces::action::MoveRobot_GetResult_Request>::value &&
    has_fixed_size<robot_control_interfaces::action::MoveRobot_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_control_interfaces::action::MoveRobot_GetResult_Request>::value &&
    has_bounded_size<robot_control_interfaces::action::MoveRobot_GetResult_Response>::value
  >
{
};

template<>
struct is_service<robot_control_interfaces::action::MoveRobot_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<robot_control_interfaces::action::MoveRobot_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_control_interfaces::action::MoveRobot_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "robot_control_interfaces/action/detail/move_robot__traits.hpp"

namespace robot_control_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveRobot_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_control_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_control_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_control_interfaces::action::MoveRobot_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_control_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_control_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_control_interfaces::action::MoveRobot_FeedbackMessage & msg)
{
  return robot_control_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_control_interfaces::action::MoveRobot_FeedbackMessage>()
{
  return "robot_control_interfaces::action::MoveRobot_FeedbackMessage";
}

template<>
inline const char * name<robot_control_interfaces::action::MoveRobot_FeedbackMessage>()
{
  return "robot_control_interfaces/action/MoveRobot_FeedbackMessage";
}

template<>
struct has_fixed_size<robot_control_interfaces::action::MoveRobot_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<robot_control_interfaces::action::MoveRobot_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_control_interfaces::action::MoveRobot_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<robot_control_interfaces::action::MoveRobot_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_control_interfaces::action::MoveRobot_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<robot_control_interfaces::action::MoveRobot>
  : std::true_type
{
};

template<>
struct is_action_goal<robot_control_interfaces::action::MoveRobot_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<robot_control_interfaces::action::MoveRobot_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<robot_control_interfaces::action::MoveRobot_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__TRAITS_HPP_
