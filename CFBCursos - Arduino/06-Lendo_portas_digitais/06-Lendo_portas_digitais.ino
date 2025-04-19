#define led 4
#define btn 3
int btnclicado = 0;
int btnliberado = 0;

void trocaLed() {
  if(digitalRead(btn) == HIGH) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}

void keyup() {
  if((btnclicado == 1) && (btnliberado == 1)) {
    btnclicado = 0;
    btnliberado = 0;
    trocaLed();
  }
}

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, HIGH);
}

void loop() {
  if(digitalWrite(btn) == HIGH) {
    btnclicado = 1;
    btnliberado = 0;
  } else {
    btnliberado = 1;
  }
  keyup();
}
