// PROYECTO INTEGRADO 1
/* Code by Daniel Arenas, April 2020 */
/* En este código uniremos todos los temas vistos en 
   los 6 talleres anteriores y veremos como dividir el
   código en diferentes archivos mediante 'pestañas'.*/

// Hardware Requerido
/* 1. 5 LEDs cualquiera (de 2 pines)
   2. Pulsador (de 2 o 4 pines)
   3. Potenciómetro (de 3 pines)
   4. 6 Resistencias 220 o 330 ohms
   5. Cables para conectar        */

// ¿DÓNDE ESTÁ TODO EL CÓDIGO? : ¡Está en las otras pestañas!
void setup() {
  iniciar_boton(); // Iniciamos el botón
  iniciar_LEDS();  // Iniciamos el arreglo de LEDs
  iniciar_poten(); // Iniciamos el potenciómetro
}// termina el setup

void loop() {
  boton();                       // Leemos el botón,
  if (esta_activado() == true) { // si el botón es presionado,
    potenciometro();             // leemos el potenciómetro
    recorrer_arreglo();          // y aplicamos ese valor al arreglo de leds
  }
}// termina el loop

// ¡¡Arduino irá a las otras pestañas, como si el código estuviera aquí abajo!!
