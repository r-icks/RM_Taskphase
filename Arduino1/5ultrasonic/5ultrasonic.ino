long duration;
int distanceIN;
int distanceCM;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(13, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  digitalWrite(2, LOW);
  delay(2);
  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(2, LOW);

  duration=pulseIn(13, HIGH);
  distanceCM=duration*0.034/2;
  Serial.print("Distance in centimeter: ");
  Serial.print(distanceCM);
  Serial.println(" cm");
  distanceIN=duration*0.0133/2;
  Serial.print("Distance in inches: ");
  Serial.print(distanceIN);
  Serial.println(" inches");
}
