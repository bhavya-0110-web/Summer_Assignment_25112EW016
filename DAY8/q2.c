#include<stdio.h>
int main()
{
    int n;
    printf("enter height of pyramid:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n");
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    }
}
/*
i variable is used, to shift or jump to next line,
j variable is to print numbers upto the desired limit
*/