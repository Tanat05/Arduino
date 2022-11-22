int cds = 0;
int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  cds = analogRead(A0);
  Serial.println(cds);
  
  if (cds<500){
    count += 1;
    delay(1000);
  }
  else{
    count = 0;
  }
  
  if (count>=5)
    digitalWrite(9, HIGH);
  else
    digitalWrite(9, LOW);
}
