#include<stdio.h>
int fib(int n);
int main()
{
    int num;
    printf("enter how many terms you want to print in fibonacci");
    scanf("%d",&num);
    printf("fibonacci upto that much terms is:\n");
    for(int i=1; i<=num;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}
int fib(int n)
{
if(n==1)
return 0;
if(n==2)
return 1;
else
return fib(n-1)+fib(n-2) ;
}