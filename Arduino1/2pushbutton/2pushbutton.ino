int butt=0;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}

void loop() {
  butt=digitalRead(12);
  if(butt== HIGH)
  {
    digitalWrite(13, HIGH);  
  }
  else
  {
    digitalWrite(13, LOW);
  }
}
