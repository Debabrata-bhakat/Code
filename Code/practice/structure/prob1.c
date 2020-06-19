#include<stdio.h>

typedef struct $
{
	float real;
	float img;	
} num;
void add(num num1,num num2);
void sub(num num1,num num2);
void mul(num num1,num num2);
void div(num num1,num num2);
void print(num numx);
void main()
{
	num num1,num2;
	int c;
	printf("Enter first number's real and complex part\n");
	scanf("%f%f",&num1.real,&num1.img);
	printf("Enter second number's real and complex part\n");
	scanf("%f%f",&num2.real,&num2.img);
	printf("Enter choice\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		add(num1,num2);
		break;

		case 2:
		sub(num1,num2);
		break;

		case 3:
		mul(num1,num2);
		break;

		case 4:
		div(num1,num2);
		break;

		default:
		printf("Wrong choice entered\n");
	}
}

void add(num num1,num num2)
{
	num num3;
	num3.real=num1.real + num2.real;
	num3.img=num1.img + num2.img;
	print(num3);
}

void sub(num num1,num num2)
{
	num num3;
	num3.real=num1.real - num2.real;
	num3.img=num1.img - num2.img;
	print(num3);
}

void mul(num num1,num num2)
{
	num num3;
	num3.real= num1.real*num2.real- num1.img*num2.img;
	num3.img=num1.img*num2.real + num1.real*num2.img;
	print (num3);
}

void div(num num1,num num2)
{
	num num3;
	num3.real= (num1.real*num2.real + num1.img*num2.img)/(num2.real*num2.real + num2.img*num2.img);
	num3.img= (num1.img*num2.real - num1.real*num2.img)/(num2.real*num2.real + num2.img*num2.img);
	print(num3);
}
void print(num numx)
{
	printf("%g + %gi\n",numx.real,numx.img);
}
