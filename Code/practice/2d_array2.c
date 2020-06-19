#include <stdio.h>
#include <string.h>
void main()
{
    char s1[100],s2[100],s3[200];
    printf("Enter first sentence ");
    fgets(s1, sizeof(s1), stdin);  // read string
    strcat(s1," ");
    printf("Enter second sentence ");
    fgets(s2, sizeof(s2), stdin);  // read string
    strcat(s2," ");
    int l1,l2,c1=0,c2=0,flag=1;
    l1=strlen(s1);
    l2=strlen(s2);
    for(int i=0;i<(l1+l2);)
    {
        if(c1<l1 && (flag%2==1))
        {
            do
            {
                s3[i++]=s1[c1++];
            }
            while(s1[c1-1]!=' ');
        }
        
        if(c2<l2 && (flag%2==0))
        {
            do
            {
                s3[i++]=s2[c2++];
            }
            while(s2[c2-1]!=' ');
        }
        flag++;
    }  
    printf("%s",s3);
}          
                
        
            
    
    
