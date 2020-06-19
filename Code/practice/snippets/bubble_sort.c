#include<stdio.h>
void sort(int *a);
void main()
{
	printf("Enter 10 numbers:\n");
	int a[10];
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d",a+i);
	}
	sort(a);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ",a[i] );
	}
}
void sort(int *a)
{
	int temp;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9-i; ++j)
		{
			if( a[j] > a[j+1] )
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}