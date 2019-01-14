int i=0;
int x=0;
int y=0;
int ob1c1=0;
int ob1c2=0;
int ob1c3=0;
int ob1c4=0;
int ob2c1=0;
int ob2c2=0;
int ob2c3=0;
int ob2c4=0;
int ob3c1=0;
int ob3c2=0;
int ob3c3=0;
int ob3c4=0;
int ob4c1=0;
int ob4c2=0;
int ob4c3=0;
int ob4c4=0;


void setup() {
  size(1200, 700);
}


void draw() {
  fill(0,200,0);
  rect(550,100,100,100);
  fill(0,200,0);
  rect(200,300,100,100);
    fill(0,200,0);
  rect(900,300,100,100);
    fill(0,200,0);
  rect(550,500,100,100);
  
   if((x>495 && x<640)&&(y>55 && y<195))
  {
    ob1c1=1;
  }
  else
  {
    ob1c1=0;
  }
  
     if((x>495 && x<640)&&(y>50 && y<150))
  {
    ob1c2=1;
  }
  else
  {
    ob1c2=0;
  }
  
     if((x>490 && x<640)&&(y>55 && y<190))
  {
    ob1c3=1;
  }
  else
  {
    ob1c3=0;
  }
  
     if((x>495 && x<645)&&(y>55 && y<190))
  {
    ob1c4=1;
  }
  else
  {
    ob1c4=0;
  }
  
  ///////////////////////////////////////////////////////////////////////////////////
  
  if((x>145 && x<290)&&(y>300 && y<395))
  {
    ob2c1=1;
  }
  else
  {
    ob2c1=0;
  }
  
     if((x>145 && x<290)&&(y>250 && y<390))
  {
    ob2c2=1;
  }
  else
  {
    ob2c2=0;
  }
  
     if((x>140 && x<290)&&(y>255 && y<390))
  {
    ob2c3=1;
  }
  else
  {
    ob2c3=0;
  }
  
     if((x>145 && x<295)&&(y>255 && y<390))
  {
    ob2c4=1;
  }
  else
  {
    ob2c4=0;
  }
  /////////////////////////////////////////////////////////////////////

  
  if((x>845 && x<990)&&(y>300 && y<395))
  {
    ob3c1=1;
  }
  else
  {
    ob3c1=0;
  }
  
     if((x>845 && x<990)&&(y>250 && y<390))
  {
    ob3c2=1;
  }
  else
  {
    ob3c2=0;
  }
  
     if((x>840 && x<990)&&(y>255 && y<390))
  {
    ob3c3=1;
  }
  else
  {
    ob3c3=0;
  }
  
     if((x>850 && x<995)&&(y>255 && y<390))
  {
    ob3c4=1;
  }
  else
  {
    ob3c4=0;
  }
  
  /////////////////////////////////////////////////////////////////////////////
  
  if((x>495 && x<640)&&(y>455 && y<595))
  {
    ob4c1=1;
  }
  else
  {
    ob4c1=0;
  }
  
     if((x>495 && x<640)&&(y>450 && y<550))
  {
    ob4c2=1;
  }
  else
  {
    ob4c2=0;
  }
  
     if((x>490 && x<640)&&(y>455 && y<590))
  {
    ob4c3=1;
  }
  else
  {
    ob4c3=0;
  }
  
     if((x>495 && x<645)&&(y>455 && y<590))
  {
    ob4c4=1;
  }
  else
  {
    ob4c4=0;
  }
  
  
  //background(255);
  /* fill(0);
   textSize(50);
   text(i, 100, 100);
   i++;
   delay(1000);*/
  figura();
}

void figura() {
  beginShape();
  fill(247, 98, 67);
  vertex(10+x, 20+y);
  vertex(15+x, 20+y);
  vertex(15+x, 15+y);
  vertex(20+x, 15+y);
  vertex(20+x, 10+y);
  vertex(45+x, 10+y);
  vertex(45+x, 15+y);
  vertex(50+x, 15+y);
  vertex(50+x, 20+y);
  vertex(55+x, 20+y);
  vertex(55+x, 30+y);
  vertex(45+x, 30+y);
  vertex(45+x, 25+y);
  vertex(20+x, 25+y);
  vertex(20+x, 30+y);
  vertex(10+x, 30+y);
  vertex(10+x, 20+y);
  endShape();

  beginShape();
  fill(255, 235, 205);
  vertex(15+x, 30+y);
  vertex(15+x, 40+y);
  vertex(20+x, 40+y);
  vertex(20+x, 45+y);
  vertex(45+x, 45+y);
  vertex(45+x, 40+y);
  vertex(50+x, 40+y);
  vertex(50+x, 30+y);
  vertex(45+x, 30+y);
  vertex(45+x, 25+y);
  vertex(20+x, 25+y);
  vertex(20+x, 25+y);
  vertex(20+x, 30+y);
  vertex(15+x, 30+y);
  endShape();
  fill(0);
  rect(25+x, 25+y, 5, 7.5);
  rect(35+x, 25+y, 5, 7.5);
}

void keyPressed() {
  background(255);
  // fill(0);
  //println(keyCode); //key...convierte de hex a letra   keyCode..valor hex
  //textSize(50);
  //fill(0);
  //text(keyCode, 100, 200);
  
   switch(keyCode) {
  case 38:
    if((ob1c1==1)||(ob2c1==1)||(ob3c1==1)||(ob4c1==1))
  {

  }
  else
  {
  if(y>-5)
    y=y-5;
    else
    y=700;   
  }
      break;
  case 40:
  if((ob1c2==1)||(ob2c2==1)||(ob3c2==1)||(ob4c2==1))
  {

  }
  else
  {
  if(y<700)
    y=y+5;
    else 
    y=0;   
  }
    break;
  case 39:
  if((ob1c3==1)||(ob2c3==1)||(ob3c3==1)||(ob4c3==1))
  {

  }
  else
  {
    if(x<1170)
    x=x+5;
    else
    x=0; 
  }
    break;
  case 37:
  if((ob1c4==1)||(ob2c4==1)||(ob3c4==1)||(ob4c4==1))
  {

  }
  else
  {
   if(x>-5)
    x=x-5;
    else
    x=1170; 
  }
      break;
  }
}
