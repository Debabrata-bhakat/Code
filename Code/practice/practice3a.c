#include<stdio.h>
void main()
{
 int xm=-1,ym=-1,x,y,xmp=0,ymp=0;
 while(1)
 {
  printf("New point:");
  scanf("%d%d",&x,&y);
  if(x<0 || y<0)
  break;
  if(x>=xm && y>=ym)
  {
   xm=x;
   ym=y;
   xmp=0;
   ymp=0;
  }
  else if(x>xm && y<ym)
  {
   xmp=-1;
   ymp=-1;
  }
  else if(x<xm && y>ym)
  {
   xmp=-1;
   ymp=-1;
  }
  if(xmp==-1 && ymp==-1)
  printf("Current Champion: None\n");
  else 
  printf("Current Champion: (%d,%d)\n",xm,ym);
 }
}   
 
 
  
 
 
