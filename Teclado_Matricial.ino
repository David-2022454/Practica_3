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
#include <Keypad.h>   


#define filas 4  
#define columnas 4
#define fila_1 9  
#define fila_2 8  
#define fila_3 7  
#define fila_4 6  
#define colum_1 5  
#define colum_2 4  
#define colum_3 3  
#define colum_4 2 
#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define f 15
#define G 16
#define PMI(pin) pinMode(pin,INPUT)
#define PMO(pin) pinMode(pin,OUTPUT)
#define DW1(pin) digitalWrite(pin,HIGH)
#define DW0(pin) digitalWrite(pin,LOW)
#define AW1(pin) analogWrite(pin,HIGH)
#define AW0(pin) analogWrite(pin,LOW)
char key[filas][columnas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};


byte pines_filas[filas] = {fila_1,fila_2,fila_3,fila_4};
byte pines_columnas[columnas] = {colum_1,colum_2,colum_3,colum_4};



Keypad teclado = Keypad( makeKeymap(key), pines_filas, pines_columnas, filas,columnas);

void setup() {


PMO(A);
PMO(B);
PMO(C);
PMO(D);
PMO(E);
PMO(f);
PMO(G);
 
}

void loop() {
  char tecla = teclado.getKey();
     if(tecla == LOW){
      DW1(A);
      DW1(B);
      DW1(C);
      DW1(D);
      DW1(E);
      DW1(f);
      DW0(G);
      }

  
switch (tecla) {

  case '0':
  {
  DW1(A);
  DW1(B);
  DW1(C);
  DW1(D);
  DW1(E);
  DW1(f);
  DW0(G);
delay(2000);
break;
  }
    case '1':
 {
  DW0(A);
  DW1(B);
  DW1(C);
  DW0(D);
  DW0(E);
  DW0(f);
  DW0(G);
delay(2000);
break;
  }

  
  case'2':
  {
      
  DW1(A);
  DW1(B);
  DW0(C);
  DW1(D);
  DW1(E);
  DW0(f);
  DW1(G);
  delay(2000);
  break;
  }
  case'3':
  {
  DW1(A);
  DW1(B);
  DW1(C);
  DW1(D);
  DW0(E);
  DW0(f);
  DW1(G);
  delay(2000);
  break;
  }
  case'4':
  {

  DW0(A);
  DW1(B);
  DW1(C);
  DW0(D);
  DW0(E);
  DW1(f);
  DW1(G);
  delay(2000);
  break;
  }
  case '5':
  {

  DW1(A);
  DW0(B);
  DW1(C);
  DW1(D);
  DW0(E);
  DW1(f);
  DW1(G);
  delay(2000);
  break;
  }
  case '6':
  {

  DW1(A);
  DW0(B);
  DW1(C);
  DW1(D);
  DW1(E);
  DW1(f);
  DW1(G);
  delay(2000);
  break;
  }
  case '7':
  {
     
  DW1(A);
  DW1(B);
  DW1(C);
  DW0(D);
  DW0(E);
  DW0(f);
  DW0(G);
  delay(2000);
  break;
  }
  case '8':
  {
  DW1(A);
  DW1(B);
  DW1(C);
  DW1(D);
  DW1(E);
  DW1(f);
  DW1(G);
  delay(2000);
  break;
  }
  case '9':
  {
        
  DW1(A);
  DW1(B);
  DW1(C);
  DW1(D);
  DW0(E);
  DW1(f);
  DW1(G);
  delay(2000);
  break;
  }
  case 'A':
  {
     
  DW1(A);
  DW1(B);
  DW1(C);
  DW0(D);
  DW1(E);
  DW1(f);
  DW1(G);
  delay(2000);
  break;
  }
  case 'B':
  {

  DW0(A);
  DW0(B);
  DW1(C);
  DW1(D);
  DW1(E);
  DW1(f);
  DW1(G);
  delay(2000);
  break;
  }
  case 'C':
  {

  DW0(A);
  DW0(B);
  DW0(C);
  DW1(D);
  DW1(E);
  DW0(f);
  DW1(G);
  delay(2000);
  break;
  }
  case 'D':
  {

  DW0(A);
  DW1(B);
  DW1(C);
  DW1(D);
  DW1(E);
  DW0(f);
  DW1(G);
  delay(2000);
  break;
  }
  case '#':
  {
   
  DW1(A);
  DW0(B);
  DW0(C);
  DW1(D);
  DW1(E);
  DW1(f);
  DW1(G);
  delay(2000);
  break;
  }
  case '*':
  {
       
  DW1(A);
  DW0(B);
  DW0(C);
  DW0(D);
  DW1(E);
  DW1(f);
  DW1(G);
  delay(2000);
  break;
  }
  
  }


}
