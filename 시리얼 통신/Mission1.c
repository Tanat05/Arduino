char data;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop(){
  if (Serial.available()){
    data = Serial.read();
    if (data == '1') {
      Serial.println("LED ON");
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      }
    else if (data == '2'){
      Serial.println("LED OFF");
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      }
    else {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    delay(100);
    }
}
