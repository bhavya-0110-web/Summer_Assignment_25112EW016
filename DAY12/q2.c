#include<stdio.h>
#include<math.h>
void armstrong(int n);
int main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    armstrong(a);
    return 0;
}
void armstrong(int n)
{
    int power=0;
    int temp =n;
    int fin=temp;
    do
    {
     int r=n%10;
     power++;
     n=n/10;
    } while (n>0);
    n=temp;
    int sum=0;
    while(n>0)
    {
        int r=n%10;
        sum=sum+pow(r,power) ;
        n=n/10;
    }
    if(sum==fin)
    printf("entered number is armstrong ");
    else
    printf("entered number is not armstrong");
    
}
/*
armstrong number is which is equal to the sum of it's digits each raised to the power of 
number of digits....
we stored *n* in *temp* bcz after counting the number of digits as the loop ends the 
value of *n* vanishes to 0
lly,after the loop to sum  the digits...
thus we stored n in temp and temp in fin...
*/