int t=0;
int velo=0;
int x1=1200;
int i=0;
int b=0;
int x=50;
int y=425;
int bol;
void setup()
{
  size(1200,700);
  background(255);


}

void draw()
{
   background(255);
     if(t==1)
     text("PLAY STAR",600,50);
  
  fill(200,0,0);
 rect(50,600,50,50);
   if(t==1)
   {
    figura();
    text(" INICIO",700,50);
   
     fill(0);
  strokeWeight(2);
  line(0,237,1200,237);
  fill(0);
  line(0,387,1200,387);
  fill(0);
  line(0,537,1200,537);



if(x1==1200 )
bol=int (random(1,4));

    if(bol==1 )
  {
  fill(255,0,0);
  ellipse(x1,430,20,20);
    fill(255,0,0);
  ellipse(x1,330,20,20);
  if(x1>0)
  {
    x1=x1-10;
  }
  else
  
  x1=1200;
}
  if(bol==2)
  {
  fill(255,0,0);
  ellipse(x1,430,20,20);
    fill(255,0,0);
  ellipse(x1,230,20,20);
  if(x1>0)
  {
    x1=x1-10;
  }
  else
  x1=1200;
}


if(bol==3)
  {
      fill(255,0,0);
  ellipse(x1,230,20,20);
    fill(255,0,0);
  ellipse(x1,330,20,20);
  if(x1>0)
  {
    x1=x1-10;
  }
  else
   x1=1200;
}
}
}

void figura() {
 
  
  beginShape();
         fill(0,0,0);
         vertex(55+x,5+y); 
         vertex(85+x,5+y);
         vertex(85+x,10+y); 
         vertex(90+x,10+y); 
         vertex(90+x,30+y); 
         vertex(65+x,30+y); 
         vertex(65+x,35+y); 
         vertex(80+x,35+y); 
         vertex(80+x,40+y);
         vertex(60+x,40+y); 
         vertex(60+x,50+y); 
         vertex(70+x,50+y);
         vertex(70+x,60+y);
         vertex(65+x,60+y);
         vertex(65+x,55+y);
         vertex(60+x,55+y);
         vertex(60+x,75+y);
         vertex(55+x,75+y);
         vertex(55+x,85+y);
         vertex(50+x,85+y);
         vertex(50+x,90+y);
         vertex(45+x,90+y);
         vertex(45+x,107+y);
         vertex(52+x,107+y);
         vertex(52+x,110+y);
         vertex(42+x,110+y);
         vertex(42+x,95+y);
         vertex(37+x,95+y);
         vertex(37+x,90+y);
         vertex(32+x,90+y);
         vertex(32+x,95+y);
         vertex(27+x,95+y);
         vertex(27+x,100+y);
         vertex(25+x,100+y);
         vertex(25+x,107+y);
         vertex(32+x,107+y);
         vertex(32+x,110+y);
         vertex(22+x,110+y);
         vertex(22+x,90+y);
         vertex(17+x,90+y);
         vertex(17+x,85+y);
         vertex(15+x,85+y);
         vertex(15+x,78+y);
         vertex(12+x,78+y);
         vertex(12+x,80+y);
         vertex(10+x,80+y);
         vertex(10+x,75+y);
         vertex(5+x,75+y);
         vertex(5+x,47+y);
         vertex(7+x,47+y);
         vertex(7+x,57+y);
         vertex(10+x,57+y);
         vertex(10+x,62+y);
         vertex(15+x,62+y);
         vertex(15+x,67+y);
         vertex(25+x,67+y);
         vertex(25+x,62+y);
         vertex(30+x,62+y);
         vertex(30+x,57+y);
         vertex(35+x,57+y);
         vertex(35+x,52+y);
         vertex(40+x,52+y);
         vertex(40+x,47+y);
         vertex(45+x,47+y);
         vertex(45+x,10+y);
         vertex(50+x,10+y);
         vertex(50+x,5+y);
         vertex(55+x,5+y);
       endShape();  
       noFill();
       fill(255,255,255);
       rect(55+x,10+y,10,10);
}
void mouseClicked()
{
    if(mouseButton==LEFT&&mouseX>50&&mouseX<100&&mouseY>600&&mouseY<650)
{
  t=1;
  }
}

void keyPressed() {
  background(255);
  // fill(0);
  //println(keyCode); //key...convierte de hex a letra   keyCode..valor hex
  //textSize(50);
  //fill(0);
  //text(keyCode, 100, 200);
  velo=int(random(1,7));

  switch(keyCode) {
case 38:
if(y>273)
    y=y-150;
    break;
  case 40:
  if(y<300)
    y=y+150;
    break;
  case 39:
  }
;}
