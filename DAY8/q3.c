#include<stdio.h>
int main()
{
    int n;
    printf("enter height of pyramid:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n");
        for(int j=0;j<=(i-1);j++)
        {
            printf("%c",'A'+j);
        }
    }
   
}
/*
'A' represents the ASCII value of A so it will print the character whose ASCII
value is (ASCII value of A + j)
*/
