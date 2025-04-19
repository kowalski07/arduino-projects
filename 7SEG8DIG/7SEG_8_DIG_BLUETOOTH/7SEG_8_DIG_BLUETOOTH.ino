#include "SoftwareSerial.h"

#define STRINGS 38
#define DIGITS 8
#define SEGMENTS 7
byte digitPins[] = { 9, 10, 11, 12, 13, A0, A1, A2 };
byte segmentPins[] = { 2, 3, 4, 5, 6, 7, 8 };
byte Display[39][7] = {
  { 1, 1, 1, 1, 1, 1, 0 },  // 0
  { 0, 1, 1, 0, 0, 0, 0 },  // 1
  { 1, 1, 0, 1, 1, 0, 1 },  // 2
  { 1, 1, 1, 1, 0, 0, 1 },  // 3
  { 0, 1, 1, 0, 0, 1, 1 },  // 4
  { 1, 0, 1, 1, 0, 1, 1 },  // 5
  { 1, 0, 1, 1, 1, 1, 1 },  // 6
  { 1, 1, 1, 0, 0, 0, 0 },  // 7
  { 1, 1, 1, 1, 1, 1, 1 },  // 8
  { 1, 1, 1, 1, 0, 1, 1 },  // 9
  { 1, 1, 1, 0, 1, 1, 1 },  // A 10
  { 0, 0, 1, 1, 1, 1, 1 },  // b 11
  { 1, 0, 0, 1, 1, 1, 0 },  // C 12
  { 0, 1, 1, 1, 1, 0, 1 },  // d 13
  { 1, 0, 0, 1, 1, 1, 1 },  // E 14
  { 1, 0, 0, 0, 1, 1, 1 },  // F 15
  { 1, 1, 1, 1, 0, 1, 1 },  // g 16
  { 0, 1, 1, 0, 1, 1, 1 },  // h 17
  { 0, 0, 0, 0, 1, 1, 0 },  // I 18
  { 0, 1, 1, 1, 1, 0, 0 },  // J 19
  { 0, 1, 0, 1, 1, 1, 1 },  // K 20
  { 0, 0, 0, 1, 1, 1, 0 },  // L 21
  { 1, 1, 1, 0, 1, 1, 0 },  // M 22
  { 0, 0, 1, 0, 1, 0, 1 },  // n 23
  { 1, 1, 1, 1, 1, 1, 0 },  // O 24
  { 1, 1, 0, 0, 1, 1, 1 },  // P 25
  { 1, 1, 1, 0, 0, 1, 1 },  // Q 26
  { 0, 0, 0, 0, 1, 0, 1 },  // r 27
  { 1, 0, 1, 1, 0, 1, 1 },  // S 28
  { 0, 0, 0, 1, 1, 1, 1 },  // t 29
  { 0, 0, 1, 1, 1, 0, 0 },  // u 30
  { 0, 1, 1, 1, 1, 1, 0 },  // V 31
  { 1, 0, 1, 1, 1, 0, 0 },  // W 32
  { 0, 1, 1, 0, 1, 1, 1 },  // X 33
  { 0, 1, 1, 1, 0, 1, 1 },  // y 34
  { 1, 1, 0, 1, 1, 0, 1 },  // Z 35
  { 0, 0, 0, 0, 0, 0, 1 },  // - 36
  { 1, 1, 0, 0, 0, 1, 1 },  // º 37
  { 0, 0, 0, 0, 0, 0, 0 },  // LOW 38
};

char dir = 'R';    // avançar
char esq = 'L';    // recuar
char cima = 'F';   // aumentar escolha
char baixo = 'B';  // diminuir escolha

int digitPos = 0;
int digitValues[] = { 12, 14, 29, 14, 25, 18, 37, 1 };
int str = 0;

char recebido = 0;

SoftwareSerial bluetooth(17, 18);  // TX, RX (Bluetooth)

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);

  for (int j = 0; j < SEGMENTS; j++) {
    pinMode(segmentPins[j], OUTPUT);
    digitalWrite(segmentPins[j], Display[38][j]);
  }
  for (int j = 0; j < DIGITS; j++) {
    pinMode(digitPins[j], OUTPUT);
    digitalWrite(digitPins[j], HIGH);
  }
}

void loop() {
  if ((bluetooth.available() && bluetooth.read() != 'S')) {
    recebido = bluetooth.read();
    Serial.println(recebido);
    Serial.println(digitPos);

    //delay(530);
    controlDisplay(recebido);
  }
  multiplexDisplay();
}

void controlDisplay(char recebido) {
  if ((recebido == dir) && (digitPos < 7)) {
    digitPos++;
  }

  if ((recebido == esq) && (digitPos > 0)) {
    digitPos--;
  }

  if ((recebido == cima) && (str < 39)) {
    str++;
    digitValues[digitPos] = str;
  }

  if ((recebido == baixo) && (str > 0)) {
    str--;
    digitValues[digitPos] = str;
  }
}

void multiplexDisplay() {
  for (int j = 0; j < DIGITS; j++) {
    strDisplay(j, digitValues[j]);
    delay(2);
    digitalWrite(digitPins[j], HIGH);
  }
}

void strDisplay(int digit, int str) {
  for (int j = 0; j < DIGITS; j++) {
    digitalWrite(digitPins[j], HIGH);
  }
  for (int j = 0; j < SEGMENTS; j++) {
    digitalWrite(segmentPins[j], Display[str][j]);
  }
  digitalWrite(digitPins[digit], LOW);
}
