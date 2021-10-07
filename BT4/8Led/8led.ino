#define _clock 7
#define _latch 6
#define _data 5
void setup() {
  // put your setup code here, to run once:
  pinMode(_latch, OUTPUT);
  pinMode(_clock, OUTPUT);
  pinMode(_data, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0;i<256;i++){
    digitalWrite(_latch, LOW);
    shiftOut(_data, _clock, LSBFIRST, i);
    digitalWrite(_latch, HIGH);
    delay(500);
  }
}
