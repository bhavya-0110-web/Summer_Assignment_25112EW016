#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter a number n whose factorial you want to print\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        fact*=i;

    }
    printf("factorial of %d is\n %d",n,fact);
    return 0;
}