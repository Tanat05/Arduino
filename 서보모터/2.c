#include <Servo.h>
Servo myservo;
void setup()
{
  pinMode(8, INPUT);
  myservo.attach(9);
}

void loop()
{
  if (digitalRead(8) == HIGH)
    myservo.write(90);
  else
    myservo.write(0);
}
