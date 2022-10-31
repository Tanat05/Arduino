void setup(){
  pinMode(8, OUTPUT);
}

void loop(){
  int i;
  for (i=0;i<3;i++){
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(8, LOW);
    delay(300);
  }
  for (i=0;i<3;i++){
    digitalWrite(8, HIGH);
    delay(700);
    digitalWrite(8, LOW);
    delay(700);
  }
  for (i=0;i<3;i++){
    digitalWrite(8, HIGH);
    delay(300);
    digitalWrite(8, LOW);
    delay(300);
  }
}
