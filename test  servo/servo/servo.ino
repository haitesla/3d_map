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
    for (x = 0; x <= 90; x++) {
      gServo.write(x);

    }
    for (x = 90; x >= 0; x--){
      gServo.write(x);

    }
    delay(1000);
}
