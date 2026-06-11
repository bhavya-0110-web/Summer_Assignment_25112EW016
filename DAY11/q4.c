#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    printf("factorial of input number is: %d",fact(n));
    return 0;
}
int fact(int n)
{  
    if(n==1)
    return 1;

    else
    return n*fact(n-1);
    
}
/*
here recursion will be applied bcz factorial of 5=5*4*3*2*1
and 4*3*2*1 can be written as factorial of 4
*/

