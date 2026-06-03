#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("enter a two or more digit number");
    scanf("%d",&n);
    do
    {
        int r;
        r=n%10;
        rev=rev*10+r ;
        n=n/10;
    } while (n>0);
    printf("reverse of entered number is:%d",rev);
    return 0;    
}