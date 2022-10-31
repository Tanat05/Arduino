void setup(){
  pinMode(3, OUTPUT);
}

void loop(){
  for (int i=10;i<255;i=i+1){
    analogWrite(3,i);
    delay(10);
  }
  for (int i=255;i>0;i=i-1){
    analogWrite(3,i);
    delay(10);
  }
  delay(500);
}
