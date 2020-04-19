// PUSH BUTTON & LED
/* Code by Daniel Arenas, April 2020 */

int pinLed = 8;
int pinButton = 3;
int buttonRead;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT);
  buttonRead = 0;
}

void loop() {
  button();
}

void button() {
  buttonRead = digitalRead(pinButton);
  if (buttonRead == HIGH) {
    digitalWrite(pinLed, HIGH);
  } else {
    digitalWrite(pinLed, LOW);
  }
}
