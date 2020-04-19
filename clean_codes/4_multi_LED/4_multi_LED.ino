// MULTIPLE LEDs
/* Code by Daniel Arenas, April 2020 */

int LEDsPins[] = {8, 9, 10, 11};
int delayTime = 100;

void setup() {
  for (int ledPin = 0; ledPin < 4; ledPin++){
    pinMode(LEDsPins[ledPin], OUTPUT);
  }  
}

void loop() {
 multiple_leds();
}

void multiple_leds(){
  for (int ledPin = 0; ledPin < 4; ledPin++){
    ledBlink(LEDsPins[ledPin]);
  }
}

void ledBlink(int ledPin) {
 digitalWrite(ledPin, HIGH);
 delay(delayTime * 2); // Twice as off
 digitalWrite(ledPin, LOW);
 delay(delayTime);
}
