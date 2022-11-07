int button=0;

void setup() {
  Serial.begin(9600);

  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
}

void loop(){
  int readValue1=digitalRead(6), readValue2=digitalRead(7);

  if (readValue1==HIGH){
    button=1;
    delay(100);
  }
  if (readValue2==HIGH){
    button=0;
    delay(100);
  }
  
  if(button==1){
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    tone(4, 2000, 200);
    delay(300);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    tone(4, 1600, 200);
    delay(300);
  }
  else{
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    noTone(8);
  }
}
