void setup() {
  pinMode(5, OUTPUT);
}

void loop(){
  tone(5, 261.6);
  delay(200); noTone(5); delay(200);
  tone(5, 293.7);
  delay(200); noTone(5); delay(200);
  tone(5, 329.6);
  delay(200); noTone(5); delay(200);
  tone(5, 349.2);
  delay(200); noTone(5); delay(200);
}
