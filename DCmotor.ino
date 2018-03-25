#define motorA1 D0
#define motorA2 D1
#define motorB1 D2
#define motorB2 D3

void setup()
{
  pinMode(motorA1,OUTPUT);
  pinMode(motorA2,OUTPUT);
  pinMode(motorB1,OUTPUT);
  pinMode(motorB2,OUTPUT);
}

void loop()
{
  digitalWrite(motorA1,1);
  //digitalWrite(motorA2,1);
  //digitalWrite(motorB1,1);
  digitalWrite(motorB2,1);
}

