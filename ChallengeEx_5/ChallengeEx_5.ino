unsigned int analogVal;
unsigned char level;

void setup() {
  for(unsigned char i = 2; i < 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  analogVal = analogRead(A0);
  
  level = map(analogVal, 0, 1023, 0, 5);
  for(unsigned char i = 2; i < 2+level; i++) {
    digitalWrite(i, HIGH);
  }
  
  //reset all LED
  for(unsigned char i = 2; i < 7; i++) {
    digitalWrite(i, LOW);
  }
}