#include "nt_music_v2.5.h"
#include <Tone.h>

#define BUZZER 12
Tone buzzer;

#define S1 2  // rule_btn
#define S2 3  // bad_apple_btn
#define S3 4  // order_btn
#define S4 5  // never_be_alone_btn
#define S5 6  // basics_in_behavior_btn
#define S6 7  // epoch_btn
#define S7 8  // careless_whisper_btn
#define S8 9  // fallen_down_btn

#define B1 10
#define B2 11
Tone spn;
Tone ctr;

#define tmp 10

float bpm;

void setup() {
  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
  pinMode(S3, INPUT_PULLUP);
  pinMode(S4, INPUT_PULLUP);
  pinMode(S5, INPUT_PULLUP);
  pinMode(S6, INPUT_PULLUP);
  pinMode(S7, INPUT_PULLUP);
  pinMode(S8, INPUT_PULLUP);
}

void n(int nota, int tempo) {
  buzzer.play(nota);
  delay(tempo / bpm * 60.0);
  buzzer.stop();
  delay(tmp);
}

void nh(int spn_nota, int ctr_nota, int tempo) {
  spn.play(spn_nota);
  ctr.play(ctr_nota);
  delay(tempo / bpm * 60.0);
  spn.stop();
  ctr.stop();
  delay(tmp);
}

void p(int tempo_pausa) {
  buzzer.stop();
  delay(tempo_pausa / bpm * 60.0);
}

void t(int n1, int n2, int n3, int tempo) {
  buzzer.play(n1);
  delay((tempo / bpm * 60.0) * 2 / 3);
  buzzer.stop();
  buzzer.play(n2);
  delay((tempo / bpm * 60.0) * 2 / 3);
  buzzer.stop();
  buzzer.play(n3);
  delay((tempo / bpm * 60.0) * 2 / 3);
  buzzer.stop();
  delay(tmp);
}

void loop() {
  if (digitalRead(S1) == LOW) {
    buzzer.begin(BUZZER);
    RULE();
  }
  if (digitalRead(S2) == LOW) {
    buzzer.begin(BUZZER);
    BAD_APPLE();
  }
  if (digitalRead(S3) == LOW) {
    buzzer.begin(BUZZER);
    ORDER();
  }
  if (digitalRead(S4) == LOW) {
    buzzer.begin(BUZZER);
    NEVER_BE_ALONE();
  }
  if (digitalRead(S5) == LOW) {
    buzzer.begin(BUZZER);
    BASICS_IN_BEHAVIOR();
  }
  if (digitalRead(S6) == LOW) {
    buzzer.begin(BUZZER);
    EPOCH();
  }
  if (digitalRead(S7) == LOW) {
    buzzer.begin(BUZZER);
    CARELESS_WHISPER();
  }
  if (digitalRead(S8) == LOW) {
    spn.begin(B1);
    ctr.begin(B2);
    FALLEN_DOWN();
  }
}

// MÚSICAS

