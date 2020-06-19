/*program to find the perimeter of a polygon*/
#include<stdio.h>
typedef struct 
{
	float len[10];
	int sides;
}poly;
float pr(poly x);
int main()
{
	float peri=0;
	printf("Enter number of sides of polygon");
	poly a;
	scanf("%d",&a.sides);
	peri=pr(a);
	printf("Perimeter=%g",peri);
	return 0;
}
float pr(poly x)
{
	int y=0;
	for (int i = 0; i <x.sides; i++)
	{
		printf("Enter %d side",i+1);
		scanf("%f",&x.len[i]);
	}
	for (int i = 0; i < x.sides; i++)
	{
		y=y+x.len[i];
	}
	return (y);
}