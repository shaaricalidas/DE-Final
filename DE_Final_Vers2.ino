#include <Servo.h> //using servo library

Servo servo1; //defines the servo so the library can be used
Servo servo2; //defines the servo so the library can be used

int leftangle = 30;
int centerangle = 90;
int rightangle = 150;

void setup() {
  //put your setup code here, to run once:
  Serial.begin (9600); //begins data collection
  servo1.attach(9);
  servo2.attach(6);
}


void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0); //sensor is connected to analog port 0
  int leftvalue = analogRead(A1);
  int centervalue = analogRead(A2);
int rightvalue = analogRead(A3);

  Serial.println("Analog Value: "); //puts photoresistor value in serial monitor so I can check while running it
  Serial.println(value); //puts photoresistor value in serial monitor so I can check while running it
  Serial.println("Left Value: ");
  Serial.println(leftvalue);
  Serial.println("Center value:");
  Serial.println(centervalue);
  Serial.println("Right value: ");
  Serial.println(rightvalue);

  //gets the value from the photoresistor
  if (value< 30) { //if it is dark, the servo moves to close
    servo1.write(90); //servo turns 90  degrees
  }
   else {  
    servo1.write(0); //the servo doesnt move/goes to open if it is bright
  }
 delay(100);

if (leftvalue > centervalue && leftvalue > rightvalue) {
servo2.write(leftangle);}
else if (centervalue > leftvalue && centervalue >rightvalue){
servo2.write(centerangle);}
  else if (rightvalue > centervalue && rightvalue > leftvalue) {
servo2.write(rightangle);}

}


