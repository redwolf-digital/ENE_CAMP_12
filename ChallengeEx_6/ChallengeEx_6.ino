#define LED1  2
#define LED2  3
#define LED3  4

char inputBuffer;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0) {
    inputBuffer = Serial.read();
  }

  switch(inputBuffer) {
    case 'A' :
      digitalWrite(LED1, !digitalRead(LED1));
      inputBuffer = "\0";
      break;
    case 'B' :
      digitalWrite(LED2, !digitalRead(LED2));
      inputBuffer = "\0";
      break;
    case 'C' :
      digitalWrite(LED3, !digitalRead(LED3));
      inputBuffer = "\0";
      break;
    case 'D' :
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      inputBuffer = "\0";
      break;
    case 'E' :
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      inputBuffer = "\0";
      break;
  }


}
