#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print(char **s,int r);
void duplicate(char **s,int r,int c);
int alphadist(char **s,int r,int c);
void stats(char **s,int r,int c);
void perdist (char **s,int r,int c,int l);
void sort(char **s,int r,int c);
void read(char **s,int r,int c);
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
	sort(s,r,c);
	stats(s,r,c);
	l=alphadist(s,r,c);
	perdist(s,r,c,l);
	duplicate(s,r,c);
}
void read(char **s,int r,int c)
{
	printf("Enter %d words into Words array: ",r );
	for (int i = 0; i < r; ++i)
	{
		scanf("%s",s[i]);
	}
}
void sort(char **s,int r,int c)
{
	char temp[c];
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < r-1-i; ++j)
		{
			if( strcasecmp(s[j],s[j+1]) > 0 )
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	/*for (int i = 0; i < r; ++i)
	{
		for (int j = 0; i < c-1; ++j)
		{
			if(s[i][j+1]=='\0')
				break;
			if(s[i][j]==' ')
			{
				s[i][j+1]='\n';
				break;
			}
			
		}
	}*/
	print(s,r);
	/*for (int i = 0; i < r; ++i)
	{
		printf("%s ",s[i]);
		
	}*/
}
void stats(char **s,int r,int c)
{
	int n1=0,n2=0,n3=0,n4=0,temp;
	for (int i = 0; i < r; ++i)
	{
		temp=strlen(s[i]);
		if( temp>0 && temp<3 )
			n1++;
		else if( temp>=3 && temp<=5 )
			n2++;
		else if( temp>=6 && temp<=10)
			n3++;
		else n4++;
	}
	printf("\nTotal number of words with Length 1-2: %d\n",n1);
	printf("Total number of words with Length 3-5: %d\n",n2);
	printf("Total number of words with Length 6-10: %d\n",n3);
	printf("Total number of words with Length more than 10: %d\n",n4);
}
int alphadist(char **s,int r,int c)
{
	int l=0,v=0,cl=0;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if(s[i][j]=='\0')
				break;
			if( s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='i' || s[i][j]=='o' || s[i][j]=='u' || s[i][j]=='A' || s[i][j]=='E' || s[i][j]=='I' || s[i][j]=='O' || s[i][j]=='U')
			v++;
			if( s[i][j]>=65 && s[i][j]<=97)
			cl++;
			if(s[i][j]!=32 && s[i][j]!='\0')
			{
				l++;
				printf("%c\n",s[i][j] );
			}
			     
		}
	}
	printf("Total number of letters present: %d\n",l);
	printf("Total number of Vowels present: %d\n",v);
	printf("Total number of Consonants present: %d\n",(l-v));
	printf("Total number of Capital Letters present: %d\n",cl);
	printf("Total number of Small letters present: %d\n",(l-cl));
	return(l);
}
void perdist (char **s,int r,int c,int l)
{
	int *arr,temp;
	arr=(int*)calloc(26,sizeof(int));
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if(s[i][j]!=32)
			{
				//if(s[i][j]<=90 || s[i][j]>=65)
				//	s[i][j]=(char)(s[i][j]+32);
				temp=s[i][j]-97;
				arr[temp]++;
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
	//print(s,r);
}
void duplicate(char **s,int r,int c)
{
	for (int i = 0; i < r-1; ++i)
	{
		if( strcasecmp(s[i],s[i+1])==0)
		{
			//s[i+1][0]='\0';
			//s[i+1]=NULL;		
			printf("%s ",s[i]);
		}
	}
	printf("The unique string is \n");
	print(s,r);
	/*for (int i = 0; i < r; ++i)
	{
		if(s[i][0]=='\0')
			continue;
		//if(s[i]!=NULL)
		printf("%s, ",s[i]);
	}*/
}
void print(char **s,int r)
{
	for (int i = 0; i < r; ++i)
	{
		printf("%s ",s[i]);
	}
}


