# 🏎️ 2026 IEVE Autonomous Driving (1/10 Scale)

**제5회 국제 대학생 EV 자율주행 경진대회 (The 5th International University Students Autonomous EV Driving Competition)**
**Category:** 자율주행 모빌리티 레이스 1/10 (Autonomous Mobility Race 1/10)

![Competition Poster](./docs/poster_image.jpg) ## 📝 Project Overview
이 프로젝트는 2026년 3월 제주에서 열리는 '제5회 국제 대학생 EV 자율주행 경진대회'의 **1/10 스케일 자율주행 부문** 참가를 위해 개발된 자율주행 소프트웨어 스택입니다.
주어진 트랙 환경에서 LiDAR와 카메라 센서 퓨전을 통해 장애물을 회피하고 최적의 주행 경로를 생성하여 완주하는 것을 목표로 합니다.

## 📅 Competition Info
- **Event:** The 5th International University Students Autonomous EV Driving Competition
- **Date:** 2026.03.24 (Tue) ~ 03.27 (Fri)
- **Location:** Jeju International Electric Vehicle Expo (IEVE), Jeju, South Korea
- **Host:** Global EV Association Network (GEAN), IEVE Organizing Committee

## 🛠️ Tech Stack & Environment

### Software
| Component | Specification |
| --- | --- |
| **OS** | Ubuntu 22.04 LTS (Jammy Jellyfish) |
| **Middleware** | ROS 2 (Humble/Iron) |
| **Language** | Python 3.10+, C++ |
| **Perception** | OpenCV, YOLOv8 (Optional), LiDAR Clustering |
| **Control** | PID Control, Pure Pursuit |

### Hardware (Example - Modify as needed)
- **Platform:** 1/10 Scale RC Car Chassis
- **Compute Unit:** (ex: NVIDIA Jetson Orin Nano / LattePanda / Raspberry Pi 5)
- **Sensors:**
  - 2D LiDAR (ex: RPLIDAR A1/A2)
  - Depth Camera (ex: Intel RealSense / OAK-D)
  - IMU (9-axis)

## 🚀 Key Features
1. **Lane Keeping Assist (LKA):** 카메라 기반의 차선 인식 및 조향 제어
2. **Obstacle Avoidance:** LiDAR PointCloud 데이터를 활용한 동적/정적 장애물 회피
3. **SLAM & Localization:** (ex: Cartographer 또는 AMCL을 이용한 위치 추정)
4. **Local Path Planning:** 장애물 회피를 위한 실시간 경로 생성 알고리즘

## 📂 Repository Structure
```bash
├── src
│   ├── perception       # Camera & LiDAR processing nodes
│   ├── planning         # Path planning algorithms (Pure Pursuit, A*, etc.)
│   ├── control          # Motor & Servo control (PID)
│   ├── description      # URDF models for 1/10 scale car
│   └── launch           # ROS 2 Launch files
├── docs                 # Project documentation & images
└── README.md
