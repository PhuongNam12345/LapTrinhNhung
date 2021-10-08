#define _data_cot 3
#define _data_hang 2

#define _clock_hang 6
#define _clock_cot 5

#define _latch 4
byte chu[][8] = {
  {0x3C,0x66,0x66,0x0C,0x18,0x30,0x7E,0x7E},//2

};
byte cot = 0b10000000;
void setup() {
  Serial.begin(9600);
  pinMode(_latch,OUTPUT);//RCLK
  
  pinMode(_data_hang,OUTPUT);//SER hang
  pinMode(_clock_hang,OUTPUT);//SRCLK hang

  pinMode(_clock_cot,OUTPUT);//SRCLK cot
  pinMode(_data_cot,OUTPUT);//SER cot

}
void loop() {
  for(int i = 0;i<10;i++){
  digitalWrite(_latch,LOW);
  shiftOut(_data_hang,_clock_hang,LSBFIRST,cot >> i);// hang 8 - hang 1
  shiftOut(_data_cot,_clock_cot,LSBFIRST,chu[0][i]);// cot 8 - cot 1
  digitalWrite(_latch,HIGH);
  delay(100);
 }
}
