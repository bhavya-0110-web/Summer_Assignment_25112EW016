#include<Stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        printf("\n");
        {  
            for (int j=1;j<=n-i;j++)
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
j iterator is to print spaces
k iterator is to print star 
key point is that loop with j iterator
and k iterator runs simultaneously
 */