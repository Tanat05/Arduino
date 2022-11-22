int cds = 0;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  cds = analogRead(A0);
  Serial.println(cds);
  int led=map(cds, 0, 1023, 255, 0);

  analogWrite(9, led);
}
