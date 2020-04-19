// MÚLTIPLES LEDS (4)
/* Code by Daniel Arenas, April 2020 */

// Hardware Requerido
/* 1. 4 LEDs cualquiera (de 2 pines)
   2. Resistencia 220 o 330 ohms
   3. 2 cables para conectar        */

// Arreglos
/* Los arreglos son variables que nos permiten almacenar
   varios datos al mismo tiempo. En este caso estamos almacenando
   4 números, que corresponden a los pines de los 4 LEDs*/
int LEDsPins[] = {8, 9, 10, 11};  // Arreglo con los pines de los LED
int delayTime = 100;              // Millisegundos(ms): 1000 ms = 1 segundo

void setup() {
// For (iteraciones)
/* El 'for' nos permite ejecutar el código que contiene un X número
   de veces. En este caso queremos ejecutar un código por cada LED
   que tengamos. Además, el 'for' nos da una variable, el 'iterador',
   con la cual podemos recorrer los arreglos. En este caso el iterador
   se llama 'ledPin'.   */
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    /*Para recorrer el arreglo, usamos su nombre e indicamos la posición
    a la que queremos acceder: mi_arreglo[posición]. Todas las posiciones
    empiezan desde 0. Si el arreglocontiene 4 valores, las posiciones
    serían [0, 1, 2, 3]*/
    pinMode(LEDsPins[ledPin], OUTPUT); // Iniciamos los LEDS como 'salidas'
  }
}

void loop() {
  recorrer_arreglo();
}

void recorrer_arreglo() {
  /*Las iteraciones y los métodos nos ahorran escribir mucho código <3 */
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    parpadeo(LEDsPins[ledPin]); // Ejecutamos 'parpadeo' por cada LED
  }
}

void parpadeo(int pinLED) {
  digitalWrite(pinLED, HIGH);
  delay(delayTime * 2);
  digitalWrite(pinLED, LOW);
  delay(delayTime);
}
