// PARPADEO DE LED
/* Code by Daniel Arenas, April 2020
   Based on Blink Example:
   http://www.arduino.cc/en/Tutorial/Blink */
   
// Hardware Requerido
/* 1. LED cualquiera (de 2 pines)
   2. Resistencia 220 o 330 ohms
   3. 2 cables para conectar        */

// LED conectado en el pin 13
/* Las tarjetas Arduino tienen un LED integrado.
   Podemos acceder a él usando el pin 13.     */
int pinLed = 13;

// MÉTODO 'SETUP'
/* El código escrito en este método se ejecuta cuando la
   Arduino se enciende o reinicia. */
void setup() {
/* Inicializa el pin 13 ("pinLed") como 'salida'
   Esto nos permite pasarvoltaje al LED.     */
  pinMode(pinLed, OUTPUT);
}

// MÉTODO 'LOOP'
/* El código escrito en este método se repite hasta
   el infinito, mientras la Arduino tenga electricidad. */
void loop() {
  parpadeo(); // Llamamos al método 'parpadeo' para que se ejecute.
}

/* Este 'método' nos permite escribir muchas líneas
   de código, y usarlas escribiendo solo una: 'parpadeo();'. */
void parpadeo() {
/* En Arduino, HIGH = 1 y LOW = 0. Pero en voltaje, esto se
   traduce a HIGH = 5v y LOW = 0v.  */     
  digitalWrite(pinLed, HIGH); // Indicamos al pinLed que emita 5V.
  delay(1000); // Espere 1.000 milisegundos = 1 segundo
  digitalWrite(pinLed, LOW);  // Indicamos al pinLed que emita 0V.
  delay(1000); // Espere 1 segundo
}
