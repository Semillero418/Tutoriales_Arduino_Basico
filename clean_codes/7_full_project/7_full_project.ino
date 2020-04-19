// FULL PROJECT 1
/* Code by Daniel Arenas, April 2020 */

void setup() {
  init_Button();
  init_LEDS();
  init_poten();
}

void loop() {
  button();
  if (is_active() == true) {
    potentiometer();
    multiple_leds();
  }
}
