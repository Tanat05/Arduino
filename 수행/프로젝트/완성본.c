// Set the pin for reading humidity from the temperature and humidity sensor
int humiditySensorPin = A0;

// Set the pin for reading soil moisture from the soil moisture sensor
int soilMoistureSensorPin = A1;

// Variable for storing the humidity data read from the temperature and humidity sensor
int humidityData;

// Variable for storing the soil moisture data read from the soil moisture sensor
int soilMoistureData;

// Set the pin for controlling the humidifier
int humidifierPin = 9;

// Set the pin for controlling the pump
int pumpPin = 10;

void setup() {
  // Set the humidifier control pin as an output
  pinMode(humidifierPin, OUTPUT);

  // Set the pump control pin as an output
  pinMode(pumpPin, OUTPUT);
}

void loop() {
  // Read humidity data from the temperature and humidity sensor
  humidityData = analogRead(humiditySensorPin);

  // Read soil moisture data from the soil moisture sensor
  soilMoistureData = analogRead(soilMoistureSensorPin);

  // If the humidity is low, turn on the humidifier
  if (humidityData < 30) {
    digitalWrite(humidifierPin, HIGH);
  }
  // If the humidity is high, turn off the humidifier
  else if (humidityData > 50) {
    digitalWrite(humidifierPin, LOW);
  }

  // If the soil moisture is low, turn on the pump
  if (soilMoistureData < 30) {
    digitalWrite(pumpPin, HIGH);
  }
  // If the soil moisture is high, turn off the pump
  else if (soilMoistureData > 50) {
    digitalWrite(pumpPin, LOW);
  }
}
