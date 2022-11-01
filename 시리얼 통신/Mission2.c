char data;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop(){
  if (Serial.available())
    data = Serial.read();
  Serial.println(data);
  if (data == '1') {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    delay(500);
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(500);
    }
  else if (data == '2'){
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }
  delay(100);
}
