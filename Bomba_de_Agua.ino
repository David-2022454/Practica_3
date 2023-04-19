/*
Fundación Kinal
Centro Educativo Técnico Labral Kinal 
Electrónica
Grado: Quinto
Sección: A
Curso: Taller de Electrónica Digital y Reparación de Computadoras I
Nombre: Juan David Tejada Peñuela
Carné: 2022454 
*/

#define LED_AZUL 2
#define LED_ROJO 3
#define SENSOR 4
#define RELE 5
#define PMI(pin) pinMode(pin,INPUT)
#define PMO(pin) pinMode(pin,OUTPUT)
#define DW1(pin) digitalWrite(pin,HIGH)
#define DW0(pin) digitalWrite(pin,LOW)
void setup() {
  
PMI(SENSOR);
PMO(LED_AZUL);
PMO(LED_ROJO);
PMO(RELE);
}

void loop() {

int sensor = digitalRead(SENSOR);
if (sensor == LOW) {
DW0(RELE);
DW0(LED_ROJO);
DW1(LED_AZUL);
}
if (sensor == HIGH) {
  DW1(RELE);
  DW0(LED_AZUL);
  DW1(LED_ROJO);
}

}
