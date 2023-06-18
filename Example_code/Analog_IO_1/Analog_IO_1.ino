int AnalogValue = 0;
float voltConv = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  AnalogValue = analogRead(A0);
  voltConv = AnalogValue*(5/1023);

  Serial.print("Analog Value : ");
  Serial.print(AnalogValue);
  Serial.print("\t Volt : ");
  Serial.println(voltConv);
  delay(1000);
}