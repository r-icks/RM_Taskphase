#include<Servo.h>

Servo brr;
int angle;
void setup() {
  brr.attach(13);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Enter the angle");
  while(Serial.available()==0){

  }
  angle=Serial.parseInt();
  Serial.println("Changing angle to ");
  Serial.println(angle);
  brr.write(angle);
  delay(100);
}