void RULE() {
  bpm = 130;

  //01
  n(b4, c);
  n(a4b, c);
  n(b4, c);
  n(a4b, c);
  n(b4, c);
  n(a4b, c);
  n(e5b, c);
  n(d5, (c + c));
  //02
  n(b4, c);
  n(d5, c);
  n(e5b, c);
  n(d5b, c);
  n(b4b, c);
  n(b4, c);
  t(b4b, b4b, b4b, sc);
  //03
  n(b4, c);
  n(a4b, c);
  n(b4, c);
  n(a4b, c);
  n(b4, c);
  n(a4b, c);
  n(e5b, c);
  n(d5, (c + c));
  //04
  n(d5, c);
  n(d5, c);
  n(d5, c);
  n(d5b, sm);
  p(sm);

  //05
  n(b4, sm);
  n(a4b, sm);
  n(g4b, c);
  n(a4b, sm);
  n(d5, (c + c));
  //06
  n(d5, c);
  n(d5, c);
  n(d5, c);
  n(d5b, sm);
  p(c);
  n(a4b, c);
  //07
  n(b4, sm);
  n(a4b, sm);
  n(g4b, c);
  n(a4b, sm);
  n(d4, (c + c));
  //08
  n(d4, c);
  n(d4, c);
  n(d4, c);
  n(d4b, sm);
  p(c);
  n(a4b, c);
  //09
  n(b4, sm);
  n(a4b, sm);
  n(g4b, c);
  n(a4b, sm);
  n(d5, (c + c));
  //10
  n(d5, c);
  n(d5, c);
  n(d5, c);
  n(d5b, sm);
  p(c);
  n(a4b, c);
  //11
  n(b4, sm);
  n(a4b, sm);
  n(g4b, c);
  n(a4b, sm);
  n(d4, (c + c));
  //12
  n(d4, c);
  n(d4, c);
  n(d4, c);
  n(d4b, c);
  p(sm);

  n(e4b, c);
  //13
  n(b4, c);
  n(a4b, sm);
  n(e4b, c);
  n(b4, c);
  n(a4b, sm);
  n(d4, c);
  //14
  n(e4b, c);
  n(e4b, c);
  n(d4, c);
  n(e4b, c);
  n(b4, c);
  n(a4b, sm);
  n(e4b, c);
  //15
  n(a4b, c);
  n(a4b, c);
  n(g4b, c);
  n(g4b, c);
  n(d4b, c);
  n(b4, c);
  n(d4b, c);
  n(d4b, c);
  //16 legato
  n(b4, mp);
  p(c);
  n(e4b, c);
  //17
  n(b4, c);
  n(a4b, sm);
  n(e4b, c);
  n(b4, c);
  n(a4b, sm);
  n(d4, c);
  //18
  n(e4b, c);
  n(e4b, c);
  n(d4, c);
  n(e4b, c);
  n(b4, c);
  n(a4b, sm);
  n(b4, c);
  //19
  n(d5b, c);
  n(d5b, c);
  n(d5b, c);
  n(d5b, c);
  n(d5b, c);
  n(b4, c);
  n(e5b, c);
  n(d5b, c);
  //20 legato
  n(a4b, mp);
  p(c);
  n(e4b, c);
  //21
  n(b4, c);
  n(a4b, sm);
  n(e4b, c);
  n(b4, c);
  n(a4b, sm);
  n(d4, c);
  //22
  n(e4b, c);
  n(e4b, c);
  n(d4, c);
  n(e4b, c);
  n(b4, c);
  n(a4b, sm);
  n(e4b, c);
  //23
  n(a4b, c);
  n(a4b, c);
  n(g4b, c);
  n(g4b, c);
  n(d4b, c);
  n(b4, c);
  n(d4b, c);
  n(d4b, c);
  //24 legato
  n(b4, mp);
  p(c);
  n(e4b, c);
  //25
  n(b4, c);
  n(a4b, sm);
  n(e4b, c);
  n(b4, c);
  n(a4b, sm);
  n(d4, c);
  //26
  n(e4b, c);
  n(e4b, c);
  n(d4, c);
  n(e4b, c);
  n(b4, c);
  n(a4b, sm);
  n(b4, c);
  //27
  n(d5b, c);
  n(d5b, c);
  n(d5b, c);
  n(d5b, c);
  n(d5b, c);
  n(b4, c);
  n(e5b, c);
  n(d5b, (c + c));
  //28
  n(a4b, sm);
  p(sm);
  p(sc);

  n(a4b, cp);
  n(a4b, c);
  //29
  n(b4, c);
  n(b4b, sc);
  n(b4, c);
  n(b4, c);
  n(b4, sc);
  t(b4, b4, b4b, scp);
  n(b4, c);
  n(b4, sc);
  n(b4, c);
  //30
  n(b4, c);
  n(b4, sc);
  n(b4, c);
  n(d5b, sc);
  n(b4, c);
  n(e5b, sm);
  p(c);
  n(b4b, sc);
  n(b4b, sc);
  //31
  n(b4, cp);
  n(b4, sc);
  n(b4, sc);
  n(b4, sc);
  n(b4, c);
  n(b4, sc);
  n(b4, c);
  n(b4, cp);
  n(a4b, sc);
  n(a4b, sc);
  //32
  t(b4, b4, b4b, scp);
  n(b4, c);
  n(b4, sc);
  n(b4, c);
  n(a4b, sm);
  p(c);
  n(a4b, sc);
  n(a4b, sc);
  //33
  n(b4, sc);
  n(b4, sc);
  n(b4, sc);
  n(b4, sc);
  n(d5b, sc);
  n(b4, c);
  n(b4, sc);
  t(b4, b4, b4, scp);
  n(b4, c);
  n(b4, sc);
  n(b4, sc);
  n(b4, sc);
  //34
  n(b4, sc);
  n(b4, sc);
  n(b4, sc);
  n(b4, sc);
  n(b4, sc);
  n(b4, sc);
  n(b4, c);
  n(e5b, sm);
  p(c);
  n(a4b, sc);
  n(a4b, sc);
  //35
  n(b4, sc);
  n(b4, c);
  n(b4, sc);
  n(b4, sc);
  n(b4, sc);
  n(b4, c);
  n(e5b, c);
  n(b4, sc);
  n(b4, c);
  n(b4, c);
  n(b4b, sc);
  //36
  n(b4, c);
  n(b4b, sc);
  n(b4, c);
  n(b4, sc);
  n(a4b, sm);

  //Coro
  n(e4b, c);
  n(a4b, c);
  n(b4b, c);
  //37
  n(b4, smp);
  n(e4b, c);
  n(a4b, c);
  n(b4b, c);
  n(b4, sm);
  //38
  n(g4, c);
  n(a4b, c);
  n(b4b, c);
  n(b4, sm);
  n(a4b, c);
  n(a4b, c);
  n(a4b, c);
  //39
  n(e5b, sm);
  n(d5b, c);
  n(e5b, sm);
  n(d5b, c);
  n(e5b, sm);
  //40
  n(b4, m);
  p(c);

  n(e4b, c);
  n(a4b, c);
  n(b4b, c);
  //41
  n(b4, smp);
  n(e4b, c);
  n(a4b, c);
  n(b4b, c);
  n(b4, sm);
  //42
  n(g4, c);
  n(a4b, c);
  n(b4b, c);
  n(b4, sm);
  n(a4b, c);
  n(a4b, c);
  n(a4b, c);
  //43
  n(e5b, sm);
  n(d5b, c);
  n(e5b, sm);
  n(d5b, c);
  n(e5b, sm);
  //44
  n(b4, sm);
  p(sm);
  p(sm);
  p(sm);

  //45
  n(b4, c);
  n(b4, c);
  n(b4, c);
  n(b4, c);
  n(b4, c);
  n(b4, c);
  n(b4, c);
  n(b4, c);
  //46
  n(b4b, c);
  n(b4b, c);
  n(b4b, c);
  n(b4b, c);
  n(a4, c);
  n(a4, c);
  n(a4, c);
  n(a4, c);
  //47
  n(a4b, m);
  p(sm);
  p(sm);

  //48
  n(b4, sm);
  n(a4b, sm);
  n(g4b, c);
  n(a4b, sm);
  n(d5, (c + c));
  //49
  n(d5, c);
  n(d5, c);
  n(d5, c);
  n(d5b, sm);
  p(c);
  n(a4b, c);
  //50
  n(b4, sm);
  n(a4b, sm);
  n(g4b, c);
  n(a4b, sm);
  n(d4, (c + c));
  //51
  n(d4, c);
  n(d4, c);
  n(d4, c);
  n(d4b, sm);
  p(c);
  n(a3b, c);
  //52
  n(b3, sm);
  n(a3b, sm);
  n(g3b, c);
  n(a3b, sm);
  n(d4, (c + c));
  //53
  n(d4, c);
  n(d4, c);
  n(d4, c);
  n(d4b, sm);
  p(c);
  n(a3b, c);
  //54
  n(b3, sm);
  n(a3b, sm);
  n(g3b, c);
  n(a3b, sm);
  n(d3, (c + c));
  //55
  n(d3, c);
  n(d3, c);
  n(d3, c);
  n(d3b, c);
  p(sm);

  n(a4b, c);
  //56
  n(b4, sm);
  n(a4b, sm);
  n(g4b, c);
  n(a4b, c);
}

