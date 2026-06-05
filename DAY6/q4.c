#include<stdio.h>
int main()
{
    int x,n,result=1; 
    printf("enter number and its power:");
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++)
    {
       result=result*x;
    }
    printf("number to the power is:%d",result);
    return 0;
}