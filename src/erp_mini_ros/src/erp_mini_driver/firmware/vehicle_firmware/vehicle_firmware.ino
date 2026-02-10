#include <Servo.h>

// ==========================================
// [설정] 핀 번호 (테스트로 확인한 번호)
// ==========================================
const int PIN_STEERING = 6;   // 조향 서보
const int PIN_ESC      = 11;  // 모터 (ESC)

Servo esc;
Servo steering;

// 데이터 수신 버퍼
String inputString = "";
boolean stringComplete = false;

// 안전 장치: 통신 끊기면 정지하기 위함
unsigned long lastCmdTime = 0;
const long FAILSAFE_TIMEOUT = 1000; // 1초간 명령 없으면 정지

void setup() {
  Serial.begin(115200);
  
  esc.attach(PIN_ESC);
  steering.attach(PIN_STEERING);
  
  // 초기화: 중립
  esc.write(90);
  steering.write(90);
  
  // 아밍 대기 (초록불 뜰 때까지)
  delay(3000); 
}

void loop() {
  // 1. 시리얼 데이터 파싱 (명령어 형식: "속도,조향\n")
  if (stringComplete) {
    int commaIndex = inputString.indexOf(',');
    
    if (commaIndex != -1) {
      String speedStr = inputString.substring(0, commaIndex);
      String steerStr = inputString.substring(commaIndex + 1);
      
      int speedVal = speedStr.toInt();
      int steerVal = steerStr.toInt();
      
      controlVehicle(speedVal, steerVal);
      lastCmdTime = millis(); // 명령 받은 시간 갱신
    }
    
    // 버퍼 비우기
    inputString = "";
    stringComplete = false;
  }

  // 2. 안전 장치 (Failsafe)
  // 라떼판다가 죽거나 선이 뽑히면 1초 뒤 자동 정지
  if (millis() - lastCmdTime > FAILSAFE_TIMEOUT) {
    esc.write(90);
    // steering은 굳이 중앙으로 안 돌려도 됨 (관성 주행 고려)
  }
}

// 실제 구동 함수
void controlVehicle(int speed, int steer) {
  // [안전] 속도 범위 제한 (Traxxas XL-5 기준)
  // 후진 없음 정책: 90 미만은 무조건 90(정지/브레이크)으로 처리
  if (speed < 90) speed = 90; 
  if (speed > 180) speed = 180; // 너무 빠르면 위험하니 제한 가능

  // [안전] 조향 범위 제한
  if (steer < 0) steer = 0;
  if (steer > 180) steer = 180;

  esc.write(speed);
  steering.write(steer);
}

// 시리얼 인터럽트 (데이터가 들어오면 자동 실행)
void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    inputString += inChar;
    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}
