#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
   if(a>b)
   {
    for(int i=a;;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("LCM of input numbers is:%d",i);
            break;
        }
    }
   }
   else
   {
    for(int i=b;;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("LCM is:%d",i);
            break;
        }
    }
   }
}