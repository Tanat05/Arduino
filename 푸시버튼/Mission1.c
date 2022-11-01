int button=0;

void setup() {
  Serial.begin(9600);
  
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
}

void loop(){
  int readValue=digitalRead(7);
  
  Serial.println(readValue);

  if (readValue==HIGH)
    if (button==0){
      button=1;
      delay(500);
    }
    else{
      button=0;
      delay(500);
    }

  if(button==1){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }
}
