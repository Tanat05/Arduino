int trig = 10;
int echo = 11;
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  int distance = pulseIn(echo, HIGH) * 340/2/10000;
  if (distance<10){
    tone(3, 523.3, 100);
    delay(500);
  }
  else if (distance<20){
    tone(3, 392, 300);
    delay(1000);
  }
  else
    noTone(3);
}
