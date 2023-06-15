#define LED 13
#define Button 2

bool flag = 0;

void setup() {
  pinMode(Button, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  if(digitalRead(Button) == LOW) {
    flag = !flag;
    delay(250);
  }

  if(flag == 1) {
    digitalWrite(LED, HIGH);
  }else {
    digitalWrite(LED, LOW);
  }
}
