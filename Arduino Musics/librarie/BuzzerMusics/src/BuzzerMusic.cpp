
#include "BuzzerMusic.h"

// MUSICS //
#include "musics/rule.h"
#include "musics/bad_apple.h"
#include "musics/order.h"
#include "musics/never_be_alone.h"
#include "musics/basics_in_behavior.h"
///////////////////////////////////

BuzzerMusic::BuzzerMusic(int pin){
  _pin = pin;
  pinMode(_pin, OUTPUT);
}

void BuzzerMusic::setIRCodes(const uint32_t* codes, int sizeCode) {
  _codes = codes;
  _sizeCode = sizeCode;
}

void BuzzerMusic::toneESP32(int frequency, int duration) {
  int period = 1000000 / frequency;
  int pulse = period / 2;
  long cicles = (long)frequency * duration / 1000;
  for(long i = 0; i < cicles; i++) {
    digitalWrite(_pin, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(_pin, LOW);
    delayMicroseconds(pulse);
  }
}

void BuzzerMusic::noToneESP32() {
  digitalWrite(_pin, LOW);
}

void BuzzerMusic::M(int note, int duration) {
  duration = duration / bpm * 60.0;
  toneESP32(note, duration);
  delay(tmp);
  noToneESP32();
}

void BuzzerMusic::P(int pause_duration) {
  noToneESP32();
  delay(pause_duration / bpm * 60.0);
}

void BuzzerMusic::T(int n1, int n2, int n3, int duration) {
  float tercina = (duration / bpm * 60.0) * 2.0 / 3.0;
  toneESP32(n1, tercina); delay(tmp); noToneESP32();
  toneESP32(n2, tercina); delay(tmp); noToneESP32();
  toneESP32(n3, tercina); delay(tmp); noToneESP32();
}

int BuzzerMusic::code(uint32_t IRvalue) {
  for(int i = 0; i < _sizeCode; i++) {
    if(IRvalue == _codes[i]) return i;
  }
  return -1;
}

void BuzzerMusic::play(uint32_t IRcode) {
  int index = code(IRcode);
  if(index != -1) {
    playMusic(index);
  }
}

void BuzzerMusic::playMusic(int index) {
  switch(index + 1) {
    case 1: RULE(*this); break;
    case 2: BAD_APPLE(*this); break;
    case 3: ORDER(*this); break;
    case 4: NEVER_BE_ALONE(*this); break;
    case 5: BASICS_IN_BEHAVIOR(*this); break;
  }
  index = -1;
}
