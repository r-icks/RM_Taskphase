int ACW=LOW; //anticlockwise
int CW=HIGH; //clockwise

// setting constant speed for the bot
int robspeed=255;

//pin Numbers
int leftdir=2;
int leftspeed=3;
int rightdir=4;
int rightspeed=5;
int frontdir=6;
int frontspeed=7;
int backdir=8;
int backspeed=9;

//horizontal and verticle speeds
int speedverticle;
int speedhorizontal;

//degree input by user
int degree; //at what degree the bot has to move

void setup() {
 pinMode(leftdir, OUTPUT);
 pinMode(leftspeed, OUTPUT);
 pinMode(rightdir, OUTPUT);
 pinMode(rightspeed, OUTPUT);
 pinMode(frontdir, OUTPUT);
 pinMode(frontspeed, OUTPUT);
 pinMode(backdir, OUTPUT);
 pinMode(backspeed, OUTPUT);
 Serial.begin(9600); 
}

void loop() {
  Serial.println("Enter a number between 0-360");
  if(Serial.available())
  {
    int degree=Serial.parseInt();
  }
  if(degree<0||degree>360)
  {
    Serial.println("Enter correct input");
    return;
  }
 digitalWrite(leftdir,ACW);
 digitalWrite(rightdir, CW);
 digitalWrite(frontdir, ACW);
 digitalWrite(backdir, CW);
 int speedverticle=sin(degree)*robspeed;
 int speedhorizontal=cos(degree)*robspeed;


 //if cos/sin value turns out to be negative, changing the direction of wheels and making speed value positive
 if(speedverticle<0)
 {
  speedverticle*=-1;
  digitalWrite(leftdir, CW);
  digitalWrite(rightdir, ACW);
 }
  if(speedhorizontal<0)
 {
  speedhorizontal*=-1;
  digitalWrite(frontdir, CW);
  digitalWrite(backdir, ACW);
 }

 //giving speed input to the wheels
 analogWrite(frontspeed, speedhorizontal);analogWrite(backspeed, speedhorizontal);
 analogWrite(leftspeed, speedverticle);analogWrite(backspeed, speedverticle);
}
