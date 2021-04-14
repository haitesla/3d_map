#include <Servo.h> 
#define SERVO_PIN 9
Servo gServo;
void setup() 
{ 
    gServo.attach(SERVO_PIN); 
}
 
void loop() 
{ 
    int x = 0;

    gServo.write(x);

    delay(1000);
}
