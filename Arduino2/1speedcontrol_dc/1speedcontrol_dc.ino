int SPEED;
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Enter the speed of the motor(0-255)");
  while(Serial.available()==0){

  }
  SPEED=Serial.parseInt();
  Serial.println(SPEED);
  analogWrite(11, SPEED);
}
