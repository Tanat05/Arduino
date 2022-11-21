void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  int v = analogRead(A0);
  Serial.println(v);

  if(v<500)
    digitalWrite(13, LOW);
  else
    digitalWrite(13, HIGH);
}
