#include<stdio.h>
#include<math.h>
void main()
{
 float a1,a2,b1,b2,z1,z2,argz1,argz2;
 printf("Enter real and complex part of first number\n");
 scanf("%f",&a1);
 scanf("%f",&b1);
 printf("Enter real and complex part of second number\n");
 scanf("%f",&a2);
 scanf("%f",&b2);
 printf("Complex number 1= %f + i%f\n",a1,b1);
 printf("Complex number 2= %f + i%f\n",a2,b2);
 z1= sqrt(a1*a1+b1*b1);
 z2= sqrt(a2*a2+b2*b2);
 printf("Modulus of 1= %f",z1);
 printf("Modulus of 2= %f",z2);
 printf("Complex number 1= %f - i%f\n",a1,b1);
 printf("Complex number 2= %f - i%f\n",a2,b2);
 argz1= atan(b1/a1);
 argz2= atan(b2/a2);
 printf("Argument of first number= %f\n",argz1);
 printf("Argument of second number= %f\n",argz2);
 printf("Sum= %f + i%f\n",a1+a2,b1+b2);
 printf("Difference= %f + i%f\n",a1-a2,b1-b2);
 printf("Multiplication= %f + i%f\n",(a1*a2-b1*b2),(a1*b2+a2*b1));
}
 
 
