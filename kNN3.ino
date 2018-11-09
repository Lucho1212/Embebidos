#include"datos_entrenamiento.h"
#include"datos_test.h"
int col=0;
int fil=0;
float distancia;
float distanciamenor=1000;
float distanciamenor2=1000;
float distanciamenor3=1000;
float result;
float result2;
float result3;
float filass1=0;
float filass2=0;
float filass3=0;
int on=1;
int on2=2;
float cont1;
float cont2;
float cont3;
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
    if(distancia<distanciamenor)
    {
      distanciamenor=distancia;
      result=matriz[fil][4];
        filass1=fil;
    }
}
fil=0;
distancia=0;
for (;fil<120;fil++) 
{
    distancia=sqrt(pow(matriz[fil][0]-prueba[0][0],2)+
                   pow(matriz[fil][1]-prueba[0][1],2)+
                   pow(matriz[fil][2]-prueba[0][2],2)+
                   pow(matriz[fil][3]-prueba[0][3],2));  
    if(distancia<distanciamenor2 && distancia>distanciamenor)
    {
      distanciamenor2=distancia;
      result2=matriz[fil][4];   
     filass2=fil;
    }
}
fil=0;
distancia=0;
for (;fil<120;fil++) 
{
    distancia=sqrt(pow(matriz[fil][0]-prueba[0][0],2)+
                   pow(matriz[fil][1]-prueba[0][1],2)+
                   pow(matriz[fil][2]-prueba[0][2],2)+
                   pow(matriz[fil][3]-prueba[0][3],2));  
    if(distancia<distanciamenor3 && distancia>distanciamenor2)
    {
      distanciamenor3=distancia;
      result3=matriz[fil][4];     
      filass3=fil;
    }
}

if(result==1.00 || result2==1.00 || result3==1.00)
{
cont1++;
}

if(cont1>=2 && on2==2 )
{
Serial.print("El mas cercano es el ");
Serial.print("1");
on2=1;
}
if(result==2.00 || result2==2.00 || result3==2.00)
{
cont2++;
}

if(cont2>=2 && on2==2 )
{
Serial.print("El mas cercano es el ");
Serial.print("2");
on2=1;
}

if(result==3.00 || result2==3.00 || result3==3.00)
{
cont3++;
}

if(cont3>=2 && on2==2 )
{
Serial.print("El mas cercano es el ");
Serial.print("3");
on2=1;
}
if(on==1){
  Serial.println(filass1);
  Serial.println(distanciamenor);
  Serial.println(result);
  Serial.println("--------------");
  Serial.println(filass2);
  Serial.println(distanciamenor2);
  Serial.println(result2);
  Serial.println("--------------");
  Serial.println(filass3);
  Serial.println(distanciamenor3);
  Serial.println(result3);
  on=0;
  }

}
  /*
for (;fil<120;fil++) 
{
  for(;col<5;col++)
  {
    Serial.print(matriz[fil][col]);
    Serial.print(',');
    delay(25);
    }
    col=0;
    Serial.println(" ");
  }
  */
  
