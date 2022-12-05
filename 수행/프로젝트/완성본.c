#include <DHT11.h>
int pin=2;    // 연결한 아두이노 디지털 핀 번호
DHT11 dht11(pin);

// 데이터를 저장할 변수 선언
int humidityData;
int soilMoistureData;

// 센서의 핀과 제어 장치의 핀을 설정
int humiditySensorPin = A0;
int soilMoistureSensorPin = A1;
int humidifierPin = 9;
int pumpPin = 10;

float temp, humi;

void setup() {
  // 제어 장치의 핀을 출력으로 설정
  pinMode(humidifierPin, OUTPUT);
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int err;
  float temp, humi;
  if((err=dht11.read(humi, temp))==0)
  {
    Serial.print("temperature:");
    Serial.print(temp);
    Serial.print(" humi:");
    Serial.print(humi);
    Serial.println();
  }
  else
  {
    Serial.println();
    Serial.print("Error No :");
    Serial.print(err);
    Serial.println();    
  }

  delay(DHT11_RETRY_DELAY);
  // 센서로부터 데이터 읽기
  soilMoistureData = analogRead(soilMoistureSensorPin);

  Serial.print("soil: ");
  Serial.println(soilMoistureData);
  
  // 습도가 낮을 경우 가습기 켜기
  if (humi < 30) {
    digitalWrite(humidifierPin, HIGH);
  }
  // 습도가 높을 경우 가습기 끄기
  else if (humi > 50) {
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
