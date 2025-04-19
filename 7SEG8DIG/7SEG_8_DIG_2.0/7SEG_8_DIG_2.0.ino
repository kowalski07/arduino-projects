#define SEGMENTS 7
#define DIGITS 8
#define LETTERS 24
char in;
byte segmentPins[] = {2,3,4,5,6,7,8};
byte digitPins[] = {9,10,11,12,13,A2,A1,A0};
byte numDisplay[11][7] = {
//{a,b,c,d,e,f,g}
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
  {0,0,0,0,0,0,0}, //LOW
};

byte letterDisplay[27][7] = {
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
  {0,1,1,1,1,1,0}, //v
  {1,0,1,1,1,0,0}, //W
  {0,1,1,0,1,1,1}, //X
  {0,1,1,1,0,1,1}, //y
  {1,1,0,1,1,0,1}, //Z
  {0,0,0,0,0,0,0}, //LOW
};

int digitPos=0;
byte digitVNum[] = {10,10,10,10,10,10,10,10};
byte digitVLetter[] = {24,24,24,24,24,24,24,24};

void setup() {
  Serial.begin(9600);

  for(int j=0;j<SEGMENTS;j++) {
    pinMode(segmentPins[j],OUTPUT);
    digitalWrite(segmentPins[j],numDisplay[10][j]);
  }
  for(int j=0;j<DIGITS;j++) {
    pinMode(digitPins[j],OUTPUT);
    digitalWrite(digitPins[j],HIGH);
  }
}

void digitNum(int digit, int num) {
  for(int j=0;j<DIGITS;j++) {
    digitalWrite(digitPins[j],HIGH);
  }
  for(int j=0;j<SEGMENTS;j++) {
    digitalWrite(segmentPins[j],numDisplay[num][j]);
  }
  digitalWrite(digitPins[digit],LOW);
}

void digitLetter(int digit, int letter) {
  for(int j=0;j<DIGITS;j++) {
    digitalWrite(digitPins[j],HIGH);
  }
  for(int j=0;j<SEGMENTS;j++) {
    digitalWrite(segmentPins[j],letterDisplay[letter][j]);
  }
  digitalWrite(digitPins[digit],LOW);
}

void loop() {
  if(Serial.available()>0) {
    in=Serial.read(); 

    if((in>='0')&&(in<='9')) {
      int num=in-'0';
      digitVNum[digitPos]=num;
    }else if((in>='A')&&(in<='Z')) {
      int letter=in-'A';
      digitVLetter[digitPos]=letter;
      
    }else if((in=='>')&&(digitPos<7)) {
      digitPos++;
    }else if((in=='<')&&(digitPos>0)) {
      digitPos--;
    }else if(in=='!') {
      digitVNum[digitPos]=10;
      digitVLetter[digitPos]=26;
    }
  }
  for(int j=0;j<DIGITS;j++) {
    digitNum(j,digitVNum[j]);
    delay(2);
    digitalWrite(digitPins[j],HIGH);
  }
}