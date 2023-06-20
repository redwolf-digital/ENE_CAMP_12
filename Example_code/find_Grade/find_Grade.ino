unsigned char score[10] = {65, 44, 5, 42, 58, 59, 78, 12, 87, 45};

void setup() {
  Serial.begin(9600);
  
  char grade;
  
  for(unsigned char index = 0; index < sizeof(score); index++) {
    if(score[index] < 50) {
      grade = 'F';
    }
    else if(score[index] < 60) {
      grade = 'D';
    }
    else if(score[index] < 70) {
      grade = 'C';
    }
    else if(score[index] < 80) {
      grade = 'B';
    }
    else {
      grade = 'A';
    }
    
    Serial.print("Score : ");
    Serial.print(score[index]);
    Serial.print("\t Grade : ");
    Serial.print(grade);
    Serial.print("\n");
  }
}

void loop() {
    
}