# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_messages:msg/TargetPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TargetPosition(type):
    """Metaclass of message 'TargetPosition'."""

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
                'robot_messages.msg.TargetPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__target_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__target_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__target_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__target_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__target_position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TargetPosition(metaclass=Metaclass_TargetPosition):
    """Message class 'TargetPosition'."""

    __slots__ = [
        '_x_pos',
        '_y_pos',
        '_z_pos',
        '_x_rot',
        '_y_rot',
        '_z_rot',
        '_linear_move',
    ]

    _fields_and_field_types = {
        'x_pos': 'float',
        'y_pos': 'float',
        'z_pos': 'float',
        'x_rot': 'float',
        'y_rot': 'float',
        'z_rot': 'float',
        'linear_move': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_pos = kwargs.get('x_pos', float())
        self.y_pos = kwargs.get('y_pos', float())
        self.z_pos = kwargs.get('z_pos', float())
        self.x_rot = kwargs.get('x_rot', float())
        self.y_rot = kwargs.get('y_rot', float())
        self.z_rot = kwargs.get('z_rot', float())
        self.linear_move = kwargs.get('linear_move', bool())

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
        if self.x_pos != other.x_pos:
            return False
        if self.y_pos != other.y_pos:
            return False
        if self.z_pos != other.z_pos:
            return False
        if self.x_rot != other.x_rot:
            return False
        if self.y_rot != other.y_rot:
            return False
        if self.z_rot != other.z_rot:
            return False
        if self.linear_move != other.linear_move:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_pos(self):
        """Message field 'x_pos'."""
        return self._x_pos

    @x_pos.setter
    def x_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_pos = value

    @builtins.property
    def y_pos(self):
        """Message field 'y_pos'."""
        return self._y_pos

    @y_pos.setter
    def y_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_pos = value

    @builtins.property
    def z_pos(self):
        """Message field 'z_pos'."""
        return self._z_pos

    @z_pos.setter
    def z_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_pos = value

    @builtins.property
    def x_rot(self):
        """Message field 'x_rot'."""
        return self._x_rot

    @x_rot.setter
    def x_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_rot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_rot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_rot = value

    @builtins.property
    def y_rot(self):
        """Message field 'y_rot'."""
        return self._y_rot

    @y_rot.setter
    def y_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_rot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_rot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_rot = value

    @builtins.property
    def z_rot(self):
        """Message field 'z_rot'."""
        return self._z_rot

    @z_rot.setter
    def z_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_rot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_rot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_rot = value

    @builtins.property
    def linear_move(self):
        """Message field 'linear_move'."""
        return self._linear_move

    @linear_move.setter
    def linear_move(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'linear_move' field must be of type 'bool'"
        self._linear_move = value
