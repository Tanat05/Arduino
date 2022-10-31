char data;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop(){
  if (Serial.available()){
    data = Serial.read();
    if (data == '1') {
      analogWrite(3,255);
      }
    else if (data == '2'){
      analogWrite(3,90);
      }
    else {
      analogWrite(3,0);
    }
    delay(100);
    }
}
