void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  digitalWrite(A0,LOW);
  pinMode(A1,INPUT);
  digitalWrite(A1,HIGH);
  pinMode(A2,INPUT);
  digitalWrite(A2,HIGH);
}

void loop() 
{
  if (digitalRead(A0)== LOW)
  {
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(9,LOW);
  delay(500);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  delay(500);
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  delay(500);
  }
  else (digitalRead(A1)== HIGH);
}
