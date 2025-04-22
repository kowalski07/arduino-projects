#ifndef BASICS_IN_BEHAVIOR_H
#define BASICS_IN_BEHAVIOR_H

#include "../BuzzerMusic.h"
#include "../SoundConstants.h"

inline void BASICS_IN_BEHAVIOR(BuzzerMusic& b) {
  // BPM 110 (DEFAULT)
  b.bpm = 110;

  // 01
  b.P(c);
  b.M(c5, sc);
  b.M(c5, sc);
  b.M(c5, c);
  b.M(g4, sc);
  b.M(b4b, c);
  b.M(c5, c);
  b.M(e5b, sc);
  b.M(c5, sc);
  b.M(b4b, sc);
  b.M(c5, sc);
  b.M(g4, sc);

  // 02
  b.M(a4b, c);
  b.M(c5, c);
  b.M(e5b, c);
  b.M(d5, sc);
  b.M(e5b, c);
  b.M(b4b, sc);
  b.M(c5, sc);
  b.M(g4, sc);
  b.M(b4b, sc);
  b.M(c5, sc);
  b.M(e5b, sc);
  b.M(g5, sc);

  // 03
  b.M(a5b, sc);
  b.M(g5, sc);
  b.M(e5b, cp);
  b.M(c5, sc);
  b.M(f5, sc);
  b.M(e5b, c);
  b.M(c5, c);
  b.M(b4b, c);
  b.M(c5, sc);
  b.M(e5b, sc);
  b.M(g5, sc);

  // 04
  b.M(a5b, sc);
  b.M(g5, sc);
  b.M(e5b, cp);
  b.M(c5, sc);
  b.M(d5, sc);
  b.M(e5b, c);
  b.M(f5, c);
  b.M(g5, cp);
  b.P(c);

  // 05
  b.P(c);
  b.M(g4, c);
  b.M(f4, c);
  b.M(e4b, c);
  b.M(d4, c);
  b.M(c4, c);
  b.M(b3b, c);
  b.M(g3, c);

  // 06
  b.M(a3b, c);
  b.M(c4, c);
  b.M(b3b, c);
  b.M(f3, c);
  b.M(g3, c);
  b.M(c4, c);
  b.M(b3b, c);
  b.M(g3, c);

  // 07
  b.M(f3, c);
  b.M(a3b, c);
  b.M(e4b, c);
  b.P(c);
  b.M(g3, c);
  b.M(b3b, c);
  b.M(e4b, c);
  b.P(c);

  // 08
  b.M(a3, c);
  b.M(c4, c);
  b.M(e4b, c);
  b.P(c);
  b.M(b3, c);
  b.M(d4, sc);
  b.M(g4, c);
  b.M(f4, cp);

  // 09
  b.P(c);
  b.M(g4, c);
  b.M(f4, c);
  b.M(e4b, c);
  b.M(d4, c);
  b.M(c4, c);
  b.M(b3b, c);
  b.M(g3, c);

  // 10
  b.M(a3b, c);
  b.M(e4b, c);
  b.M(d4, c);
  b.M(c4, c);
  b.M(b3b, c);
  b.M(c4, c);
  b.M(g3, c);
  b.M(g3b, c);

  // 11
  b.M(f3, c);
  b.M(a3b, c);
  b.M(c4, c);
  b.M(b3b, c);
  b.M(g3, c);
  b.M(c4, c);
  b.M(b3b, c);
  b.P(c);

  // 12
  b.M(a3b, c);
  b.M(c4, c);
  b.M(b3b, c);
  b.P(c);
  b.M(b3, c);
  b.M(d4, sc);
  b.M(g4, c);
  b.M(f4, cp);

  // 13
  b.P(c);
  b.M(g4, c);
  b.M(f4, sc);
  b.M(g4, cp);
  b.M(b4b, c);
  b.M(a4b, sc);
  b.M(g4, c);
  b.M(e4b, cp);

  // 14
  b.P(c);
  b.M(g4, c);
  b.M(f4, sc);
  b.M(g4, cp);
  b.M(b4b, c);
  b.M(a4b, sc);
  b.M(g4, c);
  b.M(e4b, cp);

  // 15
  b.M(f4, c);
  b.M(g4, sc);
  b.M(e4b, cp);
  b.M(c4, sc);
  b.M(f4, sc);
  b.M(e4b, c);
  b.M(c4, sc);
  b.M(b3b, sm);
  b.P(sc);

  // 16
  b.M(f4, c);
  b.M(g4, sc);
  b.M(e4b, cp);
  b.M(c4, sc);
  b.M(f4, sc);
  b.M(e4b, c);
  b.M(c4, sc);
  b.M(c4, c);
  b.M(b3, cp);

  // 17
  b.P(c);
  b.M(g4, c);
  b.M(f4, c);
  b.M(g4, c);
  b.M(b4b, c);
  b.M(a4b, sc);
  b.M(g4, c);
  b.M(e4b, cp);

  // 18
  b.P(c);
  b.M(g4, c);
  b.M(f4, c);
  b.M(g4, c);
  b.M(c5, c);
  b.M(b4b, sc);
  b.M(g4, c);
  b.M(e4b, cp);

  // 19
  b.P(c);
  b.M(c4, c);
  b.M(d4, c);
  b.M(e4b, c);
  b.M(f4, c);
  b.M(g4, c);
  b.M(e4b, c);
  b.P(c);

  // 20
  b.M(c4, c);
  b.M(d4, c);
  b.M(e4b, c);
  b.M(g4, c);
  b.M(f4, c);
  b.M(g4, sc);
  b.M(f4, c);
  b.M(d4, cp);

  // 21
  b.M(g4b, m + c);
  b.M(g4b, c);
  b.M(f4, sc);
  b.M(e4b, cp);

  // 22
  b.M(b3, sm);
  b.M(c4, sm);
  b.M(d4, cp);
  b.M(e4b, c);
  b.M(d4, cp);

  // 23
  b.M(g4, c);
  b.M(b4b, c);
  b.M(g4, c);
  b.M(f4, c);
  b.M(f4, c);
  b.M(f4, sc);
  b.M(g4, c);
  b.M(f4, cp);

  // 24
  b.M(f4, c);
  b.M(e4b, sc);
  b.M(c4, sm + c);
  b.P(sc);
  b.M(b3, sc);
  b.M(c4, c);
  b.M(e4b, cp);

  // 25
  b.M(g4b, m + c);
  b.M(f4, c);
  b.M(e4b, c);
  b.M(c4, sc);
  b.M(g4, sc + sc);

  // 26
  b.M(f4, sm + smp);
  b.M(g4, cp);
  b.P(c);

  // 27
  b.M(g4, c);
  b.M(b4b, c);
  b.M(c5, c);
  b.M(b4b, c);
  b.M(g4, cp);
  b.M(f4, c);
  b.M(g4, cp);

  // 28
  b.M(f4, c);
  b.M(e4b, sc);
  b.M(c4, sm + c);
  b.P(sc);
  b.M(b3, sc);
  b.M(c4, c);
  b.M(e4b, cp);

  // 29
  b.M(g4b, m + c);
  b.M(f4, c);
  b.M(e4b, c);
  b.M(c4, sc);
  b.M(g4, sc + sc);

  // 30
  b.M(f4, sm + smp);
  b.M(g4, cp);
  b.P(sc);
  b.M(d5, sc);

  // 31
  b.M(e5b, c);
  b.M(d5, c);
  b.M(c5, c);
  b.M(b4b, c);
  b.M(g4, cp);
  b.M(b4b, c);
  b.M(c5, cp);

  // 32
  b.M(f4, c);
  b.M(e4b, sc);
  b.M(c4, sm + c);
  b.P(sc);
  b.M(b3, sc);
  b.M(c4, c);
  b.M(e4b, cp);

  // 33
  b.M(g4b, m + c);
  b.M(f4, c);
  b.M(e4b, c);
  b.M(c4, sc);
  b.M(g4, sc + sc);

  // 34
  b.M(f4, sm + sm);
  b.P(sc);
  b.M(e4b, sc);
  b.M(d4, c);
  b.M(b3, cp);

  // 35
  b.M(g3, c);
  b.M(c5, sc);
  b.M(c5, sc);
  b.M(c5, c);
  b.M(g4, sc);
  b.M(b4b, c);
  b.M(c5, c);
  b.M(e5b, sc);
  b.M(c5, sc);
  b.M(b4b, sc);
  b.M(c5, sc);
  b.M(g4, sc);

  // 36
  b.M(a4b, c);
  b.M(c5, c);
  b.M(e5b, c);
  b.M(d5, sc);
  b.M(e5b, c);
  b.M(b4b, sc);
  b.M(c5, sc);
  b.M(g4, sc);
  b.M(b4b, sc);
  b.M(c5, sc);
  b.M(e5b, sc);
  b.M(g5, sc);

  // 37
  b.M(a5b, sc);
  b.M(g5, sc);
  b.M(e5b, cp);
  b.M(c5, sc);
  b.M(f5, sc);
  b.M(e5b, c);
  b.M(c5, c);
  b.M(b4b, c);
  b.M(c5, sc);
  b.M(e5b, sc);
  b.M(g5, sc);

  // 38
  b.M(a5b, sc);
  b.M(g5, sc);
  b.M(e5b, cp);
  b.M(c5, sc);
  b.M(d5, sc);
  b.M(e5b, c);
  b.M(f5, c);
  b.M(g5, cp);
  b.P(c);

  // 39
  b.P(c);
  b.M(c5, sc);
  b.M(c5, sc);
  b.M(c5, c);
  b.M(g4, sc);
  b.M(b4b, c);
  b.M(c5, c);
  b.M(e5b, sc);
  b.M(c5, sc);
  b.M(b4b, sc);
  b.M(c5, sc);
  b.M(g4, sc);

  // 40
  b.M(a4b, c);
  b.M(c5, c);
  b.M(e5b, c);
  b.M(d5, sc);
  b.M(e5b, c);
  b.M(b4b, sc);
  b.M(c5, sc);
  b.M(g4, sc);
  b.M(b4b, sc);
  b.M(c5, sc);
  b.M(e5b, sc);
  b.M(g5, sc);

  // 41
  b.M(a5b, sc);
  b.M(g5, sc);
  b.M(e5b, cp);
  b.M(c5, sc);
  b.M(f5, sc);
  b.M(e5b, c);
  b.M(c5, c);
  b.M(b4b, c);
  b.M(c6, sc);
  b.M(e6b, sc);
  b.M(g6, sc);

  // 42
  b.M(a6b, sc);
  b.M(g6, sc);
  b.M(e6b, cp);
  b.M(c6, sc);
  b.M(f6, sc);
  b.M(e6b, c);
  b.M(c6, c);
  b.M(b6, c);
  b.M(d6, sc);
  b.M(g6, c);

  // 43
  b.M(c6, m);
}

#endif // BASICS_IN_BEHAVIOR_H
