void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  for(int i=1; i<=3; i++)
  {
    for(int j=0; j<5; j++)
    {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(i*1000);
      digitalWrite(LED_BUILTIN, LOW);
      delay(i*1000);
    }
  }

}
