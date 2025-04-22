#ifndef BUZZERMUSIC_H
#define BUZZERMUSIC_H

#include <Arduino.h>
#include "SoundConstants.h"

class BuzzerMusic {
public:
  BuzzerMusic(int pin = 25);
  void setIRCodes(const uint32_t* codes, int sizeCode);
  void play(uint32_t IRcode);
  float bpm;

  void M(int note, int duration);
  void P(int pause_duration);
  void T(int n1, int n2, int n3, int duration);

private:
  int _pin;
  int tmp = 5;
  const uint32_t* _codes;
  int _sizeCode;

  void toneESP32(int frequency, int duracion);
  void noToneESP32();
  int code(uint32_t IRvalue);
  void playMusic(int index);
};

#endif // BUZZERMUSIC_H
