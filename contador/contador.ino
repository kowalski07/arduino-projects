#define ldr A0
int vldr = 0;

#define SEGS 7
#define NUMS 10
byte segs[SEGS] = { 7, 8, 9, 10, 11, 12, 13 };
byte nums[NUMS][SEGS] = {
  // a, b, c, d, e, f, g
  { 0, 0, 0, 0, 0, 0, 0 },  // 00
  { 0, 1, 1, 0, 0, 0, 0 },  // 01
  { 1, 1, 0, 1, 1, 0, 1 },  // 02
  { 1, 1, 1, 1, 0, 0, 1 },  // 03
  { 0, 1, 1, 0, 0, 1, 1 },  // 04
  { 1, 0, 1, 1, 0, 1, 1 },  // 05
  { 1, 0, 1, 1, 1, 1, 1 },  // 06
  { 1, 1, 1, 0, 0, 0, 0 },  // 07
  { 1, 1, 1, 1, 1, 1, 1 },  // 08
  { 1, 1, 1, 1, 0, 1, 1 },  // 09
};

void setup() {
  pinMode(ldr, INPUT);
  for (int i = 0; i < SEGS; i++) {
    pinMode(segs[i], OUTPUT);
    digitalWrite(segs[i], nums[0][i]);
  }
  Serial.begin(9600);
}

byte lock;
byte cont;

void loop() {
  vldr = map(analogRead(ldr), 0, 1024, 0, 2);
  if (vldr > 0) {
    lock = 1;
  }
  if ((vldr == 0) && (lock == 1)) {
    cont++;
    lock = 0;
  }
  if (cont > 9) {
    cont = 0;
  }
  for (int i = 0; i < SEGS; i++) {
    digitalWrite(segs[i], nums[cont][i]);
  }
  Serial.println(vldr);
  delay(100);
}