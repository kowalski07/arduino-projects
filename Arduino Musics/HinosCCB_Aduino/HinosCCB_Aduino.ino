#include "nt_music.h"

#define soprano 25

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
  Serial.println("Digite o código do hino abaixo:");
  Serial.println();
  Serial.println("[H2] HINO 2");
  Serial.println("[H88] HINO 88");
  Serial.println("[H150] HINO 150");
  Serial.println("[H169] HINO 169");
  Serial.println("[H464] HINO 464");
  Serial.println("--------------------");
  Serial.println();
}

void selectMusic() {
  if (Serial.available() > 0) {
    String code = Serial.readStringUntil('\n');
    code.trim();
    if(musicIsPlaying == 0) {
      if(code == "H2") {
        Serial.println("HINO 2 SELECIONADO.");
        Serial.println();
        enter_bpm(60, 80);
        H002();
      }
      else if(code == "H88") {
        Serial.println("HINO 88 SELECIONADO.");
        Serial.println();
        enter_bpm(66, 80);
        H088();
      }
      else if(code == "H150") {
        Serial.println("HINO 150 SELECIONADO.");
        Serial.println();
        enter_bpm(54, 69);
        H150();
      }
      else if(code == "H169") {
        Serial.println("HINO 169 SELECIONADO.");
        Serial.println();
        enter_bpm(100, 126);
        H169();
      }
        else if(code == "H464") {
        Serial.println("HINO 464 SELECIONADO.");
        Serial.println();
        enter_bpm(60, 72);
        H464();
      }
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
  musicIsPlaying = 1;
}

void loop() {
  selectMusic();
}

// HINOS 

//// HINO 2 - TONALIDADE MI BEMOL MAIOR - COMPASSO QUATERNÁRIO SIMPLES - BPM (60 - 80)

int N002[] = {
  g4,
  g4, g4, a4b, g4,
  g4, f4, e4b,
  e4b, c5, b4b, a4b,
  g4, a4b,
  b4b, e5b, e5b, d5,
  d5, c5, b4b,
  a4b, b4b, g4, e4b,
  f4, f4,
  g4, a4b, b4b, c5,
  c5, b4b, e5b,
  e5b, d5, c5, g4,
  a4b, f4,
  g4, g4, a4b, g4,
  g4, f4, e4b,
  e4b, f4, e4b, d4,
  e4b
};

int T002[] = {
  sm,
  sm, sm, sm, sm,
  m, sm, sm,
  sm, sm, sm, sm,
  mp, sm,
  sm, sm, sm, sm,
  m, sm, sm,
  sm, sm, sm, sm,
  mp, sm,
  sm, sm, sm, sm,
  m, sm, sm,
  smp, c, sm, sm,
  mp, sm,
  sm, sm, sm, sm,
  m, sm, sm,
  sm, sm, sm, sm,
  mp
};

void H002() {
  for(pos = 0; pos < (sizeof(N002) / sizeof(int)); pos++) {
    tempo = (T002[pos] * 60.0) / bpm;
    tone(soprano, N002[pos], tempo);
    delay(tempo * vp);
    noTone(soprano);
  }
  infoMusic();
  musicIsPlaying = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////

//// HINO 88 - TONALIDADE SOL MAIOR - COMPASSO QUATERNÁRIO SIMPLES - BPM (66 - 80)

int N088[] = {
  b4, a4s, b4,
  g4, d4, a4, g4,
  f4s, c5, b4, c5,
  a4, g4s, a4, b4,
  g4, b4, a4s, b4,
  g4, b4, c5, b4,
  e4, g4, a4, c5,
  b4, d4, f4s, a4,
  g4,
  d5, d5, c5s,
  c5, e5, d5, c5,
  b4, b4, b4, b4,
  c5s, a4, b4, c5s,
  d5, d4, e4, f4s,
  g4, b4, a4, b4,
  c5, e5, d5, c5,
  b4, g4, a4, a4,
  g4
};

int T088[] = {
  c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c),
  c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c), c, c, c,
  (m + c)
};

void H088() {
  for(pos = 0; pos < (sizeof(N088) / sizeof(int)); pos++) {
    tempo = (T088[pos] * 60.0) / bpm;
    tone(soprano, N088[pos], tempo);
    delay(tempo * vp);
    noTone(soprano);
  }
  infoMusic();
  musicIsPlaying = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////

//// HINO 150 - TONALIDADE LÁ BEMOL MAIOR - COMPASSO QUATERNÁRIO SIMPLES - BPM (54 - 69)

int N150[] = {
  e4b, a4b,
  c5, b4, c5, b4b,
  a4b, a4b, c5,
  e5b, d5, e5b, d5b,
  c5, c5, c5,
  d5b, d5b, a4b, a4b, b4b, b4,
  c5, d5b, c5,
  c5, b4b, f4, g4,
  a4b
};

int T150[] = {
  c, c,
  c, c, m, sm,
  mp, c, c,
  c, c, m, sm,
  mp, c, c,
  sm, sm, c, c, c, c,
  mp, c, c,
  c, c, m, sm,
  mp
};

void H150() {
  for(pos = 0; pos < (sizeof(N150) / sizeof(int)); pos++) {
    tempo = (T150[pos] * 60.0) / bpm;
    tone(soprano, N150[pos], tempo);
    delay(tempo * vp);
    noTone(soprano);
  }
  infoMusic();
  musicIsPlaying = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////

//// HINO 169 - TONALIDADE LÁ BEMOL MAIOR - COMPASSO BINÁRIO COMPOSTO - BPM (100 - 126)

int N169[] = {
  e4b, f4, e4b, c4, d4b,
  e4b, f4, e4b,
  f4, g4, a4b, b4b, c5, b4b,
  a4b, e4b,
  a4b, g4, a4b, b4b, a4b,
  f4, e4b,
  a4b, c5, b4b, f4, g4, a4b,
  g4,
  e4b, d4, e4b, f4, e4b,
  c5, a4b,
  a4b, b4b, c5, d5b, c5,
  b4b, b4b,
  d5b, c5, b4b, e5b, d5b,
  c5, a4b,
  b4b, c5, d5b, c5, b4b,
  a4b
};

int T169[] = {
  c, c, c, sm, c,
  sm, c, smp,
  c, c, c, c, c, c,
  smp, smp,
  c, c, c, sm, c,
  smp, smp,
  c, c, c, c, c, c,
  mp,
  c, c, c, sm, c,
  smp, smp,
  c, c, c, sm, c,
  smp, smp,
  c, c, c, sm, c,
  smp, smp,
  c, c, c, sm, c,
  mp
};

void H169() {
  for(pos = 0; pos < (sizeof(N169) / sizeof(int)); pos++) {
    tempo = (T169[pos] * 120.0) / bpm;
    tone(soprano, N169[pos], tempo);
    delay(tempo * vp);
    noTone(soprano);
  }
  infoMusic();
  musicIsPlaying = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////

//// HINO 464 - TONALIDADE MI BEMOL MAIOR - COMPASSO TERNÁRIO SIMPLES - BPM (60 - 72)

int N464[] = {
  g4, f4,
  e4b, e4b, g4, b4b,
  f4, f4, g4, b4b,
  c5, b4b, g4, f4, 
  e4b, g4, f4, 
  e4b, e4b, g4, b4b,
  f4, f4, g4, b4b,
  c5, b4b, g4, f4, 
  e4b, b4b,c5,d5,
  e5b, d5, c5, b4b,
  c5, b4b, g4, b4b,c5,d5,
  e5b, d5, c5, b4b,
  e5b, g4, f4,
  e4b, e4b, g4, b4b,
  f4, f4, g4, b4b,
  c5, b4b, g4, f4, 
  e4b
};

int T464[] = {
  c, c,
  sm, sm, c, c,
  sm, sm, c, c,
  sm, sm, c, c,
  m, c, c,
  sm, sm, c, c,
  sm, sm, c, c,
  sm, sm, c, c,
  m, c,c,c,
  sm, sm, c, c,
  c, c, sm, c,c,c,
  sm, sm, c, c,
  m, c, c,
  sm, sm, c, c,
  sm, sm, c, c,
  sm, sm, c, c,
  m+f
};

void H464() {
  for(pos = 0; pos < (sizeof(N464) / sizeof(int)); pos++) {
    if(!((pos == 30) || (pos == 31) || (pos == 32) || (pos == 40) || (pos == 41) || (pos == 42))) {
      tempo = (T464[pos] * 60.0) / bpm;
    } else {
      tempo = (T464[pos] * 60.0) / bpm * t;
    }
    tone(soprano, N464[pos], tempo);
    delay(tempo * vp);
    noTone(soprano);
  }
  infoMusic();
  musicIsPlaying = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////
