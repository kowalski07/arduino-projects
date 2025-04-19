#define SEGMENTS 7
#define DIGITS 8
#define STRINGS 38
byte segmentPins[] = {2,3,4,5,6,7,8};
byte digitPins[] = {9,10,11,12,13,A2,A1,A0};
byte Display[38][7] = {
//{a,b,c,d,e,f,g}
  {1,1,1,1,1,1,0}, // 00
  {0,1,1,0,0,0,0}, // 01
  {1,1,0,1,1,0,1}, // 02
  {1,1,1,1,0,0,1}, // 03
  {0,1,1,0,0,1,1}, // 04
  {1,0,1,1,0,1,1}, // 05
  {1,0,1,1,1,1,1}, // 06
  {1,1,1,0,0,0,0}, // 07
  {1,1,1,1,1,1,1}, // 08
  {1,1,1,1,0,1,1}, // 09
  {1,1,1,0,1,1,1}, // A
  {0,0,1,1,1,1,1}, // b
  {1,0,0,1,1,1,0}, // C
  {0,1,1,1,1,0,1}, // d
  {1,0,0,1,1,1,1}, // E
  {1,0,0,0,1,1,1}, // F
  {1,1,1,1,0,1,1}, // g
  {0,0,1,0,1,1,1}, // h
  {0,0,0,0,1,1,0}, // I
  {0,1,1,1,1,0,0}, // J
  {0,1,0,1,1,1,1}, // K
  {0,0,0,1,1,1,0}, // L
  {1,1,1,0,1,1,0}, // M
  {0,0,1,0,1,0,1}, // n
  {1,1,1,1,1,1,0}, // O
  {1,1,0,0,1,1,1}, // P
  {1,1,1,0,0,1,1}, // q
  {1,0,0,0,1,1,0}, // r
  {1,0,1,1,0,1,1}, // S
  {0,0,0,1,1,1,1}, // t
  {0,0,1,1,1,0,0}, // u
  {0,1,1,1,1,1,0}, // v
  {1,0,1,1,1,0,0}, // W
  {0,1,1,0,1,1,1}, // X
  {0,1,1,1,0,1,1}, // y
  {1,1,0,1,1,0,1}, // Z
  {0,0,0,0,0,0,1}, // -
  {0,0,0,0,0,0,0}, // LOW
};

char dir = '>';
char esq = '<';

char serialCode[] = 
{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '-', 
'~'};

String comand;
byte words = 0;
char serialVal;
int digitPos = 0;
byte digitValues[] = {37,37,37,37,37,37,37,37};
byte Ivalues[8];
byte IIvalues[8];

void setup() {
  Serial.begin(9600);

  for(int j = 0; j < SEGMENTS; j++) {
    pinMode(segmentPins[j], OUTPUT);
    digitalWrite(segmentPins[j], Display[37][j]);
  }
  for(int j = 0; j < DIGITS; j++) {
    pinMode(digitPins[j], OUTPUT);
    digitalWrite(digitPins[j], HIGH);
    Serial.print(digitValues[j]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {
  if(Serial.available()>0) {
    serialVal = Serial.read(); 
    comand = Serial.read();

    controlDisplay(serialVal);

    if(comand = "p0") {
      for(int j = 0; j < DIGITS; j++) {
        Serial.print(digitValues[j]);
        Serial.print(" ");
      }
      Serial.println();
    }
    
    if((comand = "wpp")&&(words <=2)) {
      words++;
      Serial.println(words);
    }
    
    if((comand = "save")&&(words == 1)) {
      Serial.print("I - ");
      for(int j = 0; j < DIGITS; j++) {
        Ivalues[j] = digitValues[j];
        Serial.print(Ivalues[j]);
        Serial.print(" ");
      }
      Serial.println();
    }
    
    if((comand = "save")&&(words == 2)) {
      Serial.print("II - ");
      for(int j = 0; j < DIGITS; j++) {
        IIvalues[j] = digitValues[j];
        Serial.print(IIvalues[j]);
        Serial.print(" ");
      }
      Serial.println();
    }
  }
  multiplexDisplay();
}

void controlDisplay(char serialVal) {
  if((serialVal == '>')&&(digitPos < 7)) {
    digitPos++;
  }else if((serialVal == '<')&&(digitPos > 0)) {
    digitPos--;
  }else{
    int str = codeDisplay(serialVal);
    if(str != -1) {
      digitValues[digitPos] = str;
    }
  }
}

int codeDisplay(char serialVal) {
  for(int j = 0; j < STRINGS; j++) {
    if(serialVal == serialCode[j]) {
      return j;
    }
  }
  return -1;
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

void multiplexDisplay() {
  for(int j = 0; j < DIGITS; j++) {
    strDisplay(j, digitValues[j]);
    delay(5);
    digitalWrite(digitPins[j], HIGH);
  }
}