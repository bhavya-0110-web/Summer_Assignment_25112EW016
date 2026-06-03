#include<stdio.h>
int main()
{
    int a,b;
    printf("input two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
{
    for(int i=b;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("GCD of two input numbers is:%d",i);
            break;
        }
        
    }
}
else 
{for(int i=a;i>=1;i--)
{
    if(a%i==0&&b%i==0)

   { printf("GCD of input numbers is:%d",i);
    break;
   }
}
}
return 0;
}