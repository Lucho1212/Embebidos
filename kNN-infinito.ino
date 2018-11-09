#include"datos_entrenamiento.h"
#include"datos_test.h"
int col=0;
int fil=0;
int fil2=0;
float distancia;
float distanciamenor=1000;
float result;
float fila;
float guardar[120][2];
float aux;
int on=1;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {

  for (;fil<120;fil++) 
{
    distancia=sqrt(pow(matriz[fil][0]-prueba[0][0],2)+
                   pow(matriz[fil][1]-prueba[0][1],2)+
                   pow(matriz[fil][2]-prueba[0][2],2)+
                   pow(matriz[fil][3]-prueba[0][3],2));  
    
    guardar[fil][0]=distancia;
    guardar[fil][1]=fil;
    
}
fil = 0;
  for (;fil<120;fil++) 
{
    if(guardar[fil][0] >= guardar[fil+1][0])
    {
      aux=guardar[fil+1][0];
      guardar[fil+1][0]=guardar[fil][0];
      guardar[fil][0]=aux;
      }
  
}

fil=0;
if(on==1){
  for (;fil<120;fil++) 
{
  for(;col<2;col++)
  {
    Serial.print(guardar[fil][col]);
    Serial.print(',');
    delay(25);
    }
    col=0;
    Serial.println(" ");
  }
  on=0;
  }

}
  int knn (int k)
  {
    
    
    }
  
