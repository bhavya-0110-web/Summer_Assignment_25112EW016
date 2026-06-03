#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the range in which you want to print prime numbers\n");
    scanf("%d%d",&a,&b);
    printf("prime numbers among this range are:\n");
    for(int i=a;i<=b;i++)
    { int prime=0;
    if(i==2)
    {
    printf("%d\n",i);
    }
    else
    for(int j=2;j<=i/2;j++)
    { 
        if(i%j==0)
       { prime++;
        break;
       }
     
    }
     if(prime==0)
     printf("%d\n",i);
    
    }
}