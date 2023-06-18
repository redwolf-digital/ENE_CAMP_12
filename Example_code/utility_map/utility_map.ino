#define lowADC        0
#define maxADC        1023
#define percentLow    0
#define percentHigh   100

int analogVal = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  analogVal = analogRead(A0);

  unsigned char percentADC = map(analogVal, lowADC, maxADC, percentLow, percentHigh);

  Serial.print("ADC : ");
  Serial.print(analogVal);
  Serial.print("\t MAP : ");
  Serial.println(percentADC);

  delay(1000);
}