int button=0;

void setup() {
  Serial.begin(9600);

  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
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
    delay(300);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    delay(300);
  }
  else{
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
  }
}
