#include<stdio.h>

typedef struct $
{
	float real;
	float imag;	
} _COMPLEX;
_COMPLEX add(_COMPLEX a, _COMPLEX b);
_COMPLEX add(_COMPLEX a, _COMPLEX b)
{
	_COMPLEX tmp;
	tmp.real=a.real+b.real;
	tmp.imag=a.real+b.imag;
	return(tmp);

}
int main()
{
	_COMPLEX num1,num2,sum;
	scanf("%f %f",&num1.real,&num1.imag);
	scanf("%f %f",&num2.real,&num2.imag);
	sum= add(num1,num2);
	printf("\nSum is: %f + i%f",sum.real,sum.imag);
}