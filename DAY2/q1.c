#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a two or more digit number\n");
    scanf("%d",&n);
    while(n>0)
    {  int r;
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("sum of digits of an entered number is:%d",sum);
    return 0;
}