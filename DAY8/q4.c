#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        printf("\n");
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
    }
}
/*
here we have printed the value of i not j 
*/