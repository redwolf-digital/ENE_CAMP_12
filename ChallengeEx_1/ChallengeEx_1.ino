#define pole1 2
#define pole2 3
#define button 4

void setup() {
  pinMode(pole1, OUTPUT);
  pinMode(pole2, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {

  if(digitalRead(button) == LOW) {
    digitalWrite(pole1, LOW);
    digitalWrite(pole2, HIGH);
    delay(200);
    digitalWrite(pole2, LOW);
    delay(200);
  } else {
    digitalWrite(pole1, HIGH);
    digitalWrite(pole2, LOW);
    delay(200);
    digitalWrite(pole1, LOW);
    digitalWrite(pole2, HIGH);
    delay(200);
  }
}
