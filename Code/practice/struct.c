/*program to find sum of two complex numbers*/
#include<stdio.h>
typedef  struct 
{
	float real;
	float comp;
}num;
num sum(num x,num y);
int main()
{
	printf("Enter two numbers\n");
	num a,b,s;
	scanf("%f %f",&a.real,&a.comp);
	scanf("%f %f",&b.real,&b.comp);
	s=sum(a,b);
	printf("%g + i%g\n",s.real,s.comp );
	return 0;
}
num sum(num x,num y)
{
	num n;
	n.real=x.real+y.real;
	n.comp=x.comp+y.comp;
	return(n);
}