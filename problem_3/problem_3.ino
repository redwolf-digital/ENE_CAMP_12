#define LED 3

void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  for(int i=0; i<255; i++) {
    analogWrite(LED, i);
    delay(5); 
  }

  for(int i=0; i<255; i++) {
    analogWrite(LED, 254-i);
    delay(5); 
  }
}
