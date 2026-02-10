# erp_mini_serial
ERP Mini serial communication package

<br/>

## serial_bridge
ROS2 communication interface and ERP Mini PCU serial packet conversion node 

```bash
$ ros2 launch erp_mini_serial serial_bridge.launch.py
```

### Topic / Service Names
| Interface | Entitiy      | Type                                 | Name                          | Description                                      |
| --------- | ------------ | ------------------------------------ |------------------------------ | ------------------------------------------------ |
| Topic     | Subscription | **erp_mini_msgs/msg/ControlCommand** | **/erp_mini/control_command** | Control command includes speed, steering         |
| Topic     | Publisher    | **erp_mini_msgs/msg/Feedback**       | **/erp_mini/feedback**        | Feedback from ERP Mini                           |
| Servie    | Server       | **erp_mini_msgs/srv/ModeCommand**    | **/erp_mini/mode_command**    | Mode command includes control mode, E-stop, gear |

### QoS
The ModeCommand.srv service QoS profile is the system default.
| QoS Policy  | QoS Policy Key |
| ----------- | -------------- |
| History     | **Keep Last**  |
| Depth       | **1**          |
| Reliability | **Reliable**   |
| Durability  | **Volatile**   |

### Parameters
| Parameter Name          | Unit | Description                                                                                           |
| ----------------------- | ---- | ----------------------------------------------------------------------------------------------------- |
| **port_path**           | -    | Serial port path ( e.g. /dev/ttyUSB0 )                                                                |
| **baud_rate**           | -    | Serial communication speed. only 115200 or 9600 can be selected.                                      |
| **max_speed_mps**       | m/s  | The vehicle's maximum linear speed. When using Auto mode, the PCU limits it to 1.6 m/s.               |
| **max_steering_deg**    | deg  | The vehicle's maximum steering angle. Due to hardware limitations, 17 degrees or less is recommended. |
| **steering_offset_deg** | deg  | Provides an offset to the steering angle. Left is positive (+), right is negative (-).                |
