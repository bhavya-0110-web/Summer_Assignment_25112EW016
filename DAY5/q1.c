#include<stdio.h>
int main()
{  /*
    perfect number is a number which is equal to sum of all the positive divisors
    of the number except the number itself
    */
    int n,sum=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)       /*
                              we will divide the entered number from 1 to (number-1) if 
                                it that divides the number then we will take in the 
                                 variable- sum...initialized with 0.
                                */
      {  
        if(n%i==0)
         sum+=i;
    }
    if(sum==n)
    printf("entered number is a perfect number");
    else
    printf("not a perfect number");
    return 0;
    
}