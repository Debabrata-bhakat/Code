#include<stdlib.h>
#include<stdio.h>
typedef struct $
{
	int roll ;char dept_code[25];float cgpa;	
}stud;
void main()
{
	int n;
	float sum=0,avg;
	printf("Enter number of students\n");
	scanf("%d",&n);
	stud *s;
	s=(stud*) malloc(n*sizeof(stud));
	for (int i = 0; i < n; ++i)
	{
		printf("Enter roll dept and cgpa of %d student\n",(i+1));
		scanf("%d %s %f",&((s+i)->roll),((s+i)->dept_code),&((s+i)->cgpa));
	}
	for (int i = 0; i < n; ++i)
	{
		sum+=(s+i)->cgpa;
	}
	avg=sum/n;
	free(s);
	printf("Average cgpa is:%g\n",avg);
}