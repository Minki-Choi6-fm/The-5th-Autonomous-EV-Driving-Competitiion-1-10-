![Ubuntu 22.04](https://img.shields.io/badge/Ubuntu_22.04-%23E95420?style=flat&logo=ubuntu&logoColor=white)
![Docker](https://img.shields.io/badge/Docker-%232496ED?style=flat&logo=docker&logoColor=white)
![ROS Humble](https://img.shields.io/badge/ROS_Humble-%2322314E?style=flat&logo=ros&logoColor=white)
![Qt](https://img.shields.io/badge/Qt-%2341CD52?style=flat&logo=Qt&logoColor=white)
![C++](https://img.shields.io/badge/C++-%2300599C?style=flat&logo=c%2B%2B&logoColor=white)

[![docker-build](https://img.shields.io/github/actions/workflow/status/mingminQ/erp_mini_ros/docker-build.yaml?branch=main&label=docker-build&style=flat&logo=docker&logoColor=white&labelColor=%23181717)](https://github.com/mingminQ/erp_mini_ros/actions/workflows/docker-build.yaml)
[![colcon-build](https://img.shields.io/github/actions/workflow/status/mingminQ/erp_mini_ros/colcon-build.yaml?branch=main&label=colcon-build&style=flat&logo=ros&logoColor=white&labelColor=%23181717)](https://github.com/mingminQ/erp_mini_ros/actions/workflows/colcon-build.yaml)

# ERP Mini ROS2 Humble packages
If you have any suggestions or issues, please contact me using the information below.  

- **Author**  : Minkyu Kil (Sejong Univ. AIV, Graduation : 2026.02)
- **Contact** : mgkilprg@gmail.com

<br/>

# Dependencies

``` bash
$ rosdep install --rosdistro humble --from-paths src --ignore-src -r -y
```

<br/>

# Package overview
For more information about the package, please read the README.md at the link below.

- **ERP Mini RQT Plugin :** [erp_mini_rqt_plugin](https://github.com/mingminQ/erp_mini_ros/tree/main/src/erp_mini_rqt_plugin)

- **ERP Mini ROS2 communication interfaces :** [erp_mini_msgs](https://github.com/mingminQ/erp_mini_ros/tree/main/src/erp_mini_msgs)

- **ERP Mini ROS2 serial driver :** [erp_mini_serial](https://github.com/mingminQ/erp_mini_ros/tree/main/src/erp_mini_serial)

<br/>

# Docker
For developers who want to develop in a virtual environment.

### Build
``` bash
# At your workspace directory  

$ ./docker_build.sh
```
``` bash
# If you're using a Korean network, the options below will help build your image faster.
# Otherwise, remove them.

RUN sed -i \
    -e 's|http://archive.ubuntu.com/ubuntu|http://mirror.kakao.com/ubuntu|g' \
    -e 's|http://security.ubuntu.com/ubuntu|http://mirror.kakao.com/ubuntu|g' \
    /etc/apt/sources.list
```

### Launch docker container
``` bash
# At your workspace directory  

$ . docker/docker_run.sh
```

### Conatiner Launch Script : Device Mounting
``` bash
# ERP Mini serial port mounting to docker container (e.g. ERP_MINI_SERIAL_PORT="/dev/ttyUSB0")  

ERP_MINI_SERIAL_PORT="YOUR_DEVICE_PORT"
```

### Conatiner Launch Script : GPU Options
``` bash
# If you have an Nvidia GPU, keep the options below, otherwise remove them.

-e NVIDIA_VISIBLE_DEVICES=all
-e NVIDIA_DRIVER_CAPABILITIES=all
--runtime=nvidia 
--gpus all
```
