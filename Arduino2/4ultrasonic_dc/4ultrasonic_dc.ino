int SPEED;
int distanceCM;
int duration;
float speedcm;
void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
  Serial.println("Considering the range of the senor is between 2-400cm");
}

void loop() {
  digitalWrite(2, LOW);
  delay(2);
  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(2, LOW);

  duration=pulseIn(3, HIGH);
  distanceCM=duration*0.017;
  speedcm=390/255;
  SPEED=speedcm*(distanceCM-10);
  if(SPEED<0)
  {
    SPEED=0;
  }
  analogWrite(11, SPEED);
  delay(100);
}
