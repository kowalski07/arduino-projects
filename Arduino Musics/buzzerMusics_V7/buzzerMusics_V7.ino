// CONFIGURAÇÕES INICIAS

#include <BuzzerMusic.h>
#include <IRremote.hpp>

#define IR_PIN 33
uint32_t codeIR[] = {
  //  01          02          03
  0xF50A7F80, 0xE41B7F80, 0xE01F7F80,
  //  04          05          06
  0xF30C7F80, 0xF20D7F80, 0xF10E7F80,
  //  07          08          09
  0xFF007F80, 0xF00F7F80, 0xE6197F80
}; 

int sizeCode = (sizeof(codeIR) / sizeof(codeIR[0]));

BuzzerMusic musicPlayer(25);  // Pino Buzzer

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_PIN);
  musicPlayer.setIRCodes(codeIR, sizeCode);
}

void loop() {
  if (IrReceiver.decode()) {
    uint32_t IRcode = (IrReceiver.decodedIRData.decodedRawData);
    Serial.println(IRcode, HEX);
    IrReceiver.resume();

    musicPlayer.play(IRcode);
  }
}
