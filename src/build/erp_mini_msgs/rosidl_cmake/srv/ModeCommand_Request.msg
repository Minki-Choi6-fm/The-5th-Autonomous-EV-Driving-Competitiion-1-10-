# erp_mini_msgs/srv/ModeCommand.srv

# Control mode (Manual / Auto)
bool manual_mode

# Emergency stop (ON / OFF)
bool emergency_stop

# Gear (Forward / Neutral / Backward)
uint8 GEAR_FORWARD  = 0
uint8 GEAR_NEUTRAL  = 1
uint8 GEAR_BACKWARD = 2
uint8 gear
