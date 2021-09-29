

void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(13, OUTPUT);
  
}

void loop()
{
  Serial.print(digitalRead(2));
  if(digitalRead(2)==1)
  {
  digitalWrite(13,HIGH);
   
  }
  if(digitalRead(2)==0)
  {
    digitalWrite(13, LOW);
  }
  
}
