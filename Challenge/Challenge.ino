#define LED1 13
#define LED2 12

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String WizardOrder = Serial.readString(); // Read the incoming serial data
    WizardOrder.trim(); // Remove any leading/trailing whitespace
    
    if (WizardOrder.equalsIgnoreCase("LUMOS")) { //Ignore upper/lower case
      digitalWrite(LED1, !digitalRead(LED1));
      digitalWrite(LED2, !digitalRead(LED2));
    }
  }
  
  delay(100);
}