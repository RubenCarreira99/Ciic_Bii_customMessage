// generated from
// rosidl_typesupport_c/resource/rosidl_typesupport_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef CIIC_ROS_TASKS_MESSAGES__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
#define CIIC_ROS_TASKS_MESSAGES__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_C_EXPORT_ciic_ros_tasks_messages __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_C_IMPORT_ciic_ros_tasks_messages __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_C_EXPORT_ciic_ros_tasks_messages __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_C_IMPORT_ciic_ros_tasks_messages __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_C_BUILDING_DLL_ciic_ros_tasks_messages
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_ciic_ros_tasks_messages ROSIDL_TYPESUPPORT_C_EXPORT_ciic_ros_tasks_messages
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_ciic_ros_tasks_messages ROSIDL_TYPESUPPORT_C_IMPORT_ciic_ros_tasks_messages
  #endif
#else
  #define ROSIDL_TYPESUPPORT_C_EXPORT_ciic_ros_tasks_messages __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_C_IMPORT_ciic_ros_tasks_messages
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_ciic_ros_tasks_messages __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_ciic_ros_tasks_messages
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // CIIC_ROS_TASKS_MESSAGES__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
