int poti=0;
void setup() {
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  poti=analogRead(A0);
  analogWrite(13, (poti/4));
}
