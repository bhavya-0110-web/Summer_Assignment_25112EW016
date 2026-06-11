#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b;
    printf("input two operands or numbers:\n");
    scanf("%d%d",&a,&b);
    printf("the sum of both the operands is:%d",sum(a,b));
    return 0;
}
int sum(int a, int b)
{
    return a+b ;
}
/* for user defined function--
1st step is--> function declaration 
2nd step is--> function calling in main function
3rd step is--> function definition
*/