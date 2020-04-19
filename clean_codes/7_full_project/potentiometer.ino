// Variables Potenciómetro
int pinPoten = A0;
int potenRead;
float poten_map;

// ===============================================
// ======               SETUP               ======
// ===============================================

void init_poten(){
  pinMode(pinPoten, INPUT);
  potenRead = 0;
  poten_map = 0;
}

// ===============================================
// ======                LOOP               ======
// ===============================================

void potentiometer() {
  potenRead = analogRead(pinPoten);
  poten_map = map(potenRead, 0, 1023, 0, 500);
  delayTime = poten_map;
}
