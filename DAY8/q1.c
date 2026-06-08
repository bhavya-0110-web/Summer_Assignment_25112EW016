#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   printf("\n");
        for(int j=1;j<=i;j++)
        {
            printf("%c",'*');
        }
    }
}
/* 
as soon as the compiler enters loop ,firstly,it will encounter i variable 
i variable is used here to shift to next rows
whereas j variable is to print characters in the same row
 */