int num;
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};
const byte BIT_NUM = 8;

void setup() {
  Serial.begin(9600);

  for(int i = 0; i < BIT_NUM; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  if(Serial.available() > 0) {
    num = Serial.parseInt();
    
    if(num < 0 || num > 255) {
      Serial.println("Número invalido!");
      return;
    }

    Serial.print("Binário de ");
    Serial.print(num);
    Serial.print(": ");

    for(int j = 7; j >= 0; j--) {
      int bit = (num >> j) & 1;
      Serial.print(bit);
      digitalWrite(leds[7 - j], bit);
    }
    Serial.println();
  }
}