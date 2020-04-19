// MULTIPLE LEDs & PUSH BUTTON
/* Code by Daniel Arenas, April 2020 */

// LEDS Variables
int LEDsPins[] = {8, 9, 10, 11};
int delayTime = 100;

// Button Variables
int pinButton = 3;
int buttonRead;
bool active;

void setup() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    pinMode(LEDsPins[ledPin], OUTPUT);
  }
  pinMode(pinButton, INPUT);
  buttonRead = 0;
  active = false;
}

void loop() {
  button();
  if(active == true){
    multiple_leds();
  }
}

void multiple_leds() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    ledBlin(LEDsPins[ledPin]);
  }
  active = false;
}

void ledBlin(int ledPin) {
  digitalWrite(ledPin, HIGH);
  delay(delayTime * 2);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}

void button() {
  buttonRead = digitalRead(pinButton);
  if (buttonRead == HIGH) {
    active = true;
  }
  delay(100);
}
