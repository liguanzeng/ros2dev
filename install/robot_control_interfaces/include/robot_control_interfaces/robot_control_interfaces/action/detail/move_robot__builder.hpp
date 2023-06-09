// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_control_interfaces:action/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_
#define ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_control_interfaces/action/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Goal_distance
{
public:
  Init_MoveRobot_Goal_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_control_interfaces::action::MoveRobot_Goal distance(::robot_control_interfaces::action::MoveRobot_Goal::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::MoveRobot_Goal>()
{
  return robot_control_interfaces::action::builder::Init_MoveRobot_Goal_distance();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Result_pose
{
public:
  Init_MoveRobot_Result_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_control_interfaces::action::MoveRobot_Result pose(::robot_control_interfaces::action::MoveRobot_Result::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::MoveRobot_Result>()
{
  return robot_control_interfaces::action::builder::Init_MoveRobot_Result_pose();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_Feedback_status
{
public:
  explicit Init_MoveRobot_Feedback_status(::robot_control_interfaces::action::MoveRobot_Feedback & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::MoveRobot_Feedback status(::robot_control_interfaces::action::MoveRobot_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_Feedback msg_;
};

class Init_MoveRobot_Feedback_pose
{
public:
  Init_MoveRobot_Feedback_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Feedback_status pose(::robot_control_interfaces::action::MoveRobot_Feedback::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_MoveRobot_Feedback_status(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::MoveRobot_Feedback>()
{
  return robot_control_interfaces::action::builder::Init_MoveRobot_Feedback_pose();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_SendGoal_Request_goal
{
public:
  explicit Init_MoveRobot_SendGoal_Request_goal(::robot_control_interfaces::action::MoveRobot_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::MoveRobot_SendGoal_Request goal(::robot_control_interfaces::action::MoveRobot_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_SendGoal_Request msg_;
};

class Init_MoveRobot_SendGoal_Request_goal_id
{
public:
  Init_MoveRobot_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_SendGoal_Request_goal goal_id(::robot_control_interfaces::action::MoveRobot_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRobot_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::MoveRobot_SendGoal_Request>()
{
  return robot_control_interfaces::action::builder::Init_MoveRobot_SendGoal_Request_goal_id();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_SendGoal_Response_stamp
{
public:
  explicit Init_MoveRobot_SendGoal_Response_stamp(::robot_control_interfaces::action::MoveRobot_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::MoveRobot_SendGoal_Response stamp(::robot_control_interfaces::action::MoveRobot_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_SendGoal_Response msg_;
};

class Init_MoveRobot_SendGoal_Response_accepted
{
public:
  Init_MoveRobot_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_SendGoal_Response_stamp accepted(::robot_control_interfaces::action::MoveRobot_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveRobot_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::MoveRobot_SendGoal_Response>()
{
  return robot_control_interfaces::action::builder::Init_MoveRobot_SendGoal_Response_accepted();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_GetResult_Request_goal_id
{
public:
  Init_MoveRobot_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_control_interfaces::action::MoveRobot_GetResult_Request goal_id(::robot_control_interfaces::action::MoveRobot_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::MoveRobot_GetResult_Request>()
{
  return robot_control_interfaces::action::builder::Init_MoveRobot_GetResult_Request_goal_id();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_GetResult_Response_result
{
public:
  explicit Init_MoveRobot_GetResult_Response_result(::robot_control_interfaces::action::MoveRobot_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::MoveRobot_GetResult_Response result(::robot_control_interfaces::action::MoveRobot_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_GetResult_Response msg_;
};

class Init_MoveRobot_GetResult_Response_status
{
public:
  Init_MoveRobot_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_GetResult_Response_result status(::robot_control_interfaces::action::MoveRobot_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveRobot_GetResult_Response_result(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::MoveRobot_GetResult_Response>()
{
  return robot_control_interfaces::action::builder::Init_MoveRobot_GetResult_Response_status();
}

}  // namespace robot_control_interfaces


namespace robot_control_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRobot_FeedbackMessage_feedback
{
public:
  explicit Init_MoveRobot_FeedbackMessage_feedback(::robot_control_interfaces::action::MoveRobot_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_control_interfaces::action::MoveRobot_FeedbackMessage feedback(::robot_control_interfaces::action::MoveRobot_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_FeedbackMessage msg_;
};

class Init_MoveRobot_FeedbackMessage_goal_id
{
public:
  Init_MoveRobot_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_FeedbackMessage_feedback goal_id(::robot_control_interfaces::action::MoveRobot_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRobot_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_control_interfaces::action::MoveRobot_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_control_interfaces::action::MoveRobot_FeedbackMessage>()
{
  return robot_control_interfaces::action::builder::Init_MoveRobot_FeedbackMessage_goal_id();
}

}  // namespace robot_control_interfaces

#endif  // ROBOT_CONTROL_INTERFACES__ACTION__DETAIL__MOVE_ROBOT__BUILDER_HPP_
