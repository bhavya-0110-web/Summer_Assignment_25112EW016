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
            for(int j=0;j<=i-1;j++)
            {
                printf("%c",'A'+j);
            }
            for(int k=i-2;k>=0;k--)
            {
                printf("%c",'A'+k);
            }
        }
    }
}