// BOTÓN-PULSADOR y LED
/* Code by Daniel Arenas, April 2020 */

// Hardware Requerido
/* 1. Pulsador (de 2 o 4 pines)
   2. LED cualquiera (para 2 pines)
   3. 2 Resistencias 220 o 330 ohms
   4. Cables para conectar */

int pinLed = 8;   // LED en pin digital 8 (PWM)
int pinBoton = 3; // Botón en pin digital 3
int lecturaBoton; // Variable para almacenar la lectura

void setup() {
  pinMode(pinLed, OUTPUT);
  /*Inicializa el pin 3 ("pinBoton") como 'entrada'
    Esto nos permite recibir información del botón. */
  pinMode(pinBoton, INPUT);
  lecturaBoton = 0; // Reinicia la variable a 0
}

void loop() {
  boton();
}

void boton() {
  /*Leemos el pin 3, donde está el botón
    y almacenamos su valor en una variable */
  lecturaBoton = digitalRead(pinBoton);
  
  // Si la lectura es = HIGH (5v), el botón fue presionado*/
  if (lecturaBoton == HIGH) {   // Si el botón fue oprimido
    digitalWrite(pinLed, HIGH); // encendemos el LED
  } else {                      // sino está presionado
    digitalWrite(pinLed, LOW);  // apagamos el LED
  }
}
