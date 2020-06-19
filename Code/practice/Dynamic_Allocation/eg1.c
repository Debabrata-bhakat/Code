#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter number of students\n");
	scanf("%d",&n);
	float *height,sum=0,avg;
	height=(float*) malloc(n*sizeof(float));
	if(height==NULL)
	{
		printf("Cannot allocate memory\n");
	} 
	for(int i=0;i<n;i++)
	{
		printf("Enter height of %d student\n",(i+1));
		scanf("%f",(height+i));   //scanf("%f",&height[i])
	}
	for (int i = 0; i < n; i++)
	{
		sum+=height[i];
	}
	avg=sum/n;
	printf("The average height is:%g\n",avg);
	free(height);
}