#include<stdio.h>
int main()
{
    int n,prime=0;
    printf("enter a number\n");
    scanf("%d",&n);
   if(n==2)
   {
    printf("it is a prime");
   }
   for(int i=2;i<=n/2;i++)
   {
    if(n%i==0)
    
        prime++;
        break;
    }
    if(prime>0)
    printf("entered number is not a prime");
    else
    printf("entered number is a prime");
    return 0;
}