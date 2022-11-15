int trig = 2;
int echo = 3;
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  int distance = pulseIn(echo, HIGH) * 340/2/10000;
  if (distance<10){
  	tone(8, 523.3, 100);
    delay(500);
  }
  else if (distance<20){
  	tone(8, 392, 300);
    delay(1000);
  }
  else
    noTone(8);
}
