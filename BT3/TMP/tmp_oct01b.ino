void setup()
{
  Serial.begin(9600);
  pinMode(7,1);
  pinMode(3,1);
  digitalWrite(7,1);
  digitalWrite(3,0);
  digitalWrite(10,1);
  digitalWrite(11,0);
  pinMode(11,1);
}

void loop()
{
  Serial.println(analogRead(A3));
  if(analogRead(A3)>181){digitalWrite(10,0);};
  if(analogRead(A3)<181){digitalWrite(10,1);};
}
