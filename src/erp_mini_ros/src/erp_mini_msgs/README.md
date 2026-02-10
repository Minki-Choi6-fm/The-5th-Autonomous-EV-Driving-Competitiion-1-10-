# erp_mini_msgs
ERP Mini ROS2 communication interfaces

<br/>

## ControlCommand.msg
ERP Mini control command includes speed, steering
| Field        | Type    | Unit        | Description                                                                                                                             |
| ------------ | ------- | ----------- | --------------------------------------------------------------------------------------------------------------------------------------- |
| **speed**    | float64 | **m/s**     | The linear speed of the vehicle. Negative values are not allowed. If backward is required, the gear must be changed in ModeCommand.srv. |
| **steering** | float64 | **rad**     | The steering angle of the vehicle. **Positive values are for the left side** and **negative values are for the right side.**            |

<br/>

## Feedback.msg
Feedback information from ERP Mini
| Field              | Type    | Unit                             | Description                                                                                                |
| ------------------ | ------- | -------------------------------- | ---------------------------------------------------------------------------------------------------------- |
| **manual_mode**    | bool    | **Manual / Auto**                | Current control mode of the vehicle. **Ture** is **manual mode** and **false** is **auto mode**.           |
| **emergency_stop** | bool    | **On / Off**                     | Current E-Stop mode of the vehicle. **Ture** is **E-Stop On** and **false** is **E-Stop Off**.             |
| **gear**           | uint8   | **Forward / Neutral / Backward** | Current gear of the vehicle. **Forward(0), Neutral(1), Backward(2)**.                                      |
| **speed**          | float64 | **m/s**                          | The vehicle's current linear speed.                                                                        |
| **steering**       | float64 | **rad**                          | The vehicle's current steering angle, with **positive values for left** and **negative values for right.** |
| **heartbeat**      | uint8   | **0 - 255**                      | Used to check the vehicle's communication status and activate it. It is incremented by 1 every cycle.      |

<br/>

## ModeCommand.srv
ERP Mini mode command includes control mode, E-Stop, gear
| Name               | Type  | Unit                             | Description                                                                                                                                                                                       |
| ------------------ | ----- | -------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **manual_mode**    | bool  | **Manual / Auto**                | This field enables manual mode. If **true, manual mode is enabled and auto mode is disabled**. If false, auto mode is enabled, but manual mode can be temporarily used via the manual controller. |
| **emergency_stop** | bool  | **On / Off**                     | This field enables the emergency stop. If **true, the control input is ignored.** If false, the emergency stop is disabled.                                                                       |
| **gear**           | uint8 | **Forward / Neutral / Backward** | This field sets the vehicle's gear. It can be configured with **Forward(0), Neutral(1), or Backward(2).** However, any value other than 0, 1, or 2 is considered neutral.                         |
