// MULTIPLE LEDs & POTENTIOMETER
/* Code by Daniel Arenas, April 2020 */

// LEDS Variables
int LEDsPins[] = {8, 9, 10, 11};
int delayTime;

// Potentiometer Variables
int pinPoten = A0;
int potenRead;
float poten_map;

void setup() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    pinMode(LEDsPins[ledPin], OUTPUT);
  }
  delayTime = 0;
  pinMode(pinPoten, INPUT);
  potenRead = 0;
  poten_map = 0;
}

void loop() {
  potentiometer();
  multiple_leds();
}

void multiple_leds() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    ledBlink(LEDsPins[ledPin]);
  }
}

void ledBlink(int ledPin) {
  digitalWrite(ledPin, HIGH);
  delay(delayTime * 2);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}

void potentiometer() {
  potenRead = analogRead(pinPoten);
  poten_map = map(potenRead, 0, 1023, 0, 500);
  delayTime = poten_map;
}
