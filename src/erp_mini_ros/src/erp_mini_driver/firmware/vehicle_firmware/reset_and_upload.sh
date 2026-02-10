#!/bin/bash

# reset_and_upload.sh

PORT=/dev/ttyACM0  # 실제 포트 확인 후 수정

echo "Resetting Arduino..."

# 1200 baud로 포트 열어서 강제 리셋

stty -F $PORT 1200 hupcl
sleep 0.1
stty -F $PORT 0

# 새 부트로더 포트 대기

sleep 2

echo "Uploading..."
arduino --upload vehicle_firmware.ino --port $PORT --verbose
