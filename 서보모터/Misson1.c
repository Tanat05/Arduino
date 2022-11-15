#include <Servo.h>
Servo myservo;
void setup()
{
  myservo.attach(9);
}

void loop()
{
    for (int i=0;i<=180;i+=5){
    	myservo.write(i);
    	delay(100);
    }
	for (int i=0;i<=180;i+=5){
  	myservo.write(180-i);
  	delay(100);
    }
}
