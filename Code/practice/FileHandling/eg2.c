#include<stdio.h>
#include <stdlib.h>
int main()
{
	char c[1000];
	FILE *fptr;
	if( (fptr=fopen("eg2.txt","r") ) == NULL)
	{
		printf("Error\n");
		exit(1);
	}
	fscanf(fptr,"%[^EOF]",c);
	printf("Data from file:\n%s\n",c );
	fclose(fptr);
	return 0;
}