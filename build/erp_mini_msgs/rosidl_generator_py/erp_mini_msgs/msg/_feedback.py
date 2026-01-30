# generated from rosidl_generator_py/resource/_idl.py.em
# with input from erp_mini_msgs:msg/Feedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Feedback(type):
    """Metaclass of message 'Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GEAR_FORWARD': 0,
        'GEAR_NEUTRAL': 1,
        'GEAR_BACKWARD': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('erp_mini_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'erp_mini_msgs.msg.Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__feedback

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GEAR_FORWARD': cls.__constants['GEAR_FORWARD'],
            'GEAR_NEUTRAL': cls.__constants['GEAR_NEUTRAL'],
            'GEAR_BACKWARD': cls.__constants['GEAR_BACKWARD'],
        }

    @property
    def GEAR_FORWARD(self):
        """Message constant 'GEAR_FORWARD'."""
        return Metaclass_Feedback.__constants['GEAR_FORWARD']

    @property
    def GEAR_NEUTRAL(self):
        """Message constant 'GEAR_NEUTRAL'."""
        return Metaclass_Feedback.__constants['GEAR_NEUTRAL']

    @property
    def GEAR_BACKWARD(self):
        """Message constant 'GEAR_BACKWARD'."""
        return Metaclass_Feedback.__constants['GEAR_BACKWARD']


class Feedback(metaclass=Metaclass_Feedback):
    """
    Message class 'Feedback'.

    Constants:
      GEAR_FORWARD
      GEAR_NEUTRAL
      GEAR_BACKWARD
    """

    __slots__ = [
        '_header',
        '_manual_mode',
        '_emergency_stop',
        '_gear',
        '_speed',
        '_steering',
        '_heartbeat',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'manual_mode': 'boolean',
        'emergency_stop': 'boolean',
        'gear': 'uint8',
        'speed': 'double',
        'steering': 'double',
        'heartbeat': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.manual_mode = kwargs.get('manual_mode', bool())
        self.emergency_stop = kwargs.get('emergency_stop', bool())
        self.gear = kwargs.get('gear', int())
        self.speed = kwargs.get('speed', float())
        self.steering = kwargs.get('steering', float())
        self.heartbeat = kwargs.get('heartbeat', int())

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
        if self.header != other.header:
            return False
        if self.manual_mode != other.manual_mode:
            return False
        if self.emergency_stop != other.emergency_stop:
            return False
        if self.gear != other.gear:
            return False
        if self.speed != other.speed:
            return False
        if self.steering != other.steering:
            return False
        if self.heartbeat != other.heartbeat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def manual_mode(self):
        """Message field 'manual_mode'."""
        return self._manual_mode

    @manual_mode.setter
    def manual_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'manual_mode' field must be of type 'bool'"
        self._manual_mode = value

    @builtins.property
    def emergency_stop(self):
        """Message field 'emergency_stop'."""
        return self._emergency_stop

    @emergency_stop.setter
    def emergency_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stop' field must be of type 'bool'"
        self._emergency_stop = value

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear' field must be an unsigned integer in [0, 255]"
        self._gear = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'steering' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._steering = value

    @builtins.property
    def heartbeat(self):
        """Message field 'heartbeat'."""
        return self._heartbeat

    @heartbeat.setter
    def heartbeat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heartbeat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'heartbeat' field must be an unsigned integer in [0, 255]"
        self._heartbeat = value
