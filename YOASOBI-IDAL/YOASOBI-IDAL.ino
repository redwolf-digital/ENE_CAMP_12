#define C7  1047
#define CS7 1109
#define D7  1175
#define DS7 1245
#define E7  1319
#define F7  1397
#define FS7 1480
#define G7  1568
#define GS7 1661
#define A7  1760
#define AS7 1865
#define B7  1976
#define C8  2093
#define CS8 2217
#define D8  2349
#define DS8 2489
#define E8  2637
#define F8  2794
#define FS8 2960
#define G8  3136
#define GS8 3322
#define A8  3520
#define AS8 3729
#define B8  3951
#define C9  4186
#define CS9 4435
#define D9  4699
#define DS9 4978

#define SPK 2
int melody[] = {
  E7, G7, A7, 0, E8, 0, A7, 0, G7, A7, 0, E8, A7, G7, A7, 0,
  E7, G7, A7, 0, C8, 0, B7, 0, G7, A7, 0, B7, C8, D8, F8, 0,
  E8, 0, A7, 0, E8, 0, A7, 0, G7, A7, 0, E8, A7, G7, A7, 0,
  E7, G7, A7, 0, C8, 0, B7, 0, G7, A7, 0, A7, 0, G7, A7, 0,
  C8, 0, A7, 0, 0, G7, A7, C8, D8, E8, A7, 0, 0, G7, A7, C8,
  D8, E8, A7, 0, C8, 0, D8, C8, D8, C8, D8, E8, A7, C8, G7, A7,
  E7, G7, A7, 0, 0, G7, A7, C8, D8, E8, A7, 0, 0, G7, A7, C8,
  D8, E8, D8, E8, A7, C8, G7, A7, E7, A7, 0, A7, 0, G7, A7
};

int noteDurations[] = {
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2
};

void setup() {
  for (int thisNote = 0; thisNote < sizeof(melody); thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];
    tone(SPK, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(SPK);
  }
}

void loop() {
  
}
