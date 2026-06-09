#include<stdio.h>
int main()
{
    int n=5;
    for(int i=0;i<=n-1;i++)
    {
        printf("\n");
        for(int j=0;j<=i;j++)
        {
            printf("%c",('A'+i));
        }
    }
}
/*
here we have printed the character whose ASCII value is (ASCII value of A + i)
not A +j    b'coz  we want repetition of character and in the loop of j iterator 
j is variable only i is fixed
*/