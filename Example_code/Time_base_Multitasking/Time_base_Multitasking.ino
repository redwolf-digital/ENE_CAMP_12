#define LED1    2
#define LED2    3

unsigned long lastTime1, lastTime2;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  if(millis() - lastTime1 >= 150) { //150 ms
    digitalWrite(LED1, !digitalRead(LED1));
    lastTime1 = millis();
  }

  if(millis() - lastTime2 >= 1500) { //1500 ms
    digitalWrite(LED2, !digitalRead(LED2));
    lastTime2 = millis();
  }
}