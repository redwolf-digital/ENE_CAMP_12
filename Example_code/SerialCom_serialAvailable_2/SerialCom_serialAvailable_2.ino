int readByte = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0) {
    readByte = Serial.read();

    Serial.print("I received : ");
    Serial.println(readByte, DEC);
  }
}