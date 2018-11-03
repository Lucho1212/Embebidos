int matriz [10][4]={{3,5,-6,7},{3,8,6,17},{2,-4,4,27},{2,4,8,10},{2,4,-2,5},{4,5,6,7},{5,-8,6,-7},{1,5,16,8},{0,5,12,7},{4,5,16,7}};
int i =0;
int j=0;
int sumaf=0;
int sumac=0;
int nummayorfi=0;
int numenorco=50;
int nummayorma=0;
int numenorma=50;
void setup() {
Serial.begin(9600);
}

void loop() {
sumafila();
sumacolum();
nummayorf();
numenorc();
nummayorm();
numenorm();

}
 void sumafila ()
 {
  for(;i<10;i++)
{
  for(;j<4;j++)
  {
sumaf=sumaf+matriz[i][j];
}
sumaf=sumaf/4;
Serial.print("Promedio de fila ");
Serial.print(i+1);
Serial.print(" es = ");
Serial.println(sumaf);
sumaf=0;
j=0;
}
i=0;
delay(300);
  }

  
 void sumacolum ()
 {
  for(;i<4;i++)
{
  for(;j<10;j++)
  {
sumac=sumac+matriz[j][i];
}
sumac=sumac/10;
Serial.print("Promedio de columna ");
Serial.print(i+1);
Serial.print(" es = ");
Serial.println(sumac);
sumac=0;
j=0;
}
i=0;
delay(300);
  }

void nummayorf()
{
    for(;i<10;i++)
{
  for(;j<4;j++)
  {
    if(matriz[i][j]>nummayorfi)
    {
      nummayorfi=matriz[i][j];
      }
}
Serial.print("Numero mayor de fila ");
Serial.print(i+1);
Serial.print(" es = ");
Serial.println(nummayorfi);
nummayorfi=0;
j=0;
}
i=0;
delay(300);
  }

void numenorc()
 {
  for(;i<4;i++)
{
  for(;j<10;j++)
  {
if(matriz[j][i]< numenorco)
  {
    numenorco=matriz[j][i];
    }
}
Serial.print("Numero menor de columna ");
Serial.print(i+1);
Serial.print(" es = ");
Serial.println(numenorco);
numenorco=0;
j=0;
}
i=0;
delay(300);
  }

  void nummayorm()
{
    for(;i<10;i++)
{
  for(;j<4;j++)
  {
    if(matriz[i][j]>nummayorma)
    {
      nummayorma=matriz[i][j];
      }
}
j=0;
}
Serial.print("Numero mayor de la matriz es = ");
Serial.println(nummayorma);
nummayorma=0;
i=0;
delay(300);
  }

  void numenorm()
  {
  for(;i<4;i++)
{
  for(;j<10;j++)
  {
if(matriz[j][i]< numenorma)
  {
    numenorma=matriz[j][i];
    }
}
j=0;
}
Serial.print("Numero menor de la matriz es = ");
Serial.println(numenorma);
numenorma=0;
i=0;
delay(300);
  }

