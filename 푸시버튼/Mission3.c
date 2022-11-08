int button=0;

void setup() {
  Serial.begin(9600);
  
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
}

void loop(){
  if (digitalRead(2)==HIGH){
    button=1;
    delay(100);
  }
  else if (digitalRead(3)==HIGH){
    button=2;
    delay(100);
  }
  else if (digitalRead(4)==HIGH){
    button=3;
    delay(100);
  }
  
  if(button==1){
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(300);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    delay(300);
  }
  else if(button==2){
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(300);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    delay(300);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    delay(300);
  }
  else if(button==3){
    for (int i=0;i<255;i++){
      analogWrite(10, i);
      delay(10);
    }
    for (int i=255;i>0;i--){
      analogWrite(10, i);
      delay(10);
    }
  }
}
