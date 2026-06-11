#include<stdio.h>
int max(int a, int b);
int main()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("%d is maximum between these two",max(a,b));
    return 0;
}
int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
/* simple logic is that main function calls user defined function and 
according to it's definition it tells which is maximum
*/ 