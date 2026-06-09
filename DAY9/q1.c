#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        printf("\n");
        for(int j=n;j>=i;j--)
        {
            printf("%c",'*');
        }
    }
}
/*
i variable is to jump from line to line 
j variable is to print star character in the same line 
upto the terminating condition
*/