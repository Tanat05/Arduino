#include <Servo.h>
Servo myservo;

int trig = 2;
int echo = 3;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  myservo.attach(9);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  int distance = pulseIn(echo, HIGH) * 340/2/10000;
  if (distance<=10)
    myservo.write(90);
  else
    myservo.write(0);
}
