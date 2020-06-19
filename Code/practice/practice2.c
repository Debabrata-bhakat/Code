#include<stdio.h>
void main()
{ 
 int roll, att,m,ce,ca,cb,cc,cd,cp,gr=100,flag,flag1;
 char ch;
 printf("Enter the students roll no and attendance\n");
 scanf("%d%d",&roll,&att);
 if(att<80)
 printf("The Grade of %d is F(Shortage in attendance!)\n",roll);
 else
 {
  printf("Enter the subject marks\n");
  scanf("%d",&m);
  printf("Is this marks for supplementry examination/backlog?(Type 0 in not, 1 of yes)\n");
  scanf("%d",&flag);
  printf("Do you want absolute or relative marking(type 0 if not, 1 if yes)\n");
  scanf("%d",&flag1);
  switch (flag1)
  {
   case 0:
   if(m>=90)
   gr=1;
   else if(m>=80)
   gr=2;
   else if(m>=70)
   gr=3;
   else if(m>=60)
   gr=4;
   else if(m>=50)
   gr=5;
   else if(m>=40)
   gr=6;
   else 
   gr=7;
   break;
   
   case 1:
   printf("Set parameters cutt off:\n");
   printf("Cut-off for EX=\n");
   scanf("%d",&ce);
   printf("Cut-off for A=\n");
   scanf("%d",&ca);
   printf("Cut-off for B=\n");
   scanf("%d",&cb);
   printf("Cut-off for C=\n");
   scanf("%d",&cc);
   printf("Cut-off for D=\n");
   scanf("%d",&cd);
   printf("Cut-off for P=\n");
   scanf("%d",&cp);
   if(m>=ce)
   gr=1;
   else if(m>=ca)
   gr=2;
   else if(m>=cb)
   gr=3;
   else if(m>=cc)
   gr=4;
   else if(m>=cd)
   gr=5;
   else if(m>=cp)
   gr=6;
   else 
   gr=7;
   break;
   
   default:("Invalid Input\n");
  }
  switch(flag)
  {
   case 1:
   gr++;
   break;
   
   case 0:
   break;
   
   default:
   printf("Invalid Input\n");
  }
  printf("The grade of %d is",roll);
  if(gr==1)
  printf("EX\n");
  else if(gr==2)
  printf("A\n");
  else if(gr==3)
  printf("B\n");
  else if(gr==4)
  printf("C\n");
  else if(gr==5)
  printf("D\n");
  else if(gr==6)
  printf("p\n");
  else if(gr==7  || gr==8)
  printf("F\n");
 }
}  
   
   


   
