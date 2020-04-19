// Variables Potenciómetro
int pinPoten = A0;
int lecturaPoten;
float mapeo;

// ===============================================
// ======               SETUP               ======
// ===============================================

void iniciar_poten(){
  pinMode(pinPoten, INPUT);
  lecturaPoten = 0;
  mapeo = 0;
}

// ===============================================
// ======                LOOP               ======
// ===============================================

void potenciometro() {
  lecturaPoten = analogRead(pinPoten);
  mapeo = map(lecturaPoten, 0, 1023, 0, 500);
  delayTime = mapeo;
}
