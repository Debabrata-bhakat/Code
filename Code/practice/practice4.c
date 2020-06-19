#include<stdio.h>
#include<math.h>
int d,j=0;
float A[10];
float evalpoly(float x);
void displaypoly();
void main()
{
 float root,tempa,tempb,tempavg;
 int check=0;
 printf("Enter the degree of polynomial\n");
 scanf("%d",&d);
 for(int i=0; i<=d;i++)
 {
  printf("Coefficient of x^%d = ",i);
  scanf("%f",&A[i]);
 }
 for(int i=0;i<=10;i++)
 {
  if(evalpoly(i)>-pow(10.0,-3) && evalpoly(i)<pow(10.0,-3))
  {
   root= i;
   check=1;
   break;
  } 
 }
 if(check==0)
 {
  for(j=1;j<=10;j++)
  {
   if(evalpoly(j)*evalpoly(j-1)<0)
   {
    check =2;
    break;
   } 
  }
 } 
  tempa=j-1;
  tempb=j;
  while(check==2)
  {
   tempavg=(tempa+tempb)/2;
   if(evalpoly(tempavg)>-pow(10.0,-3) && evalpoly(tempavg)<pow(10.0,-3))
   {
    root= tempavg;
    break;
   }
   else if(evalpoly(tempavg)*evalpoly(tempa)<0)
   tempb=tempavg;
   else 
   tempa=tempavg;
  }
  displaypoly();
  if(check!=0)
  printf("Root=%f\n",root);
  else
  printf("No real root located\n");
 }


void displaypoly()
{
 printf("+(%f)*x^%d",A[0],0);
 for(int i=1; i<=d;i++)
 {
  printf("+(%f)*x^%d",A[i],i);
 }
 printf("\n");
}


float evalpoly(float x)
{
 float sum=0;
 for(int i=0; i<=d; i++)
 {
  sum+=pow(x,i)*A[i];
 }
 return(sum);
}
  
    
