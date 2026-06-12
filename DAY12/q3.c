#include<stdio.h>
void fib(int n);
int main()
{
    int n;
    printf("enter number of terms in fibonacci:\n");
    scanf("%d",&n);
    printf("for this amount of terms the fibonacci is:\n");
    fib(n);
    return 0;
}
void fib(int n)
{
    int a=0,b=1,c;
    printf("%d ",a);
    printf("%d ",b);
    for(int i=1;i<=n;i++)
    {  c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
// in fibonacci series each successive term is the sum of it's two preceding terms
/*
with each loop we store or shift the values from c to b abd b to a
so that we can get the next term
*/