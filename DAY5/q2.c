#include<stdio.h>
int main()
{  /* A strong number is a special number whose sum of the
     factorials of its digits is equal to the original number itself.
     */
    int n,sum=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    { int fact=1;      /*fact is initialized here so that for each digit factorial reset
                         to 1
                         */
        int r=n%10;
        for(int i=r;i>=1;i--)
        {
            fact*=i;
        }
        sum+=fact;
        n=n/10;
    }
    if(sum==temp)
    printf("entered number is a strong number");
    else
    printf("entered number is not a strong number");
    return 0;
}