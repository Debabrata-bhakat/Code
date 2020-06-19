#import<stdio.h>
#include <stdlib.h>
#include <string.h>
void print(char **s,int r)
{
	for (int i = 0; i < r; ++i)
	{
		printf("%s ",s[i]);
	}
}
void perdist (char **s,int r,int c,int l)
{
	int *arr,temp=0;
	arr=(int*)malloc(26*sizeof(int));
	for (int i = 0; i < 26; ++i)
	{
		arr[i]=0;
	}
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if(s[i][j]!=32)
			{
				if(s[i][j]<=90 || s[i][j]>=65);
				//	s[i][j]=(char)(s[i][j]+32);
				temp=(int)(s[i][j]-97);
				arr[temp]=arr[temp]+3;
			}
		}
	}
	for (int i = 0; i < 26; ++i)
	{
		printf("\n%c [ %d% ]: ",(char)(i+97),arr[i]*100/l);
		for (int j = 0; j < arr[i]*100/l; ++j)
		{
			printf("=");
		}
	}
	print(s,r);
}
void read(char **s,int r,int c)
{
	printf("Enter %d words into Words array: ",r );
	for (int i = 0; i < r; ++i)
	{
		scanf("%s",s[i]);
	}
}
void main()
{
	int r,c,l;
	printf("Enter number of rows and coloums\n");
	scanf("%d%d",&r,&c);
	char **s,**s1;
	s=(char**)malloc(r*sizeof(int*));
	for (int i = 0; i < r; ++i)
	{
		s[i]=(int*)malloc(c*sizeof(int));
	}
	read(s,r,c);
	perdist(s,r,c,26);
}