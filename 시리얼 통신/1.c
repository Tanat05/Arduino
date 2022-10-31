char data;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop(){
  if (Serial.available()){
    data = Serial.read();
    if (data == '1') {
      Serial.println("LED ON");
      digitalWrite(2, HIGH);
      }
    else if (data == '2'){
      Serial.println("LED OFF");
      digitalWrite(2, LOW);
      }
    delay(100);
    }
}
