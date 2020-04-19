// Variables LEDS
int LEDsPins[] = {8, 9, 10, 11};
int delayTime;

// ===============================================
// ======               SETUP               ======
// ===============================================

void init_LEDS() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    pinMode(LEDsPins[ledPin], OUTPUT);
  }
  delayTime = 0;
}

// ===============================================
// ======                LOOP               ======
// ===============================================

void multiple_leds() {
  for (int ledPin = 3; ledPin >= 0; ledPin--) {
    ledBlink(LEDsPins[ledPin]);
  }
  set_active(false);
}

void ledBlink(int ledPin) {
  digitalWrite(ledPin, HIGH);
  delay(delayTime * 2);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}
