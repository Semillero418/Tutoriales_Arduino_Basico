// MÚLTIPLES LEDS y POTENCIÓMETRO
/* Code by Daniel Arenas, April 2020 */

// Hardware Requerido
/* 1. 4 LEDs cualquiera (de 2 pines)
   2. Potenciómetro (de 3 pines)
   3. 4 Resistencias 220 o 330 ohms
   4. Cables para conectar        */

// Variables LEDS
int LEDsPins[] = {8, 9, 10, 11}; // Arreglo con los pines de los LED
int delayTime = 100;             // Millisegundos(ms): 1000 ms = 1 segundo

// Variables Potenciómetro
int pinPoten = A0;  // Potenciómetro en Pin análogo A0
int lecturaPoten;   // Variable para almacenar la lectura
float mapeo;        // Variable convertida a un rango que podemos usar

void setup() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    pinMode(LEDsPins[ledPin], OUTPUT);
  }
  delayTime = 0;
  pinMode(pinPoten, INPUT);
  lecturaPoten = 0;
  mapeo = 0;
}

void loop() {
  potenciometro();    // Primero verificamos el valor del potenciómetro
  recorrer_arreglo(); // Luego lo usamos ese valor en el método de los LEDs
  /* Si cambiamos el orden de los métodos, la lectura del potenciómetro
     solo sería usada en la siguiente iteración del Loop  */
}

void recorrer_arreglo() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    parpadeo(LEDsPins[ledPin]);
  }
}

void parpadeo(int pinLED) {
  digitalWrite(pinLED, HIGH);
  delay(delayTime * 2);
  digitalWrite(pinLED, LOW);
  delay(delayTime);
}

void potenciometro() {
  lecturaPoten = analogRead(pinPoten);
  mapeo = map(lecturaPoten, 0, 1023, 0, 500); // Rango 0 a 500 (0 a medio segundo)
  delayTime = mapeo; // El valor del 'delay' dependerá del potenciómetro
  /* Entre más alta sea la variable, más lento será el efecto en las luces*/
}
