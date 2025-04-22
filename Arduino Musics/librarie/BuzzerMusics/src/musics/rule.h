#ifndef RULE_H
#define RULE_H

#include "../BuzzerMusic.h"
#include "../SoundConstants.h"

inline void RULE(BuzzerMusic& b) {
  // BPM 130 (DEFAULT)
  b.bpm = 130;

  //01
  b.M(b4, c);
  b.M(a4b, c);
  b.M(b4, c);
  b.M(a4b, c);
  b.M(b4, c);
  b.M(a4b, c);
  b.M(e5b, c);
  b.M(d5, (c + c));
  //02
  b.M(b4, c);
  b.M(d5, c);
  b.M(e5b, c);
  b.M(d5b, c);
  b.M(b4b, c);
  b.M(b4, c);
  b.T(b4b, b4b, b4b, sc);
  //03
  b.M(b4, c);
  b.M(a4b, c);
  b.M(b4, c);
  b.M(a4b, c);
  b.M(b4, c);
  b.M(a4b, c);
  b.M(e5b, c);
  b.M(d5, (c + c));
  //04
  b.M(d5, c);
  b.M(d5, c);
  b.M(d5, c);
  b.M(d5b, sm);
  b.P(sm);

  //05
  b.M(b4, sm);
  b.M(a4b, sm);
  b.M(g4b, c);
  b.M(a4b, sm);
  b.M(d5, (c + c));
  //06
  b.M(d5, c);
  b.M(d5, c);
  b.M(d5, c);
  b.M(d5b, sm);
  b.P(c);
  b.M(a4b, c);
  //07
  b.M(b4, sm);
  b.M(a4b, sm);
  b.M(g4b, c);
  b.M(a4b, sm);
  b.M(d4, (c + c));
  //08
  b.M(d4, c);
  b.M(d4, c);
  b.M(d4, c);
  b.M(d4b, sm);
  b.P(c);
  b.M(a4b, c);
  //09
  b.M(b4, sm);
  b.M(a4b, sm);
  b.M(g4b, c);
  b.M(a4b, sm);
  b.M(d5, (c + c));
  //10
  b.M(d5, c);
  b.M(d5, c);
  b.M(d5, c);
  b.M(d5b, sm);
  b.P(c);
  b.M(a4b, c);
  //11
  b.M(b4, sm);
  b.M(a4b, sm);
  b.M(g4b, c);
  b.M(a4b, sm);
  b.M(d4, (c + c));
  //12
  b.M(d4, c);
  b.M(d4, c);
  b.M(d4, c);
  b.M(d4b, c);
  b.P(sm);

  b.M(e4b, c);
  //13
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(e4b, c);
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(d4, c);
  //14
  b.M(e4b, c);
  b.M(e4b, c);
  b.M(d4, c);
  b.M(e4b, c);
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(e4b, c);
    //15
  b.M(a4b, c);
  b.M(a4b, c);
  b.M(g4b, c);
  b.M(g4b, c);
  b.M(d4b, c);
  b.M(b3, c);
  b.M(d4b, c);
  b.M(d4b, c);
  //16 legato
  b.M(b3, mp);
  b.P(c);
  b.M(e4b, c);
  //17
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(e4b, c);
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(d4, c);
  //18
  b.M(e4b, c);
  b.M(e4b, c);
  b.M(d4, c);
  b.M(e4b, c);
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(b4, c);
  //19
  b.M(d5b, c);
  b.M(d5b, c);
  b.M(d5b, c);
  b.M(d5b, c);
  b.M(d5b, c);
  b.M(b4, c);
  b.M(e5b, c);
  b.M(d5b, c);
  //20 legato
  b.M(a4b, mp);
  b.P(c);
  b.M(e4b, c);
  //21
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(e4b, c);
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(d4, c);
  //22
  b.M(e4b, c);
  b.M(e4b, c);
  b.M(d4, c);
  b.M(e4b, c);
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(e4b, c);
  //23
  b.M(a4b, c);
  b.M(a4b, c);
  b.M(g4b, c);
  b.M(g4b, c);
  b.M(d4b, c);
  b.M(b3, c);
  b.M(d4b, c);
  b.M(d4b, c);
  //24 legato
  b.M(b3, mp);
  b.P(c);
  b.M(e4b, c);
  //25
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(e4b, c);
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(d4, c);
  //26
  b.M(e4b, c);
  b.M(e4b, c);
  b.M(d4, c);
  b.M(e4b, c);
  b.M(b4, c);
  b.M(a4b, sm);
  b.M(b4, c);
  //27
  b.M(d5b, c);
  b.M(d5b, c);
  b.M(d5b, c);
  b.M(d5b, c);
  b.M(d5b, c);
  b.M(b4, c);
  b.M(e5b, c);
  b.M(d5b, (c + c));
  //28
  b.M(a4b, sm);
  b.P(sm);
  b.P(sc);

  b.M(a4b, cp);
  b.M(a4b, c);
  //29
  b.M(b4, c);
  b.M(b4b, sc);
  b.M(b4, c);
  b.M(b4, c);
  b.M(b4, sc);
  b.T(b4, b4, b4b, scp);
  b.M(b4, c);
  b.M(b4, sc);
  b.M(b4, c);
  //30
  b.M(b4, c);
  b.M(b4, sc);
  b.M(b4, c);
  b.M(d5b, sc);
  b.M(b4, c);
  b.M(e5b, sm);
  b.P(c);
  b.M(b4b, sc);
  b.M(b4b, sc);
  //31
  b.M(b4, cp);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, c);
  b.M(b4, sc);
  b.M(b4, c);
  b.M(b4, cp);
  b.M(a4b, sc);
  b.M(a4b, sc);
  //32
  b.T(b4, b4, b4b, scp);
  b.M(b4, c);
  b.M(b4, sc);
  b.M(b4, c);
  b.M(a4b, sm);
  b.P(c);
  b.M(a4b, sc);
  b.M(a4b, sc);
  //33
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(d5b, sc);
  b.M(b4, c);
  b.M(b4, sc);
  b.T(b4, b4, b4, scp);
  b.M(b4, c);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, sc);
  //34
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(d5b, sc);
  b.M(b4, c);
  b.M(e5b, sm);
  b.P(c);
  b.M(a4b, sc);
  b.M(a4b, sc);
  //35
  b.M(b4, sc);
  b.M(b4, c);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, sc);
  b.M(b4, c);
  b.M(e5b, c);
  b.M(b4, sc);
  b.M(b4, c);
  b.M(b4, c);
  b.M(b4b, sc);
  //36
  b.M(b4, c);
  b.M(b4b, sc);
  b.M(b4, c);
  b.M(b4, sc);
  b.M(a4b, sm);

  //Coro
  b.M(e4b, c);
  b.M(a4b, c);
  b.M(b4b, c);
  //37
  b.M(b4, smp);
  b.M(e4b, c);
  b.M(a4b, c);
  b.M(b4b, c);
  b.M(b4, sm);
  //38
  b.M(g4, c);
  b.M(a4b, c);
  b.M(b4b, c);
  b.M(b4, sm);
  b.M(a4b, c);
  b.M(a4b, c);
  b.M(a4b, c);
  //39
  b.M(e5b, sm);
  b.M(d5b, c);
  b.M(e5b, sm);
  b.M(d5b, c);
  b.M(e5b, sm);
  //40
  b.M(b4, m);
  b.P(c);

  b.M(e4b, c);
  b.M(a4b, c);
  b.M(b4b, c);
  //41
  b.M(b4, smp);
  b.M(e4b, c);
  b.M(a4b, c);
  b.M(b4b, c);
  b.M(b4, sm);
  //42
  b.M(g4, c);
  b.M(a4b, c);
  b.M(b4b, c);
  b.M(b4, sm);
  b.M(a4b, c);
  b.M(a4b, c);
  b.M(a4b, c);
  //43
  b.M(e5b, sm);
  b.M(d5b, c);
  b.M(e5b, sm);
  b.M(d5b, c);
  b.M(e5b, sm);
  //44
  b.M(b4, m);
  b.P(sm);
  b.P(sm);

  //45
  b.M(b4, c);
  b.M(b4, c);
  b.M(b4, c);
  b.M(b4, c);
  b.M(b4, c);
  b.M(b4, c);
  b.M(b4, c);
  b.M(b4, c);
  //46
  b.M(b4b, c);
  b.M(b4b, c);
  b.M(b4b, c);
  b.M(b4b, c);
  b.M(a4, c);
  b.M(a4, c);
  b.M(a4, c);
  b.M(a4, c);
  //47
  b.M(a4b, m);
  b.P(sm);
  b.P(sm);

  //48
  b.M(b4, sm);
  b.M(a4b, sm);
  b.M(g4b, c);
  b.M(a4b, sm);
  b.M(d5, (c + c));
  //49
  b.M(d5, c);
  b.M(d5, c);
  b.M(d5, c);
  b.M(d5b, sm);
  b.P(c);
  b.M(a4b, c);
  //50
  b.M(b4, sm);
  b.M(a4b, sm);
  b.M(g4b, c);
  b.M(a4b, sm);
  b.M(d4, (c + c));
  //51
  b.M(d4, c);
  b.M(d4, c);
  b.M(d4, c);
  b.M(d4b, sm);
  b.P(c);
  b.M(a3b, c);
  //52
  b.M(b3, sm);
  b.M(a3b, sm);
  b.M(g3b, c);
  b.M(a3b, sm);
  b.M(d4, (c + c));
  //53
  b.M(d4, c);
  b.M(d4, c);
  b.M(d4, c);
  b.M(d4b, sm);
  b.P(c);
  b.M(a3b, c);
  //54
  b.M(b3, sm);
  b.M(a3b, sm);
  b.M(g3b, c);
  b.M(a3b, sm);
  b.M(d3, (c + c));
  //55
  b.M(d3, c);
  b.M(d3, c);
  b.M(d3, c);
  b.M(d3b, c);
  b.P(sm);

  b.M(a4b, c);
  //56
  b.M(b4, sm);
  b.M(a4b, sm);
  b.M(g4b, c);
  b.M(a4b, c);
}

#endif // RULE
