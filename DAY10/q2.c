#include<stdio.h>
int main()
{
    int n=5;
    for(int i=n;i>=1;i--)
    {
        printf("\n");
        {
            for(int j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(int k=1;k<=2*i-1;k++)
            {
                printf("%c",'*');
            }
        }
    }
}
/*
here the updation of i should be in decrement
aspect
*/