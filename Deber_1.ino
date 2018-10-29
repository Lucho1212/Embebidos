#include <LiquidCrystal.h> // libreria del LCD
LiquidCrystal lcd(13,12,11,10,9,8); // pines del arduino para el lcd
String texto= "ANILLO"; // palabra original
int k=11; // 
int j=0; // variable tipo entero
int on=0; // variable tipo entero 
char dato; // variable tipo caracter
int cont=0; // variable tipo entero
void setup() {
Serial.begin(9600); // velocidad del arduino
lcd.begin(16, 2);  // configuracion del lcd 16 X 2
attachInterrupt(0,iniciar,LOW); // interrupcion 2
attachInterrupt(1,encender,HIGH); // interrupcion 3 
} 
void loop() {
      if(Serial.available()>0) // obtiene la cantidad de bytes mayor a 0
      {
      dato=Serial.read(); // asignar dato entrante en la variable.
      texto +=dato;// suma cada dato en la variable texto
      }
      if(on==1) // variable de encendido y apagado del sistema
       {
      for(j=1; j<=10;j++) // la variable suma uno a la ves
        {
    lcd.clear(); // limpia la pantalla del LCD
    lcd.setCursor(j, 0); // posicion donde se imprime en el LCD  , la posicion varia de aceurdo a la variable j
    lcd.print(texto); // imprmir la variable texto en el LCD
    delay(300); // tiempo de espera 
        }
     int tam=texto.length(); // tamaño del string Texto
      for(int i=tam; i>0 ; i--)  // va disminuyendo de acuerdo desde el tamañ0 de la palabra asta cerp
      {
    String tex = texto.substring(i-1);// van apareciendo los datos uno a uno en el LCD
    lcd.clear();  // limpiar la pantalla del lcd
    lcd.setCursor(0, 0);  // posicion de escritura en el lcd
    lcd.print(tex); // imprimir en el LCD la variable tex
    lcd.setCursor(k, 0); // posicion en la lcd depende de la varibale K
     lcd.print(texto); // imprimir en el lcd la varibale text
     delay(300); // esperar
     if(k<16) // si la k< 16 realizar lo siguiente
     k++; // variable k suma uno cada q realize ese proceso
     else // caso contrario
     k=11; // variable vale 11
  }
  }
  if(on==0) // varibale igual a 0 se apaga el sistema
  { 
   lcd.clear();        // limpa pantalla de LCD
   lcd.setCursor(0, 0); // posicion a imprimir LCD
   lcd.print("apagado"); // imprimir apagado
   delay(300); // tiempo de espera
    }
   }

   void encender () // funcion de apagado y encendido
   {
    on=1-on; // variable on resta 1 cada q presiona la interrupcion
    delay(300); // tiempo de espera

    }
  
  void iniciar()  // funcion iniciar 
    {
    cont++; // suma un cada que presione el boton
delay(300); // tiempo de espera 
    if(cont==1) // si contador es igual 1 realice lo siguiente 
    {
      Serial.println("Ingrese palabra de 6 caracteres"); // ingrsar palabra por medio serial 
      texto=""; // variable texto se pone vacio
      dato=""; // variable dato vacio
      }
      if(cont==2) // si cont igual a dos hace lo siguiente
    {
         lcd.setCursor(0, 1); // imprime la variable en esa posicion
   lcd.print(texto); // imprime la nueva palabra
      delay(300); // tiempo 
      cont=0; // cont es igual a 0 
      } 
    }
