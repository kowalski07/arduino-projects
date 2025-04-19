#include "nt_music.h"

#define soprano 7

int bpm; // Andamento (velocidade em batimentos por minuto)

void setup() {
  Serial.begin(9600);
  pinMode(soprano, OUTPUT);
  noTone(soprano);

  infoMusic();
}

void infoMusic() {
  Serial.println();
  Serial.println("--------------------");
  Serial.println("Digite o código da música abaixo:");
  Serial.println();
  Serial.println("[F01] Five Night's at Freddy 01");
  Serial.println("[AR] RuLe - Ado");
  Serial.println("[BA] Bad Apple");
  Serial.println("--------------------");
  Serial.println();
}

void selectMusic() {
  if (Serial.available() > 0) {
    String code = Serial.readStringUntil('\n');
    code.trim();
    
    if(code == "F01") {
      Serial.println("Five Night's at Freddy 01 SELECIONADO.");
      Serial.println();
      enter_bpm(100, 120);
      //F01();
    }
    else if(code == "AR") {
      Serial.println("RuLe - Ado SELECIONADO.");
      Serial.println();
      enter_bpm(120, 140);
      //AR();
    }
    else if(code == "BA") {
      Serial.println("Bad Apple SELECIONADO.");
      Serial.println();
      enter_bpm(125, 145);
      //BA();
    }
  }
}

void enter_bpm(int min_bpm, int max_bpm) {
  Serial.print("Insira a velocidade desejada (");
  Serial.print(min_bpm);
  Serial.print(" - ");
  Serial.print(max_bpm);
  Serial.println(" bpm) ou [A] para definir a média:");

  while(true) {
    if(Serial.available() > 0) {
      String input = Serial.readStringUntil('\n');
      input.trim();

      if(input == "A") {
        bpm = (min_bpm + max_bpm) / 2;
        Serial.print("Velocidade média definida em ");
        Serial.print(bpm);
        Serial.println(" bpm");
        break;
      }

      int in_bpm = input.toInt();
      if((in_bpm >= min_bpm) && (in_bpm <= max_bpm)) {
        bpm = in_bpm;
        Serial.print("Velocidade definida em ");
        Serial.print(bpm);
        Serial.println(" bpm");
        break;
      } else {
        Serial.println("Valor inválido. Por favor, insira um número válido ou [A] para inserir a média.");
      }
    }
  }
}

void loop() {
  selectMusic();
}

