// MÚLTIPLES LEDS y PULSADOR
/* Code by Daniel Arenas, April 2020 */

// Hardware Requerido
/* 1. 4 LEDs cualquiera (de 2 pines)
   2. Pulsador (de 2 o 4 pines)
   3. 5 Resistencias 220 o 330 ohms
   4. Cables para conectar        */
   
// Variables LEDS
int LEDsPins[] = {8, 9, 10, 11}; // Arreglo con los pines de los LED
int delayTime = 100;             // Millisegundos(ms): 1000 ms = 1 segundo

// Variables Boton
int pinBoton = 3;   // Botón en pin digital 3
int lecturaBoton;   // Variable para almacenar la lectura
/* Las variables booleanas pueden tener 2 estados:
   falso o verdadero (false / true).
   Este tipo de dato lo usamos para hacer validaciones. */
bool activado;      // Variable del estado del botón (oprimido/no oprimido)

void setup() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    pinMode(LEDsPins[ledPin], OUTPUT);
  }
  pinMode(pinBoton, INPUT);
  lecturaBoton = 0;
  activado = false; // Iniciamos 'activado' como falso
}

void loop() {
  boton();
  if(activado == true){ // Si el botón está activado
    /* Hasta que no se presione el botón, no se ejecuta este método */
    recorrer_arreglo();
  }
}

void recorrer_arreglo() {
  for (int ledPin = 0; ledPin < 4; ledPin++) {
    parpadeo(LEDsPins[ledPin]);
  }
  /*Después de terminado el ciclo, volvemos 'activado' falso,
    de esta manera, debe volverse a oprimir el botón para activar.  */
  activado = false;  // Reiniciamos el estado de 'activado'
}

void parpadeo(int pinLED) {
  digitalWrite(pinLED, HIGH);
  delay(delayTime * 2);
  digitalWrite(pinLED, LOW);
  delay(delayTime);
}

void boton() {
  lecturaBoton = digitalRead(pinBoton);
  if (lecturaBoton == HIGH) { // Si el botón es oprimido
    activado = true;          // hacemos 'activado' verdadero
    /* Esto le permite al método 'recorrer_arreglo' ejecutarse */
  }
  delay(200); // Esta pausa da tiempo a que se suelte el botón
  /* Si el botón se deja oprimido, puede parecer que fue activado muchas veces*/
}
