# generated from rosidl_generator_py/resource/_idl.py.em
# with input from erp_mini_msgs:srv/ModeCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ModeCommand_Request(type):
    """Metaclass of message 'ModeCommand_Request'."""

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
                'erp_mini_msgs.srv.ModeCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mode_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mode_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mode_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mode_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mode_command__request

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
        return Metaclass_ModeCommand_Request.__constants['GEAR_FORWARD']

    @property
    def GEAR_NEUTRAL(self):
        """Message constant 'GEAR_NEUTRAL'."""
        return Metaclass_ModeCommand_Request.__constants['GEAR_NEUTRAL']

    @property
    def GEAR_BACKWARD(self):
        """Message constant 'GEAR_BACKWARD'."""
        return Metaclass_ModeCommand_Request.__constants['GEAR_BACKWARD']


class ModeCommand_Request(metaclass=Metaclass_ModeCommand_Request):
    """
    Message class 'ModeCommand_Request'.

    Constants:
      GEAR_FORWARD
      GEAR_NEUTRAL
      GEAR_BACKWARD
    """

    __slots__ = [
        '_manual_mode',
        '_emergency_stop',
        '_gear',
    ]

    _fields_and_field_types = {
        'manual_mode': 'boolean',
        'emergency_stop': 'boolean',
        'gear': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.manual_mode = kwargs.get('manual_mode', bool())
        self.emergency_stop = kwargs.get('emergency_stop', bool())
        self.gear = kwargs.get('gear', int())

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
        if self.manual_mode != other.manual_mode:
            return False
        if self.emergency_stop != other.emergency_stop:
            return False
        if self.gear != other.gear:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ModeCommand_Response(type):
    """Metaclass of message 'ModeCommand_Response'."""

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
            module = import_type_support('erp_mini_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'erp_mini_msgs.srv.ModeCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mode_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mode_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mode_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mode_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mode_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ModeCommand_Response(metaclass=Metaclass_ModeCommand_Response):
    """Message class 'ModeCommand_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ModeCommand(type):
    """Metaclass of service 'ModeCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('erp_mini_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'erp_mini_msgs.srv.ModeCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__mode_command

            from erp_mini_msgs.srv import _mode_command
            if _mode_command.Metaclass_ModeCommand_Request._TYPE_SUPPORT is None:
                _mode_command.Metaclass_ModeCommand_Request.__import_type_support__()
            if _mode_command.Metaclass_ModeCommand_Response._TYPE_SUPPORT is None:
                _mode_command.Metaclass_ModeCommand_Response.__import_type_support__()


class ModeCommand(metaclass=Metaclass_ModeCommand):
    from erp_mini_msgs.srv._mode_command import ModeCommand_Request as Request
    from erp_mini_msgs.srv._mode_command import ModeCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
