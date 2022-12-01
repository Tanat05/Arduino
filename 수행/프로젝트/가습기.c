int sensorPin = A0; // 습도 센서 핀 설정
int fanPin = 9; // 가습기 핀 설정
int threshold = 50; // 습도 임계값 설정

void setup() {
  pinMode(fanPin, OUTPUT); // 가습기 핀 출력 모드로 설정
}

void loop() {
  int humidity = analogRead(sensorPin); // 습도 측정
  if (humidity > threshold) { // 습도가 임계값보다 높으면
    digitalWrite(fanPin, HIGH); // 가습기 작동
  } else {
    digitalWrite(fanPin, LOW); // 가습기 정지
  }
  delay(500); // 0.5초 지연
}
