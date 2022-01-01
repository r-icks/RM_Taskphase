long duration;
int distance;
void setup() {
  pinMode(5,OUTPUT);
  pinMode(6, INPUT);
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  digitalWrite(5, LOW);
  delay(2);
  digitalWrite(5, HIGH);
  delay(10);
  digitalWrite(5, LOW);

  duration=pulseIn(6, HIGH);
  distance=duration*0.034/2;
  if(distance<15)
  {
    digitalWrite(4, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(13, LOW);
  }
  else if(distance>=15&&distance<=50)
  {
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(13, HIGH);    
  }
  else{
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(13, LOW);      
  }
}
