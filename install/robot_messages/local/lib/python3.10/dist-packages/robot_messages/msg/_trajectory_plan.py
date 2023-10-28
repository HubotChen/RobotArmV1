# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_messages:msg/TrajectoryPlan.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'j1'
# Member 'j2'
# Member 'j3'
# Member 'j4'
# Member 'j5'
# Member 'j6'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryPlan(type):
    """Metaclass of message 'TrajectoryPlan'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_messages.msg.TrajectoryPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_plan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_plan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_plan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_plan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_plan

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryPlan(metaclass=Metaclass_TrajectoryPlan):
    """Message class 'TrajectoryPlan'."""

    __slots__ = [
        '_j1',
        '_j2',
        '_j3',
        '_j4',
        '_j5',
        '_j6',
        '_execution_time',
    ]

    _fields_and_field_types = {
        'j1': 'sequence<float>',
        'j2': 'sequence<float>',
        'j3': 'sequence<float>',
        'j4': 'sequence<float>',
        'j5': 'sequence<float>',
        'j6': 'sequence<float>',
        'execution_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.j1 = array.array('f', kwargs.get('j1', []))
        self.j2 = array.array('f', kwargs.get('j2', []))
        self.j3 = array.array('f', kwargs.get('j3', []))
        self.j4 = array.array('f', kwargs.get('j4', []))
        self.j5 = array.array('f', kwargs.get('j5', []))
        self.j6 = array.array('f', kwargs.get('j6', []))
        self.execution_time = kwargs.get('execution_time', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.j1 != other.j1:
            return False
        if self.j2 != other.j2:
            return False
        if self.j3 != other.j3:
            return False
        if self.j4 != other.j4:
            return False
        if self.j5 != other.j5:
            return False
        if self.j6 != other.j6:
            return False
        if self.execution_time != other.execution_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def j1(self):
        """Message field 'j1'."""
        return self._j1

    @j1.setter
    def j1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'j1' array.array() must have the type code of 'f'"
            self._j1 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'j1' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._j1 = array.array('f', value)

    @builtins.property
    def j2(self):
        """Message field 'j2'."""
        return self._j2

    @j2.setter
    def j2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'j2' array.array() must have the type code of 'f'"
            self._j2 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'j2' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._j2 = array.array('f', value)

    @builtins.property
    def j3(self):
        """Message field 'j3'."""
        return self._j3

    @j3.setter
    def j3(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'j3' array.array() must have the type code of 'f'"
            self._j3 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'j3' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._j3 = array.array('f', value)

    @builtins.property
    def j4(self):
        """Message field 'j4'."""
        return self._j4

    @j4.setter
    def j4(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'j4' array.array() must have the type code of 'f'"
            self._j4 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'j4' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._j4 = array.array('f', value)

    @builtins.property
    def j5(self):
        """Message field 'j5'."""
        return self._j5

    @j5.setter
    def j5(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'j5' array.array() must have the type code of 'f'"
            self._j5 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'j5' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._j5 = array.array('f', value)

    @builtins.property
    def j6(self):
        """Message field 'j6'."""
        return self._j6

    @j6.setter
    def j6(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'j6' array.array() must have the type code of 'f'"
            self._j6 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'j6' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._j6 = array.array('f', value)

    @builtins.property
    def execution_time(self):
        """Message field 'execution_time'."""
        return self._execution_time

    @execution_time.setter
    def execution_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'execution_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'execution_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._execution_time = value
