#include<stdio.h>
void check_perfect(int n);
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    check_perfect(n);
    return 0;
}
void check_perfect(int n)
{   int sum=0,temp=n;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i ;
    }
    if(sum==temp)
    printf("entered number is perfect:)");
    else
    printf("entered number is not perfect :(");
}