// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_messages:msg/TargetPosition.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robot_messages/msg/detail/target_position__struct.h"
#include "robot_messages/msg/detail/target_position__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_messages__msg__target_position__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robot_messages.msg._target_position.TargetPosition", full_classname_dest, 50) == 0);
  }
  robot_messages__msg__TargetPosition * ros_message = _ros_message;
  {  // x_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_pos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_pos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_pos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // linear_move
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_move");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->linear_move = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_messages__msg__target_position__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TargetPosition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_messages.msg._target_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TargetPosition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_messages__msg__TargetPosition * ros_message = (robot_messages__msg__TargetPosition *)raw_ros_message;
  {  // x_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_move
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->linear_move ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_move", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
