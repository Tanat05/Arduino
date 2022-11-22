int cds = 0;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  cds = analogRead(A0);
  
  Serial.print("cds= ");
  Serial.println(cds);

  if (cds<400)
    digitalWrite(9, HIGH);
  else
    digitalWrite(9, LOW);
    
  delay(200);
}
