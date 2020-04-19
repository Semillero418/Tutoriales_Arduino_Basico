// Button Variables
int pinButton = 3;
int buttonRead;
bool active;

// Indicator LED
int pinLED_ind = 4;

// ===============================================
// ======               SETUP               ======
// ===============================================

void init_Button() {
  pinMode(pinLED_ind, OUTPUT);
  pinMode(pinButton, INPUT);
  buttonRead = 0;
  active = false;
}

// ===============================================
// ======                LOOP               ======
// ===============================================

void button() {
  buttonRead = digitalRead(pinButton);
  if (buttonRead == HIGH) {
    active = true;
  }
  led_indicador();
  delay(100);  
}

void led_indicador() {
  if (active == true) {
    digitalWrite(pinLED_ind, HIGH);
  } else {
    digitalWrite(pinLED_ind, LOW);
  }
}

bool is_active() {
  return active;
}

bool set_active(bool activ) {
  active = activ;
}
