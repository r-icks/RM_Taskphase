int SPEED;
void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Enter the speed of the motor(0-255)");
  while(Serial.available()==0){

  }
  SPEED=Serial.parseInt();
  Serial.println(SPEED);
  if(digitalRead(7)==HIGH){
    digitalWrite(6, LOW);
    digitalWrite(11, LOW);
    analogWrite(5, SPEED);
    analogWrite(10, SPEED);
  }
  else
  {
    digitalWrite(10, LOW);
    digitalWrite(5, LOW);
    analogWrite(6, SPEED);
    analogWrite(11, SPEED);
  }
}