void BAD_APPLE() {
  bpm = 135;

  // 01
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);

  // 02
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(g4b, c);
  n(e4b, sc);
  n(g4b, sc);
  n(a4b, c);
  n(g4b, sc);
  n(a4b, sc);

  // 03
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);

  // 04
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(g4b, c);
  n(e4b, sc);
  n(g4b, sc);
  n(a4b, c);
  n(g4b, sc);
  n(a4b, sc);

  // 05
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);

  // 06
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(g4b, c);
  n(e4b, sc);
  n(g4b, sc);
  n(a4b, c);
  n(g4b, sc);
  n(a4b, sc);

  // 07
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);

  // 08
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(g4b, c);
  n(e4b, sc);
  n(g4b, sc);
  n(a4b, c);
  n(g4b, sc);
  n(a4b, sc);

  // 09
  n(e4b, c);
  n(f4, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(e5b, c);
  n(d5b, c);

  // 10
  n(b4b, sm);
  n(e4b, sm);
  n(b4b, c);
  n(a4b, c);
  n(g4b, c);
  n(f4, c);

  // 11
  n(e4b, c);
  n(f4, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(g4b, c);

  // 12
  n(f4, c);
  n(e4b, c);
  n(f4, c);
  n(e4b, c);
  n(f4, c);
  n(e4b, c);
  n(d4, c);
  n(f4, c);

  // 13
  n(e4b, c);
  n(f4, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(e5b, c);
  n(d5b, c);

  // 14
  n(b4b, sm);
  n(e4b, sm);
  n(b4b, c);
  n(a4b, c);
  n(g4b, c);
  n(f4, c);

  // 15
  n(e4b, c);
  n(f4, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(g4b, c);

  // 16
  n(f4, sm);
  n(g4b, sm);
  n(a4b, sm);
  n(b4b, sm);

  // 17
  n(e4b, c);
  n(f4, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(e5b, c);
  n(d5b, c);

  // 18
  n(b4b, sm);
  n(e4b, sm);
  n(b4b, c);
  n(a4b, c);
  n(g4b, c);
  n(f4, c);

  // 19
  n(e4b, c);
  n(f4, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(g4b, c);

  // 20
  n(f4, c);
  n(e4b, c);
  n(f4, c);
  n(e4b, c);
  n(f4, c);
  n(e4b, c);
  n(d4, c);
  n(f4, c);

  // 21
  n(e4b, c);
  n(f4, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(e5b, c);
  n(d5b, c);

  // 22
  n(b4b, sm);
  n(e4b, sm);
  n(b4b, c);
  n(a4b, c);
  n(g4b, c);
  n(f4, c);

  // 23
  n(e4b, c);
  n(f4, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(g4b, c);

  // 24
  n(f4, sm);
  n(g4b, sm);
  n(a4b, sm);
  n(b4b, sm);

  // 25
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 26
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 27
  n(a4b, c);
  n(g4b, c);
  n(f4, c);
  n(d4b, c);
  n(e4b, sm);
  n(e4b, c);
  n(e4b, c);

  // 28
  n(g4b, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, c);
  n(e4b, sm);
  n(b4b, c);
  n(d5b, c);

  // 29
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 30
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 31
  n(a4b, c);
  n(g4b, c);
  n(f4, c);
  n(d4b, c);
  n(e4b, sm);
  n(e4b, c);
  n(e4b, c);

  // 32
  n(g4b, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, c);
  n(e4b, sm);
  n(b4b, c);
  n(d5b, c);

  // 33
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 34
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 35
  n(a4b, c);
  n(g4b, c);
  n(f4, c);
  n(d4b, c);
  n(e4b, sm);
  n(e4b, c);
  n(e4b, c);

  // 36
  n(g4b, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, c);
  n(e4b, sm);
  n(b4b, c);
  n(d5b, c);

  // 37
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 38
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(e5b, c);
  n(f5, c);

  // 39
  n(g5b, c);
  n(f4, c);
  n(e5b, c);
  n(d5b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 40
  n(a4b, c);
  n(g4b, c);
  n(f4, c);
  n(d4b, c);
  n(e4b, sm);
  n(b4b, c);
  n(d5b, c);

  // 41
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 42
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 43
  n(a4b, c);
  n(g4b, c);
  n(f4, c);
  n(d4b, c);
  n(e4b, sm);
  n(e4b, c);
  n(e4b, c);

  // 44
  n(g4b, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, c);
  n(e4b, sm);
  n(b4b, c);
  n(d5b, c);

  // 45
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 46
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 47
  n(a4b, c);
  n(g4b, c);
  n(f4, c);
  n(d4b, c);
  n(e4b, sm);
  n(e4b, c);
  n(e4b, c);

  // 48
  n(g4b, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, c);
  n(e4b, sm);
  n(b4b, c);
  n(d5b, c);

  // 49
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 50
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 51
  n(a4b, c);
  n(g4b, c);
  n(f4, c);
  n(d4b, c);
  n(e4b, sm);
  n(e4b, c);
  n(e4b, c);

  // 52
  n(g4b, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, c);
  n(e4b, sm);
  n(b4b, c);
  n(d5b, c);

  // 53
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 54
  n(d5b, c);
  n(e5b, c);
  n(b4b, c);
  n(a4b, c);
  n(b4b, sm);
  n(a4b, c);
  n(b4b, c);

  // 55
  n(a4b, c);
  n(g4b, c);
  n(f4, c);
  n(d4b, c);
  n(e4b, sm);
  n(e4b, c);
  n(e4b, c);

  // 56
  n(g4b, c);
  n(g4b, c);
  n(a4b, c);
  n(b4b, c);
  n(e4b, sm);
  p(sm);

  // 57
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);

  // 58
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(g4b, c);
  n(e4b, sc);
  n(g4b, sc);
  n(a4b, c);
  n(g4b, sc);
  n(a4b, sc);

  // 59
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);

  // 60
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(g4b, c);
  n(e4b, sc);
  n(g4b, sc);
  n(a4b, c);
  n(g4b, sc);
  n(a4b, sc);

  // 61
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);

  // 62
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(g4b, c);
  n(e4b, sc);
  n(g4b, sc);
  n(a4b, c);
  n(g4b, sc);
  n(a4b, sc);

  // 63
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);

  // 64
  n(e3b, cp);
  n(e4b, c);
  n(e4b, sc);
  n(d4b, sc);
  n(e4b, sc);
  n(g4b, c);
  n(e4b, sc);
  n(g4b, sc);
  n(a4b, c);
  n(g4b, sc);
  n(a4b, sc);

  // 65
  n(e4b, sm);
}

void ORDER() {
  bpm = 155 / 2;

  // 01
  n(e4, sc);
  n(b3, sc);
  n(e4, sc);
  n(b4, sc);
  n(e4, sc);
  n(b3, sc);
  n(e4, sc);
  n(b3, sc);
  n(e4, sc);
  n(b4, sc);
  n(e4, sc);
  n(b3, sc);

  // 02
  n(e4, sc);
  n(c4, sc);
  n(e4, sc);
  bpm = bpm / 1.5;
  n(c5, sc);
  n(e4, sc);
  n(c4, sc);
  bpm = bpm / 1.5;
  n(e4, sc);
  n(c4, sc);
  n(e4, sc);
  bpm = bpm / 1.5;
  n(c5, sc);
  n(e4, sc);
  n(c4, sc);

  // 03
  bpm = 155 / 2;
  n(e4, cp);
  n(f4s, c);
  n(e4, sc);
  n(g4, sm);
  n(g4, c);

  // 04
  n(f4s, smp);
  n(e4, smp);

  // 05
  n(e4, cp);
  n(f4s, c);
  n(e4, sc);
  n(g4, cp);
  n(a4, cp);

  // 06
  n(g4, smp);
  n(f4s, smp);

  // 07
  n(e4, cp);
  n(f4s, c);
  n(e4, sc);
  n(g4, cp);
  n(a4, cp);

  // 08
  n(b4, sm);
  n(c5, c);
  n(a4, cp);
  n(g4, cp);

  // 09
  n(a4, sc);
  n(b4, sm + cp);
  n(c5, sm);

  // 10
  n(a4, sc);
  n(b4, m);
  n(g4, sc);
  n(f4s, c);

  // 11
  n(e4, cp);
  n(f4s, c);
  n(e4, sc);
  n(g4, sm);
  n(g4, c);

  // 12
  n(f4s, smp);
  n(e4, smp);

  // 13
  n(e4, cp);
  n(f4s, c);
  n(e4, sc);
  n(g4, cp);
  n(a4, cp);

  // 14
  n(g4, smp);
  n(f4s, smp);

  // 15
  n(e4, cp);
  n(f4s, c);
  n(e4, sc);
  n(g4, cp);
  n(a4, cp);

  // 16
  n(b4, sm);
  n(c5, c);
  n(a4, cp);
  n(g4, cp);

  // 17
  n(a4, sc);
  n(b4, sm + cp);
  n(c5, sm);

  // 18
  n(a4, sc);
  n(b4, m + cp);

  // 19
  n(e4, sc);
  n(g4, sc);
  n(f4s, sm);
  n(e4, smp + smp);
}

void NEVER_BE_ALONE() {
  bpm = 125;

  // 01
  p(cp);
  n(c5, sc);
  t(e5b, f5, g5, c);
  n(f5, cp);
  n(e5b, sm);
  n(e5b, sc);

  // 02
  n(b5b, cp);
  n(e5b, sc);
  n(g5, cp);
  n(e5b, sc);
  n(f5, cp);
  n(c5, sc);
  t(e5b, f5, g5, c);

  // 03
  p(cp);
  n(c5, sc);
  t(e5b, f5, g5, c);
  n(f5, cp);
  n(e5b, sm);
  n(e5b, sc);

  // 04
  n(b5b, cp);
  n(e5b, sc);
  n(g5, cp);
  n(e5b, sc);
  n(f5, cp);
  n(c5, sc);
  n(b4, cp);
  n(c5, sc);

  // 05
  p(cp);
  n(c5, sc);
  t(e5b, f5, g5, c);
  n(f5, cp);
  n(e5b, sm);
  n(e5b, sc);

  // 06
  n(b5b, cp);
  n(e5b, sc);
  n(g5, cp);
  n(e5b, sc);
  n(f5, cp);
  n(c5, sc);
  t(e5b, f5, g5, c);

  // 07
  p(cp);
  n(d5, sc);
  n(b4, cp);
  n(f5, sc);
  p(cp);
  n(e5b, sc);
  n(d5, cp);
  n(e5b, sc);

  // 08
  p(cp);
  n(d5, sc);
  n(c5, cp);
  n(b4, sc + sm);
  p(sm);

  // 09
  p(cp);
  n(e4b, sc);
  n(e4b, cp);
  n(e4b, sc);
  n(e4b, cp);
  n(e4b, sc);
  n(c4, cp);
  n(c4, sc);

  // 10
  n(e4b, cp);
  n(f4, sm);
  n(e4b, sm);
  p(sc + sm);

  // 11
  p(cp);
  n(e4b, sc);
  n(e4b, cp);
  n(e4b, sc);
  n(e4b, cp);
  n(f4, sc);
  n(e4b, cp);
  n(e4b, sc);

  // 12
  n(d4, mp);
  p(sm);

  // 13
  p(cp);
  n(e4b, sc);
  n(e4b, cp);
  n(e4b, sc);
  n(e4b, cp);
  n(e4b, sc);
  n(c4, cp);
  n(c4, sc);

  // 14
  n(e4b, cp);
  n(f4, sm);
  n(e4b, sm);
  p(sc + sm);

  // 15
  p(cp);
  n(e4b, sc);
  n(e4b, cp);
  n(e4b, sc);
  n(e4b, cp);
  n(f4, sc);
  n(e4b, cp);
  n(e4b, sc);

  // 16
  n(d4, mp);
  p(sm);

  // 17
  p(cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(c4, sm);

  // 18
  p(cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(c4, sm);

  // 19
  p(cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(g4, cp);
  n(f4, sm);
  n(g4, sc + m);

  // 20
  p(m);

  // 21
  p(cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(c4, sm);

  // 22
  p(cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(c4, sm);

  // 23
  p(cp);
  n(g4, sc);
  n(g4, cp);
  n(g4, sc);
  n(g4, cp);
  n(f4, sm);
  n(g4, sc + m);

  // 24
  p(m);

  // 25
  p(cp);
  n(c4, sc);
  t(e4b, f4, g4, c);
  n(f4, cp);
  n(e4b, sc);
  p(cp);
  n(e4b, sc);

  // 26
  n(b4b, cp);
  n(e4b, sc);
  n(g4, cp);
  n(e4b, sc);
  n(f4, cp);
  n(e4b, sc);
  t(c4, e4b, g4, c);

  // 27
  n(f4, cp);
  n(e4b, sc);
  p(cp);
  n(e4b, sc);
  n(c4, cp);
  n(e4b, sc);
  p(cp);
  n(e4b, sc);

  // 28
  n(f4, cp);
  n(e4b, sc);
  n(f4, cp);
  n(e4b, sc);
  n(f4, cp);
  n(g4, sc);
  n(f4, cp);
  n(e4b, sc);

  // 29
  p(cp);
  n(c4, sc);
  t(e4b, f4, g4, c);
  n(f4, cp);
  n(e4b, sc);
  p(cp);
  n(e4b, sc);

  // 30
  n(b4b, cp);
  n(e4b, sc);
  n(g4, cp);
  n(e4b, sc);
  n(f4, cp);
  n(e4b, sc);
  t(c4, e4b, g4, c);

  // 31
  n(f4, cp);
  n(e4b, sc);
  p(cp);
  n(e4b, sc);
  n(c4, cp);
  n(e4b, sc);
  n(f4, cp);
  n(e4b, sc);

  // 32
  n(f4, cp);
  n(e4b, sc);
  n(f4, cp);
  n(e4b, sc);
  n(g4, c);
  p(c);
  n(e4b, sm);

  // 33
  n(c4, cp);
  n(c5, sc);
  t(e5b, f5, g5, c);
  n(f5, cp);
  n(e5b, sm);
  n(e5b, sc);

  // 34
  n(b5b, cp);
  n(e5b, sc);
  n(g5, cp);
  n(e5b, sc);
  n(f5, cp);
  n(c5, sc);
  t(e5b, f5, g5, c);

  // 35
  p(cp);
  n(c5, sc);
  t(e5b, f5, g5, c);
  n(f5, cp);
  n(e5b, sm);
  n(e5b, sc);

  // 36
  n(b5b, cp);
  n(e5b, sc);
  n(g5, cp);
  n(e5b, sc);
  n(f5, cp);
  n(c5, sc);
  n(b4, cp);
  n(c5, sc);

  // 37
  p(cp);
  n(c5, sc);
  t(e5b, f5, g5, c);
  n(f5, cp);
  n(e5b, sm);
  n(e5b, sc);

  // 38
  n(b5b, cp);
  n(e5b, sc);
  n(g5, cp);
  n(e5b, sc);
  n(f5, cp);
  n(c5, sc);
  t(e5b, f5, g5, c);

  // 39
  p(cp);
  n(d5, sc);
  n(b4, cp);
  n(f5, sc);
  p(cp);
  n(e5b, sc);
  n(d5, cp);
  n(e5b, sc);

  // 40
  p(cp);
  n(d5, sc);
  n(c5, cp);
  n(b4, sc + sm);
  p(sm);
}

void BASICS_IN_BEHAVIOR() {
  bpm = 110;

  // 01
  p(c);
  n(c5, sc);
  n(c5, sc);
  n(c5, c);
  n(g4, sc);
  n(b4b, c);
  n(c5, c);
  n(e5b, sc);
  n(c5, sc);
  n(b4b, sc);
  n(c5, sc);
  n(g4, sc);

  // 02
  n(a4b, c);
  n(c5, c);
  n(e5b, c);
  n(d5, sc);
  n(e5b, c);
  n(b4b, sc);
  n(c5, sc);
  n(g4, sc);
  n(b4b, sc);
  n(c5, sc);
  n(e5b, sc);
  n(g5, sc);

  // 03
  n(a5b, sc);
  n(g5, sc);
  n(e5b, cp);
  n(c5, sc);
  n(f5, sc);
  n(e5b, c);
  n(c5, c);
  n(b4b, c);
  n(c5, sc);
  n(e5b, sc);
  n(g5, sc);

  // 04
  n(a5b, sc);
  n(g5, sc);
  n(e5b, cp);
  n(c5, sc);
  n(d5, sc);
  n(e5b, c);
  n(f5, c);
  n(g5, cp);
  p(c);

  // 05
  p(c);
  n(g4, c);
  n(f4, c);
  n(e4b, c);
  n(d4, c);
  n(c4, c);
  n(b3b, c);
  n(g3, c);

  // 06
  n(a3b, c);
  n(c4, c);
  n(b3b, c);
  n(f3, c);
  n(g3, c);
  n(c4, c);
  n(b3b, c);
  n(g3, c);

  // 07
  n(f3, c);
  n(a3b, c);
  n(e4b, c);
  p(c);
  n(g3, c);
  n(b3b, c);
  n(e4b, c);
  p(c);

  // 08
  n(a4, c);
  n(c4, c);
  n(e4b, c);
  p(c);
  n(b3, c);
  n(d4, sc);
  n(g4, c);
  n(f4, cp);

  // 09
  p(c);
  n(g4, c);
  n(f4, c);
  n(e4b, c);
  n(d4, c);
  n(c4, c);
  n(b3b, c);
  n(g3, c);

  // 10
  n(a3b, c);
  n(e4b, c);
  n(d4, c);
  n(c4, c);
  n(b3b, c);
  n(c4, c);
  n(g3, c);
  n(g3b, c);

  // 11
  n(f3, c);
  n(a3b, c);
  n(c4, c);
  n(b3b, c);
  n(g3, c);
  n(c4, c);
  n(b3b, c);
  p(c);

  // 12
  n(a3b, c);
  n(c4, c);
  n(b3b, c);
  p(c);
  n(b3, c);
  n(d4, sc);
  n(g4, c);
  n(f4, cp);

  // 13
  p(c);
  n(g4, c);
  n(f4, sc);
  n(g4, cp);
  n(b4b, c);
  n(a4b, sc);
  n(g4, c);
  n(e4b, cp);

  // 14
  p(c);
  n(g4, c);
  n(f4, sc);
  n(g4, cp);
  n(b4b, c);
  n(a4b, sc);
  n(g4, c);
  n(e4b, cp);

  // 15
  n(f4, c);
  n(g4, sc);
  n(e4b, cp);
  n(c4, sc);
  n(f4, sc);
  n(e4b, c);
  n(c4, sc);
  n(b3b, sm);
  p(sc);

  // 16
  n(f4, c);
  n(g4, sc);
  n(e4b, cp);
  n(c4, sc);
  n(f4, sc);
  n(e4b, c);
  n(c4, sc);
  n(c4, c);
  n(b3, cp);

  // 17
  p(c);
  n(g4, c);
  n(f4, c);
  n(g4, c);
  n(b4b, c);
  n(a4b, sc);
  n(g4, c);
  n(e4b, cp);

  // 18
  p(c);
  n(g4, c);
  n(f4, c);
  n(g4, cp);
  n(c5, c);
  n(b4b, sc);
  n(g4, c);
  n(e4b, cp);

  // 19
  p(c);
  n(c4, c);
  n(d4, c);
  n(e4b, c);
  n(f4, c);
  n(g4, c);
  n(e4b, c);
  p(c);

  // 20
  n(c4, c);
  n(d4, c);
  n(e4b, c);
  n(g4, c);
  n(f4, c);
  n(g4, sc);
  n(f4, c);
  n(d4, cp);

  // 21
  n(g4b, m + c);
  n(g4b, c);
  n(f4, sc);
  n(e4b, cp);

  // 22
  n(b3, sm);
  n(c4, sm);
  n(d4, cp);
  n(e4b, c);
  n(d4, cp);

  // 23
  n(g4, c);
  n(b4b, c);
  n(g4, c);
  n(f4, c);
  n(f4, c);
  n(f4, sc);
  n(g4, c);
  n(f4, cp);

  // 24
  n(f4, c);
  n(e4b, sc);
  n(c4, sm + c);
  p(sc);
  n(b4, sc);
  n(c4, c);
  n(e4b, cp);

  // 25
  n(g4b, m + c);
  n(f4, c);
  n(e4b, c);
  n(c4, sc);
  n(g4, sc + sc);

  // 26
  n(f4, sm + smp);
  n(g4, cp);
  p(c);

  // 27
  n(g4, c);
  n(b4b, c);
  n(c4, c);
  n(b4b, c);
  n(g4, cp);
  n(f4, c);
  n(g4, cp);

  // 28
  n(f4, c);
  n(e4b, sc);
  n(c4, sm + c);
  p(sc);
  n(b4, sc);
  n(c4, c);
  n(e4b, cp);

  // 29
  n(g4b, m + c);
  n(f4, c);
  n(e4b, c);
  n(c4, sc);
  n(g4, sc + sc);

  // 30
  n(f4, sm + smp);
  n(g4, cp);
  p(sc);
  n(d5, sc);

  // 31
  n(e5b, c);
  n(d5, c);
  n(c5, c);
  n(b4b, c);
  n(g4, cp);
  n(b4b, c);
  n(c5, cp);

  // 32
  n(f4, c);
  n(e4b, sc);
  n(c4, sm + c);
  p(sc);
  n(b4, sc);
  n(c4, c);
  n(e4b, cp);

  // 33
  n(g4b, m + c);
  n(f4, c);
  n(e4b, c);
  n(c4, sc);
  n(g4, sc + sc);

  // 34
  n(f4, sm + sm);
  p(sc);
  n(e4b, sc);
  n(d5, c);
  n(b3, cp);

  // 35
  n(g3, c);
  n(c5, sc);
  n(c5, sc);
  n(c5, c);
  n(g4, sc);
  n(b4b, c);
  n(c5, c);
  n(e5b, sc);
  n(c5, sc);
  n(b4b, sc);
  n(c5, sc);
  n(g4, sc);

  // 36
  n(a4b, c);
  n(c5, c);
  n(e5b, c);
  n(d5, sc);
  n(e5b, c);
  n(b4b, sc);
  n(c5, sc);
  n(g4, sc);
  n(b4b, sc);
  n(c5, sc);
  n(e5b, sc);
  n(g5, sc);

  // 37
  n(a5b, sc);
  n(g5, sc);
  n(e5b, cp);
  n(c5, sc);
  n(f5, sc);
  n(e5b, c);
  n(c5, c);
  n(b4b, c);
  n(c5, sc);
  n(e5b, sc);
  n(g5, sc);

  // 38
  n(a5b, sc);
  n(g5, sc);
  n(e5b, cp);
  n(c5, sc);
  n(d5, sc);
  n(e5b, c);
  n(f5, c);
  n(g5, cp);
  p(c);

  // 39
  p(c);
  n(c5, sc);
  n(c5, sc);
  n(c5, c);
  n(g4, sc);
  n(b4b, c);
  n(c5, c);
  n(e5b, sc);
  n(c5, sc);
  n(b4b, sc);
  n(c5, sc);
  n(g4, sc);

  // 40
  n(a4b, c);
  n(c5, c);
  n(e5b, c);
  n(d5, sc);
  n(e5b, c);
  n(b4b, sc);
  n(c5, sc);
  n(g4, sc);
  n(b4b, sc);
  n(c5, sc);
  n(e5b, sc);
  n(g5, sc);

  // 41
  n(a5b, sc);
  n(g5, sc);
  n(e5b, cp);
  n(c5, sc);
  n(f5, sc);
  n(e5b, c);
  n(c5, c);
  n(b4b, c);
  n(c5, sc);
  n(e5b, sc);
  n(g5, sc);

  // 42
  n(a5b, sc);
  n(g5, sc);
  n(e5b, cp);
  n(c5, sc);
  n(f5, sc);
  n(e5b, c);
  n(c5, c);
  n(b4, c);
  n(d5, sc);
  n(g4, c);

  // 43
  n(c5, m);
}

void EPOCH() {
  bpm = 90;

  // 01
  n(d5, sb);

  // 02
  n(f5, sb);

  // 03
  n(b4b, m);
  n(g5b, m);

  // 04
  n(g5, mp);
  p(sm);

  // 05
  n(a4, sc);
  n(a4, sc);
  n(a4, c);
  n(a4, sc);
  n(a4, sc);
  n(c5, sc);
  n(a5, cp);
  p(smp);

  // 06
  n(a4, c);
  n(a4, c);
  n(a4, c);
  n(g4, sc);
  n(a4, cp);
  n(d4, cp);
  p(c);
  n(d4, sc);

  // 07
  n(a4, sc);
  n(a4, c);
  n(a4, c);
  n(g4, sc);
  n(f4, c);
  n(a4, sc);
  n(a4, sc);
  n(a4, c);
  n(a4, sm);

  // 08
  n(f4, sm);
  p(m + cp);
  n(f5, sc);

  // 09
  n(a4, c);
  n(a4, c);
  t(a4, g4, c5, scp);
  n(a4, cp);
  p(sm + sc);
  n(a4, sc);

  // 10
  n(d5, c);
  n(c5, c);
  n(a4, c);
  n(g4, sc);
  n(a4, sm + sc);
  n(d4, sm);

  // 11
  n(a4, sm);
  n(d4, sm);
  n(f4, c);
  n(f4, c);
  n(a4, c);
  n(a4, c);

  // 12
  n(f4, c);
  n(a4, smp);
  p(m);

  // 13
  n(f5, c);
  n(e5, c);
  n(e5, c);
  n(d5, c);
  n(d5, c);
  n(c5, smp);

  // 14
  p(sb);

  // 15
  n(f5, c);
  n(e5, c);
  n(e5, c);
  n(d5, c);
  n(d5, c);
  n(c5, smp);

  // 16
  p(m + sm + cp);
  n(f5, sc);

  // 17
  n(f5, c);
  n(e5, sc);
  n(e5, sc);
  n(e5, c);
  n(d5, c);
  n(d5, sc);
  n(c5, sc);
  n(c5, sc);
  n(c5, sc);
  n(b4b, sc);
  n(a4, sc);
  n(f5, sc);

  // 18
  n(f5, c);
  n(e5, sc);
  n(e5, sc);
  n(e5, c);
  n(d5, c);
  n(g5, sc);
  n(a5, smp);
  n(f5, sc);

  // 19
  n(f5, c);
  n(e5, sc);
  n(e5, sc);
  n(e5, c);
  n(d5, c);
  n(d5, sc);
  n(c5, sc);
  n(c5, sc);
  n(c5, sc);
  n(b4b, sc);
  n(a4, sc);
  n(f5, sc);

  // 20
  n(f5, c);
  n(e5, sc);
  n(e5, sc);
  n(e5, c);
  n(d5, c);
  n(g5, sc);
  n(a5, cp);
  p(sm);

  // 21
  n(d5, sb);

  // 22
  n(f5, sb);

  // 23
  n(g5b, m);
  n(b4b, m);

  // 24
  n(g5, sb);
}

void CARELESS_WHISPER() {
  bpm = 140;

  // 01
  n(f4, sm);

  // 02
  n(e5, sm);
  n(d5, c);
  n(a4, sm);
  n(f4, sm);
  n(e5, c + sm);

  // 03
  n(d5, c);
  n(a4, sm);
  n(f4, sm);
  p(c);

  // 04
  n(c5, sm);
  n(b4b, c);
  n(f4, sm);
  n(d4, sm);
  n(c5, c + sm);

  // 05
  n(b4b, c);
  n(f4, smp);
  p(sm);

  // 06
  n(b4b, sm);
  n(a4, c);
  n(f4, sm);
  n(d4, sm);
  // 07
  n(b3b, c + sb);

  // 08
  n(a3, sm);
  n(b3b, sm);
  n(c4, sm);
  n(d4, sm);

  // 09
  n(e4, sm);
  n(f4, sm);
  n(g4, sm);
  n(a4, sm);

  // 10
  n(e5, sm);
  n(d5, c);
  n(a4, sm);
  n(f4, sm);
  n(e5, c + sm);

  // 11
  n(d5, c);
  n(a4, sm);
  n(f4, sm);
  p(c);

  // 12
  n(c5, sm);
  n(b4b, c);
  n(f4, sm);
  n(d4, sm);
  n(c5, c + sm);

  // 13
  n(b4b, c);
  n(f4, smp);
  p(sm);

  // 14
  n(b4b, sm);
  n(a4, c);
  n(f4, sm);
  n(d4, sm);

  // 15
  n(b3b, c + sb);

  // 16
  n(a3, sm);
  n(b3b, sm);
  n(c4, sm);
  n(d4, sm);

  // 17
  n(e4, sm);
  n(f4, sm);
  n(g4, sm);
  n(a4, c);
  n(d4, c);

  // 18
  n(a4, sm);
  n(g4, c);
  n(g4, sm);
  n(f4, sm);
  n(a4, c + sm);

  // 19
  n(f4, c);
  n(f4, c);
  n(d4, sm);
  p(c);
  n(d4, c);

  // 20
  n(a4, c);
  n(g4, sm);
  n(g4, sm);
  n(f4, sm);
  n(a4, c + sm);

  // 21
  n(g4, sm);
  n(d4, sm);
  p(sm);

  // 22
  n(f4, sm);
  n(f4, sm);
  p(c);
  n(f4, sm);
  n(g4, c + c);

  // 23
  n(g4, c);
  n(f4, sm);
  n(f4, smp);
  n(d4, c);

  // 24
  n(e4, c);
  n(d4, c);
  n(e4, c);
  n(d4, c);
  n(e4, c);
  n(d4, c);
  n(e4, c);
  n(d4, c);

  // 25
  n(e4, sm);
  n(f4, c);
  n(g4, smp);
  p(c);
  n(d4, c);

  // 26
  n(a4, sm);
  n(g4, c);
  n(g4, sm);
  n(f4, sm);
  n(a4, c + sm);

  // 27
  n(f4, c);
  n(f4, c);
  n(d4, sm);
  p(c);
  n(d4, c);

  // 28
  n(a4, c);
  n(g4, sm);
  n(g4, sm);
  n(f4, sm);
  n(a4, c + sm);

  // 29
  n(f4, c);
  n(f4, c);
  n(d4, sm);
  p(c);
  n(d4, c);

  // 30
  n(d5, m + c);
  n(c5, sm);
  n(c5, c + sm);

  // 31
  n(b4b, c);
  n(b4b, smp);
  n(a4, c);

  // 32
  n(a4, c + sb + mp);

  // 33
  n(a4, sm);

  // 34
  n(e5, sm);
  n(d5, c);
  n(a4, sm);
  n(f4, sm);
  n(e5, c + sm);

  // 35
  n(d5, c);
  n(a4, sm);
  n(f4, sm);
  p(c);

  // 36
  n(c5, sm);
  n(b4b, c);
  n(f4, sm);
  n(d4, sm);
  n(c5, c + sm);

  // 37
  n(b4b, c);
  n(f4, smp);
  p(sm);

  // 38
  n(b4b, sm);
  n(a4, c);
  n(f4, sm);
  n(d4, sm);

  // 39
  n(b3b, c + sb);

  // 40
  n(a3, sm);
  n(b3b, sm);
  n(c4, sm);
  n(d4, sm);

  // 41
  n(e4, sm);
  n(f4, sm);
  n(g4, sm);
  n(a4, sm);

  // 42
  n(e5, sm);
  n(d5, c);
  n(a4, sm);
  n(f4, sm);
  n(e5, c + sm);

  // 43
  n(d5, c);
  n(a4, sm);
  n(f4, sm);
  p(c);

  // 44
  n(c5, sm);
  n(b4b, c);
  n(f4, sm);
  n(d4, sm);
  n(c5, c + sm);

  // 45
  n(b4b, c);
  n(f4, smp);
  p(sm);

  // 46
  n(b4b, sm);
  n(a4, c);
  n(f4, sm);
  n(d4, sm);

  // 47
  n(b3b, c + sb);

  // 48
  n(a3, sm);
  n(b3b, sm);
  n(c4, sm);
  n(d4, sm);

  // 49
  n(e4, sm);
  n(f4, sm);
  n(g4, sm);
  n(e4, sm);

  // 50
  n(d4, sb);
}

void FALLEN_DOWN() {
  bpm = 80;

  // 01
  nh(f5s, d3, c);
  nh(c5s, f3s, c);
  nh(f5s, a3, c);
  nh(c5s, f3s, c);
  nh(f5s, a3, c);
  nh(c5s, f3s, c);

  // 02
  nh(f5s, d3, c);
  nh(c5s, f3s, c);
  nh(f5s, a3, c);
  nh(c5s, f3s, c);
  nh(f5s, a3, c);
  nh(c5s, f3s, c);

  // 03
  nh(b4, b2, c);
  nh(a4, d3s, c);
  nh(c5s, f3s, sm);
  nh(a4, f3s, c);
  nh(b4, d3s, c);

  // 04
  nh(e5, b2, c);
  nh(d5s, d3s, c);
  nh(e5, f3s, c);
  nh(f5s, d3s, c);
  nh(d5s, f3s, c);
  nh(b4, d3s, c);

  // 05
  nh(f5s, g2, c);
  nh(b4, b2, c);
  nh(f5s, d3, c);
  nh(b4, b2, c);
  nh(f5s, d3, c);
  nh(b4, b2, c);

  // 06
  nh(f5s, g2, c);
  nh(b4b, b2, c);
  nh(f5s, d3, c);
  nh(b4b, b2, c);
  nh(g5, d3, c);
  nh(b4b, b2, c);

  // 07
  nh(f5s, d3, c);
  nh(d5, f3s, c);
  nh(f5s, a3, c);
  nh(d5, f3s, c);
  nh(e5, a3, c);
  nh(d5, f3s, c);

  // 08
  nh(e5, d3b, c);
  nh(f4s, f3s, c);
  nh(d5, a3, c);
  nh(f4s, f3s, c);
  nh(c5s, a3, c);
  nh(f4s, f3s, c);

  // rithornelo
  // 01
  nh(f5s, d3, c);
  nh(c5s, f3s, c);
  nh(f5s, a3, c);
  nh(c5s, f3s, c);
  nh(f5s, a3, c);
  nh(c5s, f3s, c);

  // 02
  nh(f5s, d3, c);
  nh(c5s, f3s, c);
  nh(f5s, a3, c);
  nh(c5s, f3s, c);
  nh(f5s, a3, c);
  nh(c5s, f3s, c);

  // 03
  nh(b4, b2, c);
  nh(a4, d3s, c);
  nh(c5s, f3s, sm);
  nh(a4, f3s, c);
  nh(b4, d3s, c);

  // 04
  nh(e5, b2, c);
  nh(d5s, d3s, c);
  nh(e5, f3s, c);
  nh(f5s, d3s, c);
  nh(d5s, f3s, c);
  nh(b4, d3s, c);

  // 05
  nh(f5s, g2, c);
  nh(b4, b2, c);
  nh(f5s, d3, c);
  nh(b4, b2, c);
  nh(f5s, d3, c);
  nh(b4, b2, c);

  // 06
  nh(f5s, g2, c);
  nh(b4b, b2, c);
  nh(f5s, d3, c);
  nh(b4b, b2, c);
  nh(g5, d3, c);
  nh(b4b, b2, c);

  // 07
  nh(f5s, d3, c);
  nh(d5, f3s, c);
  nh(f5s, a3, c);
  nh(d5, f3s, c);
  nh(e5, a3, c);
  nh(d5, f3s, c);

  // 08
  nh(e5, d3b, c);
  nh(f4s, f3s, c);
  nh(d5, a3, c);
  nh(f4s, f3s, c);
  nh(c5s, a3, c);
  nh(f4s, f3s, c);
}
