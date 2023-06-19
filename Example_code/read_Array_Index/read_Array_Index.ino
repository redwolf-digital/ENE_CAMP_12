unsigned char data[10] = {1, 50, 4, 52, 200};

void setup() {
  Serial.begin(9600);
  
  for(unsigned char index = 0; index < sizeof(data); index++) {
    Serial.print("index : ");
    Serial.print(index);
    Serial.print("\t data : ");
    Serial.print(data[index]);
    Serial.print("\n");
  }
}

void loop() {
  //do nothing
}