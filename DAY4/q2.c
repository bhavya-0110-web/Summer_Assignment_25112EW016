#include<stdio.h>
int main()
{
    int a=0,b=1,n,c;
    printf("enter which term you want to know in fibonacci");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)        
   { 
        c=a+b ;
        if(i==(n-2))
        {
            printf("%dth term in its fibonacci is:%d",n,c);
            break;
        }
        else
        {
        a=b;
        b=c;
       }
    }
}