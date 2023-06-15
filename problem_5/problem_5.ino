#define LED         3
#define Threshold   10

void setup() {
  pinMode(LED, OUTPUT);

}

void loop() {
  if(analogRead(A0) <= Threshold) {
    digitalWrite(LED, HIGH);
  }else {
    digitalWrite(LED, LOW);
  }

}