/*
void FNAF_01() {
  //01
  n(b4, sm);
  n(d5b, cp);
  n(b4, sc);
  n(a4b, sm);
  n(a4b, sm);
  //02
  n(a4b, cp);
  n(g4b, sc);
  n(a4b, cp);
  n(a4, sc);
  n(a4b, m);
  //03
  n(a4, sm);
  n(g4b, cp);
  n(b4, sc);
  n(a4b, m);
  //04
  n(e4, sm);
  n(d4b, cp);
  n(e4b, sc);
  n(c4, m);
  //05
  p(c);
  n(e4, c);
  n(e4b, c);
  n(d4b, c);
  n(b3, c);
  n(e4, c);
  n(a3b, c);
  n(d4b, c);
  //06
  n(b3, c);
  n(a3, c);
  n(a3b, c);
  n(g3b, c);
  n(a3b, c);
  n(d3b, c);
  n(e3, sm);
  //07
  n(g3b, c);
  n(a3, c);
  n(a3b, c);
  n(g3b, c);
  n(a3b, c);
  n(d3b, c);
  n(e3, cp);
  n(e3b, sc);
  //08
  n(g3b, c);
  n(a3, c);
  n(a3b, c);
  n(g3b, c);
  n(e3, c);
  n(e3b, c);
  n(d3b, c);
  n(e3b, c);

  //09
  n(d3b, c);
  n(e4, sc);
  n(e4, sc);
  n(e4b, c);
  n(d4b, sc);
  n(d4b, sc);
  n(b3, c);
  n(e4, c);
  n(a3b, c);
  n(d4b, c);
  //10
  n(b3, c);
  n(a3, c);
  n(a3b, c);
  n(g3b, c);
  n(a3b, c);
  n(d3b, c);
  n(e3, sm);
  //11
  n(g3b, c);
  n(a3, c);
  n(a3b, c);
  n(g3b, c);
  n(a3b, c);
  n(d3b, c);
  n(e3, sm);
  //12
  n(g3b, c);
  n(a3, c);
  n(a3b, c);
  n(g3b, c);
  n(a3b, c);
  n(b3, c);
  n(c4, sm);

  //13
  p(c);
  n(a4b, c);
  t(a4b, g4b, e4, scp);
  n(g4b, sc);
  n(e4, c);
  n(a4b, c);
  t(a4b, g4b, e4, scp);
  n(g4b, sc);
  //14
  n(e4, c);
  n(a4b, c);
  n(a4b, sc);
  n(g4b, sc);
  n(e4, sc);
  n(g4b, sc);
  n(a4b, sc);
  n(a4, c);
  n(e4, (sm + sc));
  //15
  p(c);
  n(e4, sc);
  n(e4, sc);
  t(e4, e4b, d4b, scp);
  n(d4b, c);
  n(d4b, sc);
  n(e4, sc);
  n(e4, sc);
  t(e4, e4b, d4b, scp);
  n(d4b, cp); //16 legato
  n(e4, sc);
  n(d4b, sc);
  n(e4, sc);
  n(d4b, sc);
  n(e4, sc);
  n(g4b, sc);
  n(e4b, c);
  n(d4b, c);
  n(e4, sc);
  n(e4b, cp);

  //17
  p(c);
  n(a4b, sc);
  n(a4b, sc);
  t(a4b, g4b, e4, scp);
  n(g4b, sc);
  n(e4, c);
  n(a4b, sc);
  n(a4b, sc);
  t(a4b, g4b, e4, scp);
  n(g4b, sc);
  //18
  n(e4, c);
  n(a4b, c);
  n(a4b, sc);
  n(g4b, sc);
  n(e4, sc);
  n(g4b, sc);
  n(a4b, sc);
  n(a4, c);
  n(e4, (sm + sc));
  //19
  p(c);
  n(e4, sc);
  n(e4, sc);
  t(e4, e4b, d4b, scp);
  n(d4b, c);
  n(d4b, sc);
  n(e4, sc);
  n(e4, sc);
  t(e4, e4b, d4b, scp);
  n(d4b, cp); //20 legato
  n(e4, sc);
  n(e4, c);
  n(d4b, sc);
  n(e4, sc);
  n(g4b, sc);
  n(e4b, c);



  n(a4b, c);
  n(a4b, c);
  n(a4, c);
  //21
  n(g4b, sm);
  n(e4, (m + cp));
  n(d4b, sc);
  //22
  n(e4, c);
  n(e4, c);
  n(e4, sc);
  n(g4b, c);
  n(a4b, cp);

  n(a4b, c);
  n(a4b, c);
  n(a4, c);
  //23
  n(g4b, sm);
  n(e4, (m + c));
  n(d4b, sc);
  n(d4b, sc);
  //24
  n(e4, c);
  n(e4, c);
  n(e4, sc);
  n(g4b, c);
  n(e4b, cp);

  n(a4b, c);
  n(a4b, c);
  n(a4, c);
  //25
  n(g4b, sm);
  n(e4, (m + cp));
  n(d4b, sc);
  //26
  n(e4, c);
  n(e4, c);
  n(e4, sc);
  n(g4b, c);
  n(a4b, cp);

  n(a4b, c);
  n(a4b, c);
  n(a4, c);
  //27
  n(g4b, sm);
  n(e4, (m + c));
  n(d4b, sc);
  n(d4b, sc);
  //28
  n(e4, c);
  n(e4, c);
  n(e4, sc);
  n(g4b, c);
  n(e4b, cp);

  n(a4b, c);
  n(a4b, c);
  n(a4, c);
  //29
  n(g4b, sm);
  n(e4, (mp + mp + c));
  n(d4b, c);
}
*/

//// RuLe Ado - TONALIDADE RÉ BEMOL MAIOR - COMPASSO QUATERNÁRIO SIMPLES - BPM (120 - 140)

int NAR[] = {
  b4, a4b, b4, a4b, b4, a4b, e5b, d5,
  b4, d5, e5b, d5b, b4b, b4, b4b,b4b,b4b,
  b4, a4b, b4, a4b, b4, a4b, e5b, d5,
  d5, d5, d5, d5b, p,

  b4, a4b, g4b, a4b, d5,
  d5, d5, d5, d5b, p, a4b,
  b4, a4b, g4b, a4b, d4,
  d4, d4, d4, d4b, a4b,
  b4, a4b, g4b, a4b, d5,
  d5, d5, d5, d5b, p, a4b,
  b4, a4b, g4b, a4b, d4,
  d4, d4, d4, d4b, p, e4b,

  b4, a4b, e4b, b4, a4b, d4,
  e4b, e4b, d4, e4b, b4, a4b, e4b,
  a4b, a4b, g4b, g4b, d4b, b3b, d4b, d4b,
  b3b, p, e4b,
  b4, a4b, e4b, b4, a4b, d4,
  e4b, e4b, d4, e4b, b4, a4b, b4,
  d5b, d5b, d5b, d5b, d5b, b4, e5b, d5b,
  a4b, p, e4b,

  b4, a4b, e4b, b4, a4b, d4,
  e4b, e4b, d4, e4b, b4, a4b, e4b,
  a4b, a4b, g4b, g4b, d4b, b3b, d4b, d4b,
  b3b, p, e4b,
  b4, a4b, e4b, b4, a4b, d4,
  e4b, e4b, d4, e4b, b4, a4b, b4,
  d5b, d5b, d5b, d5b, d5b, b4, e5b, d5b,
  a4b, p, a4b, a4b
};

