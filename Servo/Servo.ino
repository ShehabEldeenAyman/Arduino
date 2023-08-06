#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// the object can be named anything not just myservo
// twelve servo objects can be created on most boards

int pos = 0;    

void setup() {

  myservo.attach(9); 
// attaches the servo on pin 9 to the servo object

}

void loop() {
//moves the servo arm from 0 degrees to 180 degrees
  for (pos = 0; pos <= 180; pos++) { 
    myservo.write(pos);             
    delay(15);                     
  }
// moves the servo arm from 180 degrees to 0 degrees
  for (pos = 180; pos >= 0; pos--) {
    myservo.write(pos);         
    delay(15);                    
  }
}
