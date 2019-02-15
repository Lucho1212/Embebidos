#include "baseexamen.h"
// Definicion de matrices de CNN

float matriz_s [60][5];//Datos validos
float matriz_d [90][5];//Datos de desecho
float nueva1 [20][5];//Datos de desecho
int col = 0; //Variable de recorrido de columnas
int fil; //Variable de recorrido de filas
float prom = 0; //Variable de promedio
float suma = 0;
int col_s = 0; //Variable para matriz s
int fil_s = 0; //Variable para matriz d
int col_d = 0;
int fil_d = 0;
int etiq = 1;
int i = 0;
float dist = 0;
float dist_total;
float dist_mayor = 2000;
float label;
int cont=0;
int cont1=0;
int cont2=0;

void setup() {
  Serial.begin(9600);
for(int x=0;x<75;x++)
{
if(matriz[x][4]==1)
{
  cont++;
  
  }
  if(matriz[x][4]==1)
{
  cont1++;
  
  }
  if(matriz[x][4]==1)
{
  cont2++;
  
  }
}
Serial.println("Total de etiqueta 1");
Serial.println(cont);
Serial.println("Total de etiqueta 2");
Serial.println(cont1);
Serial.println("Total de etiqueta 3");
Serial.println(cont2);

Serial.println("Centroides");
  for (; etiq < 4; etiq++) {
    for (; col < 4; col++) {
      for (fil = i; fil < 25 * etiq; fil++) {
        suma = suma + matriz[fil][col];
      }
      prom = suma / 30;
      matriz_s[etiq - 1][col] = prom; //Almacenar promedios en matriz_s
      Serial.println(prom);
      suma = 0;
      fil = 0;
    }
    col = 0;
    i = 25 * etiq;
  }
  col = 0;
  fil = 0;
  for (; fil < 3; fil++) {
    matriz_s[fil][4] = fil + 1; //Llenar etiquetas en matriz_s
    /*
      //Para imprimir el promedio
      for(;fil<3;fil++){
      for(;col<4;col++){
        Serial.print(matriz_s[fil][col]);
        Serial.print(',');
      }
      Serial.println(    );
      col=0;
      }
      **/
  }
  fil = 0;
}

void loop() {
  for (; fil < 75; fil++) {
    for (; fil_s < 3; fil_s++) {
      for (; col_s < 4; col_s++) {
        dist = dist + pow(matriz[fil][col_s] - matriz_s[fil_s][col_s], 2);
      }
      dist_total = sqrt(dist);
      if (dist_total < dist_mayor) {
        dist_mayor = dist_total;
        label = matriz_s[fil_s][4];
        //Serial.println(label);
      }//end if
      dist = 0;
      col_s = 0;
    }//end for fil_s
    fil_s = 0;
    dist_mayor = 2000;
    if (label == matriz[fil][4]) {
      Serial.print(fil);
      Serial.print(":");
      Serial.println('D');
      nueva1[fil][0]=matriz_s[fil][0];
      nueva1[fil][1]=matriz_s[fil][1];
      nueva1[fil][2]=matriz_s[fil][2];
      nueva1[fil][3]=matriz_s[fil][3];
      nueva1[fil][4]=matriz_s[fil][4];
    }
    else {
      Serial.print(fil);
      Serial.print(":");
      Serial.println('S');
    }
  }



  for(int p=0;p<20;p++)
  Serial.print(nueva1[p][0]);
  Serial.println(nueva1[p][0]);
}
