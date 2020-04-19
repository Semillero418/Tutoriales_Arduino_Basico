// Variables LEDS
int LEDsPins[] = {8, 9, 10, 11};
int delayTime;

// ===============================================
// ======               SETUP               ======
// ===============================================

void iniciar_LEDS() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    pinMode(LEDsPins[ledPin], OUTPUT);
  }
  delayTime = 0;
}

// ===============================================
// ======                LOOP               ======
// ===============================================

void recorrer_arreglo() {
  for (int ledPin = 3; ledPin >= 0; ledPin--) {
    parpadeo(LEDsPins[ledPin]);
  }
  cambiar_activado(false);
}

void parpadeo(int pinLED) {
  digitalWrite(pinLED, HIGH);
  delay(delayTime * 2);
  digitalWrite(pinLED, LOW);
  delay(delayTime);
}
