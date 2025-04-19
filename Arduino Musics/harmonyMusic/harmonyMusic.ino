#include "nt_music.h"
#include <Tone.h>

#define soprano 8
#define contralto 9

#define btn 2

Tone spn;
Tone ctr;

float bpm;
#define tmp 100

void setup() {
  spn.begin(soprano);
  ctr.begin(contralto);

  pinMode(btn, INPUT_PULLUP);
}

void n(int spn_nota, int ctr_nota, float tempo) {
  spn.play(spn_nota);
  ctr.play(ctr_nota);
  delay(tempo / bpm * 60.0);
  spn.stop();
  ctr.stop();
}

void loop() {
  if(digitalRead(btn) == LOW) {
    HINO_290();
  }
}

void HINO_290() {
  bpm = 92;
  //01
  n(e4b, c4, sm);
  n(e4b, c4, sm);
  n(c4, a3b, cp);
  n(d4b, b3b, sc);
  n(e4b, c4, sm);
  //02
  n(f4, d4b, sm);
  n(d5b, f4, sm);
  n(c5, e4b, cp);
  n(b4b, d4b, sc);
  n(a4b, c4, sm);
  //03
  n(b4b, e4b, sm);
  n(c5, e4b, sm);
  n(b4b, e4b, cp);
  n(g4, e4b, sc);
  n(e4b, e4b, sm);
  //04
  n(f4, d4, sm);
  n(f4, d4, c);
  n(g4, d4, c);
  n(e4b, b3b, m);

  //05
  n(e4b, c4, sm);
  n(e4b, c4, sm);
  n(c4, a3b, cp);
  n(d4b, b3b, sc);
  n(e4b, c4, sm);
  //06
  n(f4, d4b, sm);
  n(d5b, f4, sm);
  n(c5, e4b, cp);
  n(b4b, d4b, sc);
  n(a4b, c4, sm);
  //07
  n(c5, e4b, sm);
  n(e5b, e4b, sm);
  n(a4b, c4, cp);
  n(g4, c4, sc);
  n(a4b, f4, c);
  n(b4b, f4, c);
  //08
  n(c5, a4b, sm);
  n(b4b, g4, sm);
  n(a4b, e4b, m);

  //09 Coro
  n(c5, e4b, sm);
  n(a4b, c4, sm);
  n(c5, e4b, sm);
  n(a4b, c4, sm);
  //10
  n(b4b, d4b, cp);
  n(a4, c4, sc);
  n(b4b, d4b, cp);
  n(d5b, f4, sc);
  n(c5, e4b, sm);
  n(a4b, e4b, sm);
  //11
  n(c5, e4, sm);
  n(g4, c4, sm);
  n(a4b, f4, sm);
  n(f4, c4, sm);
  //12
  n(b4b, f4, cp);
  n(a4b, f4, sc);
  n(g4, e4b, cp);
  n(f4, d4, sc);
  n(e4b, e4b, m);

  //13
  n(c5, e4b, sm);
  n(a4b, c4, sm);
  n(c5, e4b, sm);
  n(a4b, c4, sm);
  //14
  n(b4b, d4b, cp);
  n(a4, c4, sc);
  n(b4b, d4b, cp);
  n(d5b, f4, sc);
  n(c5, e4b, sm);
  n(a4b, c4, sm);
  //15
  n(c5, e4b, sm);
  n(e5b, e4b, sm);
  n(a4b, c4, cp);
  n(g4, c4, sc);
  n(a4b, f4, c);
  n(b4b, f4, c);
  //16
  n(c5, a4b, sm);
  n(b4b, g4, sm);
  n(a4b, e4b, m);
}
