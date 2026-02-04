#include <Servo.h>

// ==========================================
// [확정된 핀 번호 입력]
// ==========================================
const int PIN_STEERING  = 6;   // 조향 (GP6)
const int PIN_ESC       = 11;  // 모터 (GP11)

Servo esc;
Servo steering;

void setup() {
  Serial.begin(115200);
  
  // 1. 핀 연결
  esc.attach(PIN_ESC);
  steering.attach(PIN_STEERING);
  
  // 2. [매우 중요] ESC 아밍(Arming) 시도
  // Traxxas ESC는 전원을 켜고 '중립(90도)' 신호가 
  // 약 1~2초 이상 지속적으로 들어와야 "띠리링~" 하면서 초록불로 바뀝니다.
  Serial.println("Sending Neutral Signal... Wait for Solid Green Light.");
  
  esc.write(90);       // 모터 정지 신호
  steering.write(90);  // 조향 중앙
  
  // 3. 아밍 대기 (초록불이 들어올 때까지 충분히 기다림)
  delay(4000); 
  
  Serial.println("=== Robot Drive Test Start ===");
}

void loop() {
  // ------------------------------------------------
  // 1. 조향 테스트 (좌 <-> 우)
  // ------------------------------------------------
  Serial.println("Steering Check: LEFT");
  steering.write(60);  // 왼쪽 (각도는 기구학에 따라 다를 수 있음)
  delay(1000);

  Serial.println("Steering Check: CENTER");
  steering.write(90);
  delay(500);

  Serial.println("Steering Check: RIGHT");
  steering.write(120); // 오른쪽
  delay(1000);
  
  steering.write(90); // 다시 중앙
  delay(500);

  // ------------------------------------------------
  // 2. 모터 구동 테스트
  // ------------------------------------------------
  Serial.println("Motor Check: Forward (Slow)");
  // 90이 정지, 숫자가 커지면 전진 (혹은 반대일 수 있음)
  esc.write(140);  
  delay(2000); 

  Serial.println("Motor Check: STOP");
  esc.write(90);
  delay(1000);

  Serial.println("Motor Check: Reverse/Brake");
  // 90보다 작으면 후진
  esc.write(40);
  delay(2000);

  Serial.println("Motor Check: STOP");
  esc.write(90);
  delay(2000);
}
