// POTENTIOMETER & PMW LED
/* Code by Daniel Arenas, April 2020 */

int pinLed = 8;
int pinPoten = A0;
int potenRead;
float poten_map;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinPoten, INPUT);
  potenRead = 0;
  poten_map = 0;
  Serial.begin(9600);
}

void loop() {
  potentiometer();
}

void potentiometer() {
  potenRead = analogRead(pinPoten);
  poten_map = map(potenRead, 0, 1023, 0, 255);
  // poten_map = potenRead/4; // It's also valid
  my_print(potenRead, poten_map);
  analogWrite(pinLed, poten_map); 
}

void my_print(int potenRead, float poten_map){
  Serial.print("potenRead: ");
  Serial.print(potenRead);
  Serial.print(" vs. poten_map: ");
  Serial.print(poten_map);
  Serial.println();
}
