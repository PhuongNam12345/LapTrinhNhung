const int R = 3;
const int G = 5;
const int B = 6;
int Red = 255;
int Green = 0;
int Blue = 0;

void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  analogWrite(R, Red);
  analogWrite(G, Green);
  analogWrite(B, Blue);
}

void loop() {
  for (Blue = 0; Blue<255; Blue = Blue + 5)  {
    analogWrite(B, Blue);
    delay(10);
  }
  for (Red = 255; Red>0; Red = Red - 5)  {
    analogWrite(R, Red);
    delay(1000);
  }
  for (Green = 0; Green<255; Green = Green + 5)  {
    analogWrite(G, Green);
    delay(10);
  }
  for (Blue = 255; Blue>0; Blue = Blue - 5)  {
    analogWrite(B, Blue);
    delay(1000);
  }
   for (Red = 0; Red<255; Red = Red + 5)  {
    analogWrite(R, Red);
    delay(10);
  }
  for (Green = 255; Green>0; Green = Green - 5)  {
    analogWrite(G, Green);
    delay(1000);
  }
   }
