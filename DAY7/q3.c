#include<stdio.h>
int sumdigits(int n);
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("sum of it's digits is:%d",sumdigits(num));
    return 0;
  }
  int sumdigits(int n)
  {
    if(n==0)
    return 0;
    else
    return (n%10+sumdigits(n/10));
  }