int TAR[] = {
  c, c, c, c, c, c, c, c+c,
  c, c, c, c, c, c, sc,sc,sc,
  c, c, c, c, c, c, c, c+c,
  c, c, c, sm, psm,

  sm, sm, c, sm, c+c,
  c, c, c, sm, pc, c,
  sm, sm, c, sm, c+c,
  c, c, c, sm, pc, c,
  sm, sm, c, sm, c+c,
  c, c, c, sm, pc, c,
  sm, sm, c, sm, c+c,
  c, c, c, c, psm, c,

  c, sm, c, c, sm, c,
  c, c, c, c, c, sm, c,
  c, c, c, c, c, c, c, c, 
  mp, pc, c,
  c, sm, c, c, sm, c,
  c, c, c, c, c, sm, c,
  c, c, c, c, c, c, c, c, 
  mp, pc, c,

  c, sm, c, c, sm, c,
  c, c, c, c, c, sm, c,
  c, c, c, c, c, c, c, c, 
  mp, pc, c,
  c, sm, c, c, sm, c,
  c, c, c, c, c, sm, c,
  c, c, c, c, c, c, c, c+c, 
  sm, psm, sm, c

};

bool posTercina(int pos) {
  int posT[] = {15, 16, 17};

  for(int i = 0; i < sizeof(posT) / sizeof(posT[0]); i++) {
    if(pos != posT[i]) {
      return true;
    }
  }
  return false;
}

void AR() {
  for(pos = 0; pos < (sizeof(NAR) / sizeof(long)); pos++) {
    if(posTercina(pos)) {
      tempo = (TAR[pos] * 60.0) / bpm;
    } else {
      tempo = (TAR[pos] * 60.0) / bpm * t;
    }
    tone(soprano, NAR[pos], tempo);
    delay(tempo * vp);
    noTone(soprano);
  }
  infoMusic();
}

////////////////////////////////////////////////////////////////////////////////////////////////

//// Bad Apple - TONALIDADE RÉ BEMOL MAIOR - COMPASSO QUATERNÁRIO SIMPLES - BPM (125 - 135)

