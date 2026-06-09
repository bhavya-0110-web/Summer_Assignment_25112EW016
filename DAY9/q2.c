#include<stdio.h>
int main()
{
    int n=5;
    for(int i=n;i>=1;i--)
    {
        printf("\n");
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    }
}
/*
here iterator i is initialised with n so that 
we can print numbers starting from 1 otherwise if we had initialised 
i with 1 then the output would have been -
54321
5432
543
54
5
*/