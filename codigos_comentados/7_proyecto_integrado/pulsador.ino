// Variables Boton
int pinBoton = 3;
int lecturaBoton;
bool activado;

// LED Indicador
int pinLED_ind = 4; // LED indicador ubicado en el pin 4
/* Agregamos un nuevo LED que nos indicará cuando el circuito está activado */

// ===============================================
// ======               SETUP               ======
// ===============================================

void iniciar_boton() {
  pinMode(pinLED_ind, OUTPUT);
  pinMode(pinBoton, INPUT);
  lecturaBoton = 0;
  activado = false;
}

// ===============================================
// ======                LOOP               ======
// ===============================================

void boton() {
  lecturaBoton = digitalRead(pinBoton);
  if (lecturaBoton == HIGH) {
    activado = true;
  }
  led_indicador();
  delay(100);  
}

void led_indicador() {
  if (activado == true) {
    digitalWrite(pinLED_ind, HIGH);
  } else {
    digitalWrite(pinLED_ind, LOW);
  }
}


// ===============================================
// ======         GETTERS & SETTERS         ======
// ===============================================
/* Ya que estas variables no existen en los otros archivos
   de Arduino, creamos métodos que nos ayuden a acceder a 
   estas variables y a modificarlas. */

// Devuelve el valor de la variable 'activado'
bool esta_activado() {
  return activado;
}

// Cambia el valor de la variable 'activado' por el valor especificado
bool cambiar_activado(bool activ) {
  activado = activ;
}
