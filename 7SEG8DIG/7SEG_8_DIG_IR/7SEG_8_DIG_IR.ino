#include <IRremote.hpp>
#define IRPin A3
#define SEGMENTS 7
#define DIGITS 8
#define STRINGS 38
byte digitPins[] = {9,10,11,12,13,A0,A1,A2};
byte segmentPins[] = {2,3,4,5,6,7,8};
byte Display[38][7] = {
  {1,1,1,1,1,1,0}, //00
  {0,1,1,0,0,0,0}, //01
  {1,1,0,1,1,0,1}, //02
  {1,1,1,1,0,0,1}, //03
  {0,1,1,0,0,1,1}, //04
  {1,0,1,1,0,1,1}, //05
  {1,0,1,1,1,1,1}, //06
  {1,1,1,0,0,0,0}, //07
  {1,1,1,1,1,1,1}, //08
  {1,1,1,1,0,1,1}, //09
  {1,1,1,0,1,1,1}, //A
  {0,0,1,1,1,1,1}, //b
  {1,0,0,1,1,1,0}, //C
  {0,1,1,1,1,0,1}, //d
  {1,0,0,1,1,1,1}, //E
  {1,0,0,0,1,1,1}, //F
  {1,1,1,1,0,1,1}, //g
  {0,0,1,0,1,1,1}, //h
  {0,0,0,0,1,1,0}, //I
  {0,1,1,1,1,0,0}, //J
  {0,1,0,1,1,1,1}, //K
  {0,0,0,1,1,1,0}, //L
  {1,1,1,0,1,1,0}, //M
  {0,0,1,0,1,0,1}, //n
  {1,1,1,1,1,1,0}, //O
  {1,1,0,0,1,1,1}, //P
  {1,1,1,0,0,1,1}, //q
  {1,0,0,0,1,1,0}, //r
  {1,0,1,1,0,1,1}, //S
  {0,0,0,1,1,1,1}, //t
  {0,0,1,1,1,0,0}, //u
  {0,1,1,1,1,1,0}, //V
  {1,0,1,1,1,0,0}, //W
  {0,1,1,0,1,1,1}, //X
  {0,1,1,1,0,1,1}, //y
  {1,1,0,1,1,0,1}, //Z
  {0,0,0,0,0,0,1}, //-
  {0,0,0,0,0,0,0}, //LOW
};

unsigned long dir = 0xE619BF40; //avançar
unsigned long esq = 0xE21DBF40; //recuar

unsigned long codes[] = 
//  00           01          02          03          04          05          06          07          08          09
{0xFF00BF40, 0xFE01BF40, 0xFD02BF40, 0xFC03BF40, 0xFB04BF40, 0xFA05BF40, 0xF906BF40, 0xF807BF40, 0xF708BF40, 0xF609BF40,
//  A           B           C           D           E           F           G           H            I
0x25DABF40, 0xEC13BF40, 0x2CD3BF40, 0xE31CBF40, 0x7F80BF40, 0x26D9BF40, 0xA758BF40, 0xB748BF40, 0xB649BF40, 
//  J           K           L           M           N           O           P           Q            R
0xB54ABF40, 0xB44BBF40, 0xB34CBF40, 0xD22DBF40, 0xAB54BF40, 0xEA15BF40, 0x926DBF40, 0xDE21BF40, 0x916EBF40, 
//  S           T           U           V           W           X           Y           Z           -
0xDF20BF40, 0xDD22BF40, 0xCB34BF40, 0xCF30BF40, 0xCC33BF40, 0xC837BF40, 0xCE31BF40, 0xC936BF40, 0xF50ABF40,
// LOW
0xED12BF40};

int digitPos = 0;
int digitValues[] = {37,37,37,37,37,37,37,37};

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IRPin);

  for(int j = 0; j < SEGMENTS; j++) {
    pinMode(segmentPins[j], OUTPUT);
    digitalWrite(segmentPins[j], Display[37][j]);
  }
  for(int j = 0; j < DIGITS; j++) {
    pinMode(digitPins[j], OUTPUT);
    digitalWrite(digitPins[j], HIGH);
  }
}

void loop() {
  

    controlDisplay(IRval);
  }
  multiplexDisplay();
}

void controlDisplay(unsigned long IRval) {
  if((IRval == dir)&&(digitPos < 7)) {
    digitPos++;
  }else if((IRval == esq)&&(digitPos > 0)) {
    digitPos--;
  }else{
    int str = codeDigit(IRval);
    if(str != -1) {
      digitValues[digitPos] = str;
    }
  }
}

int codeDigit(unsigned long IRval) {
  for(int j = 0; j < STRINGS; j++) {
    if(IRval == codes[j]) {
      return j;
    }
  }
  return -1;
}

void multiplexDisplay() {
  for(int j = 0; j < DIGITS; j++) {
    strDisplay(j, digitValues[j]);
    delay(5);
    digitalWrite(digitPins[j], HIGH);
  }
}

void strDisplay(int digit, int str) {
  for(int j = 0; j < DIGITS; j++) {
    digitalWrite(digitPins[j], HIGH);
  }
  for(int j = 0; j < SEGMENTS; j++) {
    digitalWrite(segmentPins[j], Display[str][j]);
  }
  digitalWrite(digitPins[digit], LOW);
}