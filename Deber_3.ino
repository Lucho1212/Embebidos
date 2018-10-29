#include <TimerOne.h> // libreria del Timer one
#include <LiquidCrystal.h>  // libreria del LCD
LiquidCrystal lcd(13,12,11,10,9,8); // Pines del arduino para conectar al LCD
int A=7;  // pin led 1
int B=6;  // pin led 2
int C=5;  // pin led 3
int display[3]={A,B,C};// vector display 
int i=0; // variable 
int cont=0; // variable del contador
void setup() {
  Serial.begin(9600);// velocidad 
  lcd.begin(16, 2); // configuracion del LCD
  for(;i<3;i++) // for para declarar pines como OUTPUT
    {
      pinMode(display[i],OUTPUT); // pines de salida
    }

Timer1.initialize(1000000); // timer en tiempo de un segundo
Timer1.attachInterrupt(contador); // funcion contador
}

void loop() {

}

void contador(){ // funcionn contador
  cont++;  // contador suma 1 cada segundo
  lcd.clear(); // limpia lcd
    lcd.setCursor(2, 0);// posicion donde inicia la escritura en el LCD
    lcd.print(cont); // imprimir en el LCD
    lcd.setCursor(0, 1); // posicion donde inicia la escritura en el LCD
    lcd.print("LEDS ON");  // imprimir en el LCD
    if(cont>19 && cont<30)// contador es mayor a 19 menor a 30
    {
      digitalWrite(A,HIGH);  // Enciende el led 1
      lcd.setCursor(10, 1);  // en esa posicion se escribe
    lcd.print("1");  // escribir en el lCD
      }
      else // caso contrario
      {
         digitalWrite(A,LOW); // Apagada el led 1 
       lcd.setCursor(10, 1); // en esa posicion se escribe
       lcd.print(" "); // se escribe un vacio
        }

    if(cont>24 && cont<40) // contador es mayor a 24 menor a 40
    {
      digitalWrite(B,HIGH); // Enciende el led 2
      lcd.setCursor(12, 1); // en esa posicion se escribe
    lcd.print("2");  // escribir en el lCD
      }
      else // caso contrario 
      {
         digitalWrite(B,LOW);  // Apagada el led 2
       lcd.setCursor(12, 1);   // en esa posicion se escribe
       lcd.print(" ");   // se escribe un vacio
        }
      
    if(cont>29 && cont<35)  // contador es mayor a 29 menor a 35
    {
      digitalWrite(C,HIGH);  // Enciende el led 3
      lcd.setCursor(14, 1);  // en esa posicion se escribe
    lcd.print("3");   // escribir en el lCD
      }
      else
      {
         digitalWrite(C,LOW);  // Apagada el led 3
       lcd.setCursor(14, 1); // en esa posicion se escribe
       lcd.print(" ");  // se escribe un vacio
        }
        if(cont==45)
        cont=0;
  
  }
