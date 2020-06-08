# TUTORIAL ARDUINO (BÁSICO)

*Este Taller fue diseñado para el Semillero 418 de la Universidad Icesi (Cali, Colombia).*


En este repositorio puedes encontrar los códigos comentados en español o limpios en inglés. Si eres nuevo en Arduino, te recomendamos  empezar con los códigos comentados, ya que te pueden dar más claridad en como funciona el código y que hace cada línea. Los códigos limpios no incluyen comentarios, lo que hace que sean más fáciles y rápidos de leer, si ya comprendes como funciona Arduino. Están en inglés porque es el lenguaje universal en programación, así serán útiles para más personas.

**El tutorial consta de 7 talleres en el siguiente orden:**
1.	Parpadeo con 1 LED
2.	Botón y LED
3.	Potenciómetro y LED
4.	Múltiples LEDs (Parpadeo Escalado)
5.	Múltiples LEDs y botón
6.	Múltiples LEDs y potenciómetro
7.	Proyecto Integrado (Múltiples LEDs, botón y Potenciómetro)

El taller es de naturaleza incremental, es decir: el taller 2, tiene partes del taller 1; el taller 3 tiene partes del taller 2 y el taller 1; y así sucesivamente. Está pensado así, para no tener que desmontar y montar circuitos constantemente. Al llegar al taller 4, se habrá completado el circuito base que será usado en el taller final (7).

**Nota:** Este taller está creado usando una Arduino Mega 2560. Tenerlo en cuenta si los pines no funcionan igual, aunque deberían ser los mismos para la mayoría de las tarjetas Arduino.

###  Taller 1: Parpadeo
Este es el primer taller. Inicia con la protoboard vacía.
1.	LED cualquiera (de 2 pines)
2.	Resistencia 220 o 330 ohms
3.	2 cables para conectar (GND y Pin 13)

###  Taller 2: Botón
Este proyecto inicia con el montaje del taller anterior (LED).
1.	LED cualquiera (de 2 pines)
2.	2 resistencias 220 o 330 ohms (LED y Botón)
3.	4 cables para conectar: GND, Pin 8 (LED), Pin 3 (Botón), 5V (Botón)
4.	2 cables pequeños: GND (LED), GND (botón)

###  Taller 3: Potenciómetro
Este proyecto puede montarse solo con el LED del primer taller, o dejar el circuito del botón del taller anterior. Si planeas hacer todos los talleres, puedes dejar los circuitos anteriores, para no tener que ensamblarlos después otra vez. Si se dejan los 3 circuitos al tiempo (LED, botón, potenciómetro) usar la línea de tierra de la protoboard.
1.	LED cualquiera (de 2 pines)
2.	Resistencia 220 o 330 ohms
3.	4 cables para conectar: GND, Pin 8 (LED), Pin A0 (Potenciómetro), 5V (Potenciómetro)
4.	2 cables pequeños: GND (LED), GND (Potenciómetro)

###  Taller 4: Múltiples LEDs
Para este taller se pueden adicionar los LEDs faltantes al circuito, sin eliminar los circuitos anteriores de botón y potenciómetro. Al LED original se le suman 3 LEDs más, para un total de 4 en línea. Cada led tiene su propio pin, pero todos comparten tierra.
1.	4 LEDs cualquiera (de 2 pines)
2.	4 resistencias 220 o 330 ohms
3.	5 cables para conectar (GND, Pin 8, Pin 9, Pin 10, Pin 11)

### Taller 5: Múltiples LEDs y Botón
Este taller combina lo visto en talleres anteriores, mezclando las funcionalidades para obtener comportamientos más complejos, pero a la vez, fáciles de comprender. En este caso el botón activa o desactiva el circuito de los LEDs.

### Taller 6: Múltiples LEDs y Potenciómetro
Este taller combina lo visto en talleres anteriores, mezclando las funcionalidades para obtener comportamientos más complejos, pero a la vez, fáciles de comprender. En este caso el potenciómetro regula el comportamiento (velocidad de cambio) de los LEDs.

###  Taller 7: Proyecto Integrado
Este taller usa todos los circuitos montados anteriormente: Múltiples LED (4 en fila), botón y potenciómetro. Se añade únicamente un nuevo LED, que indica cuando todo el circuito está prendido o apagado, que se ubica al final de la fila de 4 LEDs. El LED indicador debería ser de un color diferente a los otros LEDs para no ser confundido con ellos.
1.	LED cualquiera (de 2 pines)
2.	Resistencia 220 o 330 ohms
3.	2 cables para conectar (GND y Pin 4)

### ¡Buena Suerte!
Y gracias por leer.
