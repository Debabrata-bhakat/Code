#include<stdio.h>
typedef struct $
{
	char name[100];
	int roll;
	float cg;

}student;
void main()
{
	student s[100];
	printf("Enter number of students\n");
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		printf("Enter name roll no and cgpa of %d student\n",(i+1) );
		scanf("%s",s[i].name);
		scanf("%d",&s[i].roll);
		scanf("%f",&s[i].cg);
	}
	int mini=0,maxi=0;
	float min=s[0].cg,max=s[0].cg;
	for (int i = 0; i < n; ++i)
	{
		if(s[i].cg<min)
		{
			min=s[i].cg;
			mini=i;

		}
		if(s[i].cg>max)
		{
			max=s[i].cg;
			maxi=i;
		}
	}
	printf("The details of the student with the highest cgpa is\n");
	printf("Name: %s\nroll number: %d\n cgpa: %g\n",s[maxi].name,s[maxi].roll,s[maxi].cg );
	printf("The details of the student with the lowest cgpa is\n");
	printf("Name: %s\nroll number: %d\n cgpa: %g\n",s[mini].name,s[mini].roll,s[mini].cg );
}