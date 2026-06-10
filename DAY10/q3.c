#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        printf("\n");
        {  for(int r=1;r<=n-i;r++)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            for(int k=i-1;k>=1;k--)
            {
                printf("%d",k);
            }
        }
    }
}