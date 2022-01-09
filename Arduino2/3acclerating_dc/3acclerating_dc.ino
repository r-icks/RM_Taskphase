void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  for(int i=0; i<=255; i+=5){
    analogWrite(10, i);
    delay(30);
  }
  for(int i=255; i>=0; i-=5){
    analogWrite(10, i);
    delay(30);
  }
}
