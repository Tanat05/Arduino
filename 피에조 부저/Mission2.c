int button=0;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
}

void loop(){
  int v1=digitalRead(7);
  int v2=digitalRead(6);

  if(v1==HIGH) button=1;
  else if(v2==HIGH) button=0;

  if (button==1){
    tone(8, 2000, 200);
    delay(400);
    tone(8, 1600, 200);
    delay(400);
  }
  else if (button==0)
    noTone(8);
}
