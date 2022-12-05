// 데이터를 저장할 변수 선언
int temperatureData;
int humidityData;
int soilMoistureData;

// 센서의 핀과 제어 장치의 핀을 설정
int temperatureSensorPin = A0;
int humiditySensorPin = A1;
int soilMoistureSensorPin = A2;
int humidifierPin = 9;
int pumpPin = 10;

void setup() {
  // 제어 장치의 핀을 출력으로 설정
  pinMode(humidifierPin, OUTPUT);
  pinMode(pumpPin, OUTPUT);
}

void loop() {
  // 센서로부터 데이터 읽기
  temperatureData = analogRead(temperatureSensorPin);
  humidityData = analogRead(humiditySensorPin);
  soilMoistureData = analogRead(soilMoistureSensorPin);

  // 습도가 낮을 경우 가습기 켜기
  if (humidityData < 30) {
    digitalWrite(humidifierPin, HIGH);
  }
  // 습도가 높을 경우 가습기 끄기
  else if (humidityData > 50) {
    digitalWrite(humidifierPin, LOW);
  }

  // 토양 수분이 낮을 경우 펌프 켜기
  if (soilMoistureData < 30) {
    digitalWrite(pumpPin, HIGH);
  }
  // 토양 수분이 높을 경우 펌프 끄기
  else if (soilMoistureData > 50) {
    digitalWrite(pumpPin, LOW);
  }
}

// 데이터를 저장할 변수 선언
int humidityData;
int soilMoistureData;

// 센서의 핀과 제어 장치의 핀을 설정
int humiditySensorPin = A0;
int soilMoistureSensorPin = A1;
int humidifierPin = 9;
int pumpPin = 10;

void setup() {
  // 제어 장치의 핀을 출력으로 설정
  pinMode(humidifierPin, OUTPUT);
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 센서로부터 데이터 읽기
  humidityData = analogRead(humiditySensorPin);
  soilMoistureData = analogRead(soilMoistureSensorPin);

  Serial.println(humidityData);
  Serial.println("1");
  delay(1000);
  Serial.println(soilMoistureData);
  Serial.println("2");
  delay(1000);
  
  // 습도가 낮을 경우 가습기 켜기
  if (humidityData < 30) {
    digitalWrite(humidifierPin, HIGH);
  }
  // 습도가 높을 경우 가습기 끄기
  else if (humidityData > 50) {
    digitalWrite(humidifierPin, LOW);
  }

  // 토양 수분이 낮을 경우 펌프 켜기
  if (soilMoistureData < 30) {
    digitalWrite(pumpPin, HIGH);
  }
  // 토양 수분이 높을 경우 펌프 끄기
  else if (soilMoistureData > 50) {
    digitalWrite(pumpPin, LOW);
  }
}
