// available only on PIN
// D3 D5 D6 D9 D10 D11
#define LED 3

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for(int i = 0; i < 255; i++) {
    analogWrite(LED, i);
    delay(10);
  }
}