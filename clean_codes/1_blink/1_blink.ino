// LED BLINK
/* Code by Daniel Arenas, April 2020
   Based on Blink Example:
   http://www.arduino.cc/en/Tutorial/Blink */
   
int pinLed = 13;

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
 myBlink();
}

void myBlink() {
 digitalWrite(pinLed, HIGH);
 delay(1000);
 digitalWrite(pinLed, LOW);
 delay(1000);
}
