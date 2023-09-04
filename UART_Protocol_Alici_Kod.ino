#include <Servo.h>
Servo servo;
int val;

void setup() {
  servo.attach(6);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0)
  {
     val=Serial.read();
    servo.write(val);
  }
  delay(15);
  

}
