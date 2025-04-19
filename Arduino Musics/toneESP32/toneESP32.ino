const int buzzerPin = 25;

// Função "tone" improvisada
void toneESP32(int pin, int freq, int duration) {
  int period = 1000000 / freq; // período em microssegundos
  int pulse = period / 2;      // 50% duty cycle
  long cycles = (long)freq * duration / 1000;

  for (long i = 0; i < cycles; i++) {
    digitalWrite(pin, HIGH);
    delayMicroseconds(pulse);
    digitalWrite(pin, LOW);
    delayMicroseconds(pulse);
  }
}

// Função para silenciar o buzzer
void noToneESP32(int pin) {
  digitalWrite(pin, LOW);
}

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Toca uma escala simples (Dó, Ré, Mi, Fá, Sol, Lá, Si, Dó)
  toneESP32(buzzerPin, 262, 300); // C4
  delay(100);
  toneESP32(buzzerPin, 294, 300); // D4
  delay(100);
  toneESP32(buzzerPin, 330, 300); // E4
  delay(100);
  toneESP32(buzzerPin, 349, 300); // F4
  delay(100);
  toneESP32(buzzerPin, 392, 300); // G4
  delay(100);
  toneESP32(buzzerPin, 440, 300); // A4
  delay(100);
  toneESP32(buzzerPin, 494, 300); // B4
  delay(100);
  toneESP32(buzzerPin, 523, 600); // C5
  delay(500);

  noToneESP32(buzzerPin);
  delay(2000); // Espera antes de repetir
}
