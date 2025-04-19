// CONFIGURAÇÕES INICIAS
#include "ntMusics.h"
#include "configMusics.h"
#include <IRremote.hpp>

BUZZER = 25;

#define pinoIR 33
uint32_t codeIR[] = {
  //  01          02          03          04          05          06          07          08          09
  0xFE01BF40, 0xFD02BF40, 0xFC03BF40, 0xFB04BF40, 0xFA05BF40, 0xF906BF40, 0xF807BF40, 0xF708BF40, 0xF609BF40
};

int tamanhoCode = (sizeof(codeIR) / sizeof(codeIR[0]));

void setup() {
  pinMode(BUZZER, OUTPUT);
  IrReceiver.begin(pinoIR);
  Serial.begin(9600);
}

void loop() {
  if (IrReceiver.decode()) {
    uint32_t valorIR = (IrReceiver.decodedIRData.decodedRawData);
    Serial.println(valorIR, HEX);
    IrReceiver.resume();

    play_music(valorIR);
  }
}

// Executar Musica
void play_music(uint32_t valorIR) {
  int musica = code(valorIR);
  if (musica == -1) return;

  switch (musica + 1) {
    case 1: RULE(130); break;
    case 2: BAD_APPLE(135); break;
    case 3: ORDER(155); break;
    case 4: NEVER_BE_ALONE(125); break;
    case 5: BASICS_IN_BEHAVIOR(110); break;
    case 6: CARELESS_WHISPER(140); break;
  }
  musica == -1;
}

int code(uint32_t valorIR) {
  for (int i = 0; i <= tamanhoCode; i++) {
    if (valorIR == codeIR[i]) {
      return i;
    }
  }
  return -1;
}
