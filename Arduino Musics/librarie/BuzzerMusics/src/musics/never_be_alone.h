#ifndef NEVER_BE_ALONE_H
#define NEVER_BE_ALONE_H

#include "../BuzzerMusic.h"
#include "../SoundConstants.h"

inline void NEVER_BE_ALONE(BuzzerMusic& b) {
  // BPM 125 (DEFAULT)
  b.bpm = 125;

  // 01
  b.P(cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);
  b.M(f5, cp);
  b.M(e5b, sm);
  b.M(e5b, sc);

  // 02
  b.M(b5b, cp);
  b.M(e5b, sc);
  b.M(g5, cp);
  b.M(e5b, sc);
  b.M(f5, cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);

  // 03
  b.P(cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);
  b.M(f5, cp);
  b.M(e5b, sm);
  b.M(e5b, sc);

  // 04
  b.M(b5b, cp);
  b.M(e5b, sc);
  b.M(g5, cp);
  b.M(e5b, sc);
  b.M(f5, cp);
  b.M(c5, sc);
  b.M(b4, cp);
  b.M(c5, sc);

  // 05
  b.P(cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);
  b.M(f5, cp);
  b.M(e5b, sm);
  b.M(e5b, sc);

  // 06
  b.M(b5b, cp);
  b.M(e5b, sc);
  b.M(g5, cp);
  b.M(e5b, sc);
  b.M(f5, cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);

  // 07
  b.P(cp);
  b.M(d5, sc);
  b.M(b4, cp);
  b.M(f5, sc);
  b.P(cp);
  b.M(e5b, sc);
  b.M(d5, cp);
  b.M(e5b, sc);

  // 08
  b.P(cp);
  b.M(d5, sc);
  b.M(c5, cp);
  b.M(b4, sc + sm);
  b.P(sm);

  // 09
  b.P(cp);
  b.M(e4b, sc);
  b.M(e4b, cp);
  b.M(e4b, sc);
  b.M(e4b, cp);
  b.M(e4b, sc);
  b.M(c4, cp);
  b.M(c4, sc);

  // 10
  b.M(e4b, cp);
  b.M(f4, sm);
  b.M(e4b, sm);
  b.P(sc + sm);

  // 11
  b.P(cp);
  b.M(e4b, sc);
  b.M(e4b, cp);
  b.M(e4b, sc);
  b.M(e4b, cp);
  b.M(f4, sc);
  b.M(e4b, cp);
  b.M(e4b, sc);

  // 12
  b.M(d4, mp);
  b.P(sm);

  // 13
  b.P(cp);
  b.M(e4b, sc);
  b.M(e4b, cp);
  b.M(e4b, sc);
  b.M(e4b, cp);
  b.M(e4b, sc);
  b.M(c4, cp);
  b.M(c4, sc);

  // 14
  b.M(e4b, cp);
  b.M(f4, sm);
  b.M(e4b, sm);
  b.P(sc + sm);

  // 15
  b.P(cp);
  b.M(e4b, sc);
  b.M(e4b, cp);
  b.M(e4b, sc);
  b.M(e4b, cp);
  b.M(f4, sc);
  b.M(e4b, cp);
  b.M(e4b, sc);

  // 16
  b.M(d4, mp);
  b.P(sm);

  // 17
  b.P(cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(c4, sm);

  // 18
  b.P(cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(c4, sm);

  // 19
  b.P(cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(f4, sm);
  b.M(g4, sc + m);

  // 20
  b.P(m);

  // 21
  b.P(cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(c4, sm);

  // 22
  b.P(cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(c4, sm);

  // 23
  b.P(cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(g4, sc);
  b.M(g4, cp);
  b.M(f4, sm);
  b.M(g4, sc + m);

  // 24
  b.P(m);

  // 25
  b.P(cp);
  b.M(c4, sc);
  b.T(e4b, f4, g4, c);
  b.M(f4, cp);
  b.M(e4b, sc);
  b.P(cp);
  b.M(e4b, sc);

  // 26
  b.M(b4b, cp);
  b.M(e4b, sc);
  b.M(g4, cp);
  b.M(e4b, sc);
  b.M(f4, cp);
  b.M(e4b, sc);
  b.T(c4, e4b, g4, c);

  // 27
  b.M(f4, cp);
  b.M(e4b, sc);
  b.P(cp);
  b.M(e4b, sc);
  b.M(c4, cp);
  b.M(e4b, sc);
  b.P(cp);
  b.M(e4b, sc);

  // 28
  b.M(f4, cp);
  b.M(e4b, sc);
  b.M(f4, cp);
  b.M(e4b, sc);
  b.M(f4, cp);
  b.M(g4, sc);
  b.M(f4, cp);
  b.M(e4b, sc);

  // 29
  b.P(cp);
  b.M(c4, sc);
  b.T(e4b, f4, g4, c);
  b.M(f4, cp);
  b.M(e4b, sc);
  b.P(cp);
  b.M(e4b, sc);

  // 30
  b.M(b4b, cp);
  b.M(e4b, sc);
  b.M(g4, cp);
  b.M(e4b, sc);
  b.M(f4, cp);
  b.M(e4b, sc);
  b.T(c4, e4b, g4, c);

  // 31
  b.M(f4, cp);
  b.M(e4b, sc);
  b.P(cp);
  b.M(e4b, sc);
  b.M(c4, cp);
  b.M(e4b, sc);
  b.M(f4, cp);
  b.M(e4b, sc);

  // 32
  b.M(f4, cp);
  b.M(e4b, sc);
  b.M(f4, cp);
  b.M(e4b, sc);
  b.M(g4, c);
  b.P(c);
  b.M(e4b, sm);

  // 33
  b.M(c4, cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);
  b.M(f5, cp);
  b.M(e5b, sm);
  b.M(e5b, sc);

  // 34
  b.M(b5b, cp);
  b.M(e5b, sc);
  b.M(g5, cp);
  b.M(e5b, sc);
  b.M(f5, cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);

  // 35
  b.P(cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);
  b.M(f5, cp);
  b.M(e5b, sm);
  b.M(e5b, sc);

  // 36
  b.M(b5b, cp);
  b.M(e5b, sc);
  b.M(g5, cp);
  b.M(e5b, sc);
  b.M(f5, cp);
  b.M(c5, sc);
  b.M(b4, cp);
  b.M(c5, sc);

  // 37
  b.P(cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);
  b.M(f5, cp);
  b.M(e5b, sm);
  b.M(e5b, sc);

  // 38
  b.M(b5b, cp);
  b.M(e5b, sc);
  b.M(g5, cp);
  b.M(e5b, sc);
  b.M(f5, cp);
  b.M(c5, sc);
  b.T(e5b, f5, g5, c);

  // 39
  b.P(cp);
  b.M(d5, sc);
  b.M(b4, cp);
  b.M(f5, sc);
  b.P(cp);
  b.M(e5b, sc);
  b.M(d5, cp);
  b.M(e5b, sc);

  // 40
  b.P(cp);
  b.M(d5, sc);
  b.M(c5, cp);
  b.M(b4, sc + sm);
  b.P(sm);
}

#endif // NEVER_BE_ALONE_H
