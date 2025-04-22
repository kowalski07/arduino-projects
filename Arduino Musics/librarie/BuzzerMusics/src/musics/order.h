#ifndef ORDER_H
#define ORDER_H

#include "../BuzzerMusic.h"
#include "../SoundConstants.h"

inline void ORDER(BuzzerMusic& b) {
  // BPM 155 (DEFAULT)
  b.bpm = 155 / 2;

  // 01
  b.M(e4, sc);
  b.M(b3, sc);
  b.M(e4, sc);
  b.M(b4, sc);
  b.M(e4, sc);
  b.M(b3, sc);
  b.M(e4, sc);
  b.M(b3, sc);
  b.M(e4, sc);
  b.M(b4, sc);
  b.M(e4, sc);
  b.M(b3, sc);

  // 02
  b.M(e4, sc);
  b.M(c4, sc);
  b.M(e4, sc);
  b.bpm /= 1.5;
  b.M(c5, sc);
  b.M(e4, sc);
  b.M(c4, sc);
  b.bpm /= 1.5;
  b.M(e4, sc);
  b.M(c4, sc);
  b.M(e4, sc);
  b.bpm /= 1.5;
  b.M(c5, sc);
  b.bpm /= 1.5;
  b.M(e4, sc);
  b.M(c4, sc);

  // 03
  b.bpm = 155 / 2;
  b.M(e4, cp);
  b.M(f4s, c);
  b.M(e4, sc);
  b.M(g4, sm);
  b.M(g4, c);

  // 04
  b.M(f4s, smp);
  b.M(e4, smp);

  // 05
  b.M(e4, cp);
  b.M(f4s, c);
  b.M(e4, sc);
  b.M(g4, cp);
  b.M(a4, cp);

  // 06
  b.M(g4, smp);
  b.M(f4s, smp);

  // 07
  b.M(e4, cp);
  b.M(f4s, c);
  b.M(e4, sc);
  b.M(g4, cp);
  b.M(a4, cp);

  // 08
  b.M(b4, sm);
  b.M(c5, c);
  b.M(a4, cp);
  b.M(g4, cp);

  // 09
  b.M(a4, sc);
  b.M(b4, sm + cp);
  b.M(c5, sm);

  // 10
  b.M(a4, sc);
  b.M(b4, m);
  b.M(g4, sc);
  b.M(f4s, c);

  // 11
  b.M(e4, cp);
  b.M(f4s, c);
  b.M(e4, sc);
  b.M(g4, sm);
  b.M(g4, c);

  // 12
  b.M(f4s, smp);
  b.M(e4, smp);

  // 13
  b.M(e4, cp);
  b.M(f4s, c);
  b.M(e4, sc);
  b.M(g4, cp);
  b.M(a4, cp);

  // 14
  b.M(g4, smp);
  b.M(f4s, smp);

  // 15
  b.M(e4, cp);
  b.M(f4s, c);
  b.M(e4, sc);
  b.M(g4, cp);
  b.M(a4, cp);

  // 16
  b.M(b4, sm);
  b.M(c5, c);
  b.M(a4, cp);
  b.M(g4, cp);

  // 17
  b.M(a4, sc);
  b.M(b4, sm + cp);
  b.M(c5, sm);

  // 18
  b.M(a4, sc);
  b.M(b4, m + cp);

  // 19
  b.M(e4, sc);
  b.M(g4, sc);
  b.M(f4s, sm);
  b.M(e4, smp + smp);
}

#endif // RULE
