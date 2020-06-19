#include<stdio.h>
int fact(int a);
void main()
{
    printf("Enter number\n");
    int n;
    scanf("%d",&n);
    printf("%d\n",fact(n));
}
int fact(int a)
{
    if(a==0)
    return 1;
    else
    return(fact(a-1)*a);
}        
