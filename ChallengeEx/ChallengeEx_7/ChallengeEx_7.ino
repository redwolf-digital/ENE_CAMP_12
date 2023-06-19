#define READ	2
#define BIT1	8
#define BIT2	9
#define BIT3	10
#define BIT4	11

unsigned char bitValue = 0;
bool SerialFlag;

void setup() {
  pinMode(READ, INPUT_PULLUP);
  pinMode(BIT1, INPUT_PULLUP);
  pinMode(BIT2, INPUT_PULLUP);
  pinMode(BIT3, INPUT_PULLUP);
  pinMode(BIT4, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop() {
  while(digitalRead(READ) == LOW) {
    if(digitalRead(BIT1) == LOW) {
      bitValue = bitValue+1;
    }
    if(digitalRead(BIT2) == LOW) {
      bitValue = bitValue+2;
    }
    if(digitalRead(BIT3) == LOW) {
      bitValue = bitValue+4;
    }
    if(digitalRead(BIT4) == LOW) {
      bitValue = bitValue+8;
    }
    
    SerialFlag = 1;
    
    if(SerialFlag == 1) {
      Serial.print("Binary : ");
      Serial.print(bitValue, BIN);
      Serial.print("\t Dec : ");
      Serial.println(bitValue, DEC);
      bitValue = 0;
      SerialFlag = 0;
      
      delay(200);
    }
  }	
}