#include<stdio.h>
int main()
{
    int n;
    printf("enter a number n whose table you want to print");
    scanf("%d",&n);
    printf("multiplication table is:\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
    return 0;

}