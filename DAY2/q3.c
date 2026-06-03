#include<stdio.h>
int main()
{
    int n,prod=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        int r;
        r=n%10;
        prod*=r;
        n=n/10;
    }
    printf("product of digits of an entered number is:%d",prod);
    return 0;
}