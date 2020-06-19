#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	fp= fopen("~/practice/FileHandling/Raman.txt","w");
	printf("Input line and press EOF\n");
	while( (ch=getchar())!=EOF )
	{
		putc(ch,fp);
	}
	fclose(fp);
	printf("Output\n");
	fp=fopen("~/practice/FileHandling/Raman.txt","r");
	while( (ch=getc(fp))!=EOF )
	{
		printf("%c ",ch );
	}
	fclose(fp);
	return;
}
