int sensorPin = A0; // 수분 센서 핀 설정
int pumpPin = 9; // 펌프 핀 설정
int threshold = 50; // 수분 임계값 설정

void setup() {
  pinMode(pumpPin, OUTPUT); // 펌프 핀 출력 모드로 설정
}

void loop() {
  int moisture = analogRead(sensorPin); // 수분 측정
  if (moisture < threshold) { // 수분이 임계값보다 낮으면
    digitalWrite(pumpPin, HIGH); // 펌프 작동
  } else {
    digitalWrite(pumpPin, LOW); // 펌프 정지
  }
  delay(500); // 0.5초 지연
}
