#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(int i=n;i>1;i--)
    {   int prime=0;
        if(n%i==0)
        {  if(i==2)
            {
                printf("largest prime factor is :%d",i);
            }
          else
          {
            for(int j=2;j<=i/2;j++)
           { 
            
            if(i%j==0)
            {
                prime++;
            }
            
           }
           if(prime==0)
            {
                printf("largest prime factor is:%d",i);
            break;
            }
           }
        }

    }
}