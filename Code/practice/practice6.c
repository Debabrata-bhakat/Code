#include<stdio.h>
#include<math.h>
int A[20];
int n,s;
void populate();
void populate()
{
    printf("Enter the size of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("A[%d]= ",i);
        scanf("%d",&A[i]);
    }   
}    
void main()
{
    int sum,temp,d,i,flag=0,c=0;
    populate();
    printf("Enter the sum");
    scanf("%d",&s);
    for( c=0;c<pow(2,n);c++)
    {
        sum=0;
        i=0;
        temp=c;
        while(temp>0)
        {
            d=temp%2;
            if(d==1)
            {
                sum=sum+A[i];
            }
            i++;
            temp=temp/2;
        }
        if(sum==s)
        {
            flag=1;         
            break;
        }
    }
    i=0;
    temp=c;
    printf("\n%d= ",s);
    while(temp>0)
    {
        d=temp%2;
        if(d==1)
        printf("A[%d]+",i);
        i++;
        temp=temp/2;        
    }       
    i=0;
    temp=c;
    printf("=");
    while(temp>0)
    {
        d=temp%2;
        if(d==1)
        printf("%d+ ",A[i]);
        i++;
        temp=temp/2;        
    } 
}          
                
            
        
                
