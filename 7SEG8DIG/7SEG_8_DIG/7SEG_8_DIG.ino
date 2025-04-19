#include "SevSeg.h"
SevSeg sevseg;

#define MAX_NUMBER_STRINGS 3
#define MAX_STRING_SIZE 8
#define PATTERN_CHANGE_TIME 3000
char testStrings[MAX_NUMBER_STRINGS][MAX_STRING_SIZE];
unsigned long timer = millis() - PATTERN_CHANGE_TIME;
byte testStringsPos = 0;

int timeA = 0;
int timeB = 0;

int tmax = 2000;

void setup() {
  byte numDigits = 8;
  byte digitPins[] = { 9, 10, 11, 12, 13, 22, 23, 24 };
  byte segmentPins[] = { 2, 3, 4, 5, 6, 7, 8 };


  bool leadingZeros = false;
  bool resistorsOnSegments = true;
  bool updateWithDelaysIn = true;
  byte hardwareConfig = COMMON_CATHODE;
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);

  
  strcpy(testStrings[0], "cetepi-i");
  strcpy(testStrings[1], " fetec  ");
  strcpy(testStrings[2], "2*E 2023");  
  

  pinMode(25, INPUT);  //Button is an input
  pinMode(26, INPUT);  //Button is an input
  pinMode(27, INPUT);  //Button is an input
}

void loop() {


 if (millis() > (timer + PATTERN_CHANGE_TIME)) {
    sevseg.setChars(testStrings[testStringsPos]);
    testStringsPos++;
    if (testStringsPos >= MAX_NUMBER_STRINGS) testStringsPos = 0;
    timer = millis();
 }

     sevseg.setChars("00 -- 00");
     sevseg.refreshDisplay();
    

     sevseg.setChars("02 -- 01");
     sevseg.refreshDisplay();


  sevseg.setChars("cetepi-1");
  sevseg.refreshDisplay();
  




}
