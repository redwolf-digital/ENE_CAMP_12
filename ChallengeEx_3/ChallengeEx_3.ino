#define BUTTON	8

void setup() {
  for(unsigned char i = 2; i < 7; i++) {
    pinMode(i, OUTPUT);
  }

  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(BUTTON) == LOW) {
    for(unsigned char i = 2; i < 8; i++) {
      digitalWrite(i, HIGH);
      digitalWrite(i-1, LOW);
      delay(200);
    }
  }
  else {
    for(unsigned char i = 2; i < 8; i++) {
      digitalWrite(8-i, HIGH);
      digitalWrite(9-i, LOW);
      delay(200);
    }
  }
}