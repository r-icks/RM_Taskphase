#include<Servo.h>
Servo howdead;
int led1=9;
int led2=10;
int led3=11;
int led4=12;
int led5=13;
int button=8;
int butt;
int n;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(button, INPUT);
  pinMode(7, INPUT);
  howdead.attach(2);
  Serial.begin(9600);
  
}

void loop() {
  butt=digitalRead(button);
  Serial.println("Push button to begin the game");
  while(digitalRead(button)==LOW)
  {
  }
  while(butt==HIGH)
  {
    digitalWrite(led5, HIGH);
    delay(100);
    digitalWrite(led4, HIGH);
    delay(100);
    digitalWrite(led3, HIGH);
    delay(100);
    digitalWrite(led2, HIGH);
    delay(100);
    digitalWrite(led1, HIGH);
    int ran=random(1,101);
    int lives=5;
    int s=1;
    int e=100;
    int guess;

    while(lives>0)
    {
      if(lives==4)
      {
        digitalWrite(led1, LOW);
      }
      else if(lives==3)
      {
        digitalWrite(led2, LOW);
      }
      else if(lives==2)
      {
        digitalWrite(led3, LOW);
      }
      else if(lives==1)
      {
        digitalWrite(led4, LOW);
      }
      else if(lives==0)
      {
        digitalWrite(led5, LOW);
      }
      howdead.write(36*(5-lives));
      Serial.print("Enter a number between ");
      Serial.print(s);
      Serial.print(" and ");
      Serial.print(e);
      Serial.print(":");
      while(Serial.available()==0){
    }
      guess=Serial.parseInt();
      Serial.println(guess);
      if(guess==ran)
      {
        e=guess;
        s=guess;
        break;
      }
      else if(ran<guess)
      {
        lives=lives-1;
        e=guess;
      }    
      else
      {
        lives=lives-1;
        s=guess;
      }
    }
    if(guess==ran)
    {
      Serial.println("Congrats you won");
      int Time=0;
      digitalWrite(led5, LOW);
      delay(100);
      digitalWrite(led4, LOW);
      delay(100);
      digitalWrite(led3, LOW);
      delay(100);
      digitalWrite(led2, LOW);
      delay(100);
      digitalWrite(led1, LOW);
      while(Time<5000)
      {
        tone(7,200,50);
        delay(50);
        digitalWrite(led5, HIGH);
        tone(7,250,50);
        delay(50);
        digitalWrite(led4, HIGH);
        tone(7,150,50);
        delay(50);
        digitalWrite(led3, HIGH);
        tone(7,180,50);
        delay(50);
        digitalWrite(led2, HIGH);
        tone(7,100,50);
        delay(50);
        digitalWrite(led1, HIGH);
        tone(7,80,50);
        tone(7,200,50);
        delay(100);
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        tone(7,140,50);
        tone(7,220,50);
        delay(100);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, HIGH);
        tone(7,180,50);
        delay(50);
        digitalWrite(led1, HIGH);
        tone(7,250,50);
        delay(50);
        digitalWrite(led2, HIGH);
        tone(7,190,50);
        delay(50);
        digitalWrite(led3, HIGH);
        tone(7,120,50);
        delay(50);
        digitalWrite(led4, HIGH);
        tone(7,30,50);
        delay(50);
        digitalWrite(led5, HIGH);
        tone(7,180,50);
        tone(7,160,50);
        delay(100);
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        Time=Time+800;
        }
    }
    else
    {
      Serial.println("You lost");
      for(int i=1; i<101; i++)
      {
        tone(7, (833*i+4)%i, 50);
        delay(50);
      }
    }
  }
}
