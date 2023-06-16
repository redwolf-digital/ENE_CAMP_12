#define LED 3

unsigned int analogValue = 0;

void setup() {
  pinMode(LED, OUTPUT);

}

void loop() {
  analogValue = analogRead(A0);

  unsigned char pwmValue = map(analogValue, 0, 1023, 0, 255);
  analogWrite(LED, pwmValue);
}
