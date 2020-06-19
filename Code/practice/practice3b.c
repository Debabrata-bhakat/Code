#include<stdio.h>
#include<unistd.h>
#include<math.h>

void main()
{
 int n;
 float t,v,tflag=0;
 printf("Enter distance");
 scanf("%d",&n);
 printf("Time          Distance            Speed\n");
 for(int i=0; i<=n;i++)
 {
  t=sqrt(2*i/9.8);
  v=9.8*t;
  usleep((t-tflag)*1000000);
  printf("%f             %d                  %f\n",t,i,v);
  tflag=t;
 }
 printf("  !!! BANG !!!! BANG !!!! BANG !!!\n");
}  
 
