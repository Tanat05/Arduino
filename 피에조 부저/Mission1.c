void setup() {
  pinMode(5, OUTPUT);
}

void s1(int a){
  tone(5, 261.6);
  delay(a); noTone(5);
}

void s2(int a){
  tone(5, 293.7);
  delay(a); noTone(5);
}

void s3(int a){
  tone(5, 329.6);
  delay(a); noTone(5);
}

void s4(int a){
  tone(5, 349.2);
  delay(a); noTone(5);
}

void s5(int a){
  tone(5, 392.0);
  delay(a); noTone(5);
}

void s6(int a){
  tone(5, 440.0);
  delay(a); noTone(5);
}

void s7(int a){
  tone(5, 493.9);
  delay(a); noTone(5);
}

void s8(int a){
  tone(5, 261.6);
  delay(a); noTone(5);
}

void loop(){
  s5(200);
  delay(300);
  s5(200);
  delay(300);
  s6(200);
  delay(300);
  s6(200);
  delay(300);
  s5(200);
  delay(300);
  s5(200);
  delay(300);
  s3(300);
  delay(500);
  
  s5(200);
  delay(300);
  s5(200);
  delay(300);
  s3(200);
  delay(300);
  s3(200);
  delay(300);
  s2(300);
  delay(700);

  s5(200);
  delay(300);
  s5(200);
  delay(300);
  s6(200);
  delay(300);
  s6(200);
  delay(300);
  s5(200);
  delay(300);
  s5(200);
  delay(300);
  s3(300);
  delay(700);

  s5(200);
  delay(300);
  s3(200);
  delay(300);
  s2(200);
  delay(300);
  s3(200);
  delay(300);
  s1(300);
  delay(1000);
}
