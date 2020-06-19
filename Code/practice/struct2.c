/*program to try to swap two numbers by passing values-----Failed*/
#include<stdio.h>
typedef struct 
{
	int x;
	int y;
}num;
void swap(num n);
int main()
{
	printf("Enter two numbers\n");
	num a;
	scanf("%d %d",&a.x,&a.y);
	printf("%d %d\n",a.x,a.y);
	swap(a);
	printf("%d %d\n",a.x,a.y);
	return 0;
}

void swap(num n)
{
	int temp;
	temp=n.x;
	n.x=n.y;
	n.y=temp;
}


