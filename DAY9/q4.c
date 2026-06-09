#include<Stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        printf("\n");
       if(i==1||i==n)
       {
       for(int j=1;j<=n;j++)
        {
            printf("%c",'*');
        }
        }
        else
        {
            for(int j=1;j<=n;j++)
            {  if(j==1||j==n)
                printf("%c",'*');
                else
                printf(" ");
                
            }
        }
    }
}
/*
the key point here to make desired space or hollowness 
here was printf(" ")<-- this hollow space
which creates a space of only one iterator
*/