int NBA[] = {
  e3b, e4b, e4b, d4b, e4b, e3b, e4b, e4b, d4b, e4b,
  e3b, e4b, e4b, d4b, e4b, g4b, e4b, g4b, a4b, g4b, a4b,

  e3b, e4b, e4b, d4b, e4b, e3b, e4b, e4b, d4b, e4b,
  e3b, e4b, e4b, d4b, e4b, g4b, e4b, g4b, a4b, g4b, a4b,

  e3b, e4b, e4b, d4b, e4b, e3b, e4b, e4b, d4b, e4b,
  e3b, e4b, e4b, d4b, e4b, g4b, e4b, g4b, a4b, g4b, a4b,

  e3b, e4b, e4b, d4b, e4b, e3b, e4b, e4b, d4b, e4b,
  e3b, e4b, e4b, d4b, e4b, g4b, e4b, g4b, a4b, g4b, a4b,

  e4b, f4, g4b, a4b, b4b, e5b, d5b,
  b4b, e4b, b4b, a4b, g4b, f4,
  e4b, f4, g4b, a4b, b4b, a4b, g4b,
  f4, e4b, f4, e4b, f4, e4b, d4, f4,
  e4b, f4, g4b, a4b, b4b, e5b, d5b,
  b4b, e4b, b4b, a4b, g4b, f4,
  e4b, f4, g4b, a4b, b4b, a4b, g4b,
  f4, g4b, a4b, b4b,

  e4b, f4, g4b, a4b, b4b, e5b, d5b,
  b4b, e4b, b4b, a4b, g4b, f4,
  e4b, f4, g4b, a4b, b4b, a4b, g4b,
  f4, e4b, f4, e4b, f4, e4b, d4, f4,
  e4b, f4, g4b, a4b, b4b, e5b, d5b,
  b4b, e4b, b4b, a4b, g4b, f4,
  e4b, f4, g4b, a4b, b4b, a4b, g4b,
  f4, g4b, a4b, b4b,

  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  a4b, g4b, f4, d4b, e4b, e4b, e4b,
  g4b, g4b, a4b, b4b, e4b, b4b, d5b,

  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  a4b, g4b, f4, d4b, e4b, e4b, e4b,
  g4b, g4b, a4b, b4b, e4b, b4b, d5b,

  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  a4b, g4b, f4, d4b, e4b, e4b, e4b,
  g4b, g4b, a4b, b4b, e4b, b4b, d5b,

  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  d5b, e5b, b4b, a4b, b4b, e5b, f5,
  g5b, f5, e5b, d5b, b4b, a4b, b4b,
  a4b, g4b, f4, d4b, e4b, b4b, d5b,


  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  a4b, g4b, f4, d4b, e4b, e4b, e4b,
  g4b, g4b, a4b, b4b, e4b, b4b, d5b,

  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  a4b, g4b, f4, d4b, e4b, e4b, e4b,
  g4b, g4b, a4b, b4b, e4b, b4b, d5b,

  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  a4b, g4b, f4, d4b, e4b, e4b, e4b,
  g4b, g4b, a4b, b4b, e4b, b4b, d5b,

  d5b, e5b, b4b, a4b, b4b, a4b, b4b,
  d5b, e5b, b4b, a4b, b4b, e5b, f5,
  g5b, f5, e5b, d5b, b4b, a4b, b4b,
  a4b, g4b, f4, d4b, e4b, p,

  e3b, e4b, e4b, d4b, e4b, e3b, e4b, e4b, d4b, e4b,
  e3b, e4b, e4b, d4b, e4b, g4b, e4b, g4b, a4b, g4b, a4b,

  e3b, e4b, e4b, d4b, e4b, e3b, e4b, e4b, d4b, e4b,
  e3b, e4b, e4b, d4b, e4b, g4b, e4b, g4b, a4b, g4b, a4b,

  e3b, e4b, e4b, d4b, e4b, e3b, e4b, e4b, d4b, e4b,
  e3b, e4b, e4b, d4b, e4b, g4b, e4b, g4b, a4b, g4b, a4b,

  e3b, e4b, e4b, d4b, e4b, e3b, e4b, e4b, d4b, e4b,
  e3b, e4b, e4b, d4b, e4b, g4b, e4b, g4b, a4b, g4b, a4b,

  e4b
};

int TBA[] = {
  cp, c, sc, sc, sc, cp, c, sc, sc, sc,
  cp, c, sc, sc, sc, c, sc, sc, c, sc, sc,

  cp, c, sc, sc, sc, cp, c, sc, sc, sc,
  cp, c, sc, sc, sc, c, sc, sc, c, sc, sc,

  cp, c, sc, sc, sc, cp, c, sc, sc, sc,
  cp, c, sc, sc, sc, c, sc, sc, c, sc, sc,

  cp, c, sc, sc, sc, cp, c, sc, sc, sc,
  cp, c, sc, sc, sc, c, sc, sc, c, sc, sc,

  c, c, c, c, sm, c, c,
  sm, sm, c, c, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, c, c, c, c,
  c, c, c, c, sm, c, c,
  sm, sm, c, c, c, c,
  c, c, c, c, sm, c, c,
  sm, sm, sm, sm,

  c, c, c, c, sm, c, c,
  sm, sm, c, c, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, c, c, c, c,
  c, c, c, c, sm, c, c,
  sm, sm, c, c, c, c,
  c, c, c, c, sm, c, c,
  sm, sm, sm, sm,

  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,

  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,

  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,

  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,

  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,

  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,

  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,

  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, c, c,
  c, c, c, c, sm, psm,

  cp, c, sc, sc, sc, cp, c, sc, sc, sc,
  cp, c, sc, sc, sc, c, sc, sc, c, sc, sc,

  cp, c, sc, sc, sc, cp, c, sc, sc, sc,
  cp, c, sc, sc, sc, c, sc, sc, c, sc, sc,

  cp, c, sc, sc, sc, cp, c, sc, sc, sc,
  cp, c, sc, sc, sc, c, sc, sc, c, sc, sc,

  cp, c, sc, sc, sc, cp, c, sc, sc, sc,
  cp, c, sc, sc, sc, c, sc, sc, c, sc, sc,

  sm
};

void BA() {
  for(pos = 0; pos < (sizeof(NBA) / sizeof(int)); pos++) {
    tempo = (TBA[pos] * 60.0) / bpm;
    tone(soprano, NBA[pos], tempo);
    delay(tempo * vp);
    noTone(soprano);
  }
  infoMusic();
}

////////////////////////////////////////////////////////////////////////////////////////////////
