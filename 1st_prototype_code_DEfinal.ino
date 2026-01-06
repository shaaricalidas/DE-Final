#include <Servo.h> //using servo library
Servo servo1; //defines the servo so the library can be used
void setup() {
  //put your setup code here, to run once:
  Serial.begin (9600); //begins data collection
  servo1.attach(6); //servo signal wire is attaced to digital pwm pin 6
}
void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0); //sensor is connected to analog port 0
  Serial.println("Open/Close Value: "); //puts photoresistor value in serial monitor so I can check while running it
  Serial.println(value); //puts photoresistor value in serial monitor so I can check while running it
  if (value< 300) { //if it is dark, the servo moves to close
    servo1.write(120); //servo turns 180  degrees even though value is 120 bc servo is in continous rotation mode
  }
   else {  
    servo1.write(0); //the servo doesnt move/goes to open if it is bright
  }   , 
 delay(1000); //small delay so movements are not choppy
}
