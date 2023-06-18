#define INPUT_PIN   2
#define LED         13

void setup() {
  pinMode(INPUT_PIN, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  if(figitalRead(INPUT_PIN) == HIGH) {
    digitalWrite(LED, HIGH);
  }else {
    digitalWrite(LED, LOW);
  }
}