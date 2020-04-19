// POTENCIÓMETRO y LED (PWM)
/* Code by Daniel Arenas, April 2020 */

// Hardware Requerido
/* 1. Potenciómetro (de 3 pines)
   2. LED cualquiera (para 2 pines)
   3. 2 Resistencias 220 o 330 ohms
   4. Cables para conectar */

/* El pin 8 es un pin PWM, que puede 'simular' ser análogo
   lo que nos permite graduar la intensidad del LED.
   Si en tu tarjeta Arduino el pin 8 no es PWM, puedes 
   cambiarlo a un pin análogo o uno PWM*/   
int pinLed = 8;    // LED en pin digital8 (PWM)
/* Los pines análogos se especifican con A antes del número */
int pinPoten = A0; // Potenciómetro en Pin análogo A0
int lecturaPoten;  // Variable para almacenar la lectura
float mapeo;       // Variable convertida a un rango que podemos usar

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinPoten, INPUT);
  lecturaPoten = 0;
  mapeo = 0;
/*En este proyecto usaremos el monitor Serial para ver los datos
  del potenciómetro, para eso necesitamos activad la comunicación Serial.
  9.600 es el ratio de Baudios (velocidad de comunicación). Cuando
  abramos el monitor Serial, debemos verificar que esté a la misma velocidad. */
  Serial.begin(9600); // Iniciamos la comunicación Serial
}

void loop() {
  potenciometro();
}

/* Ya heos usado lectura y escritura digital (digitalRead, digitalWrite)
   ahora usaremos lecturas y escrituras análogas:
   (analogRead, analogWrite).   */
void potenciometro() {
  lecturaPoten = analogRead(pinPoten);
  /* El potenciómetro entrega valores entre 0 y 1023, pero el rango 
     de nuestro LED va de 0 a 255. Para mapear esta variable podemos usar
     un útil método en Arduino llamado 'map()'. Debemos indicarle el valor
     que queremos mapear, el rango original (min, max) y el rango
     deseado (min, max), de la siguiente manera:
     map(valor, min_1, max_1, min_2, max_2);  */
  mapeo = map(lecturaPoten, 0, 1023, 0, 255);
  /* Ya que el rango de 0 a 1023 es 4 veces más grande que el rango de 
  0 a 225 (1023/4 = 255.75), también podemos mapear el valor dividiendo
  la lectura entre 4.   */
  // mapeo = lecturaPoten/4;
  my_print(lecturaPoten, mapeo); // Muestra los valores en el monitor Serial
  analogWrite(pinLed, mapeo); 
}

/* Este método nos sirve para poder enviar los datos al monitor serial
   y verlos desde allí. Así podremos ver mejor como funciona el mapeo.
   Como en arduino no se pueden sumar Strings tenemos que concatenar la oración 
   de otra manera. Esto es usando Serial.print(); cada uno de ellos añade una parte
   a la oración. Si usamos "comillas" dentro de los paréntesis, estamos escribiendo
   palabras. También podemos escribir números y operaciones (1) (2+2). Para escribir
   variables, solo necesitamos usar el nombre de la variable entre los paréntesis.
   ("Hola " + "mundo" no es "Hola mundo" sino la suma matemática de sus letras). 
   */
void my_print(int lecturaPoten, float mapeo){
  Serial.print("lecturaPoten: "); // Escribe al monitor "lecturaPoten: "
  Serial.print(lecturaPoten);     // añade a la línea el valor de la lectura
  Serial.print(" vs. Mapeo: ");   // añade a la línea " vs. Mapeo: "
  Serial.print(mapeo);            // añade a la línea el valor del mapeo
  Serial.println();               // Termina la línea y añade un salto (\n)
}
