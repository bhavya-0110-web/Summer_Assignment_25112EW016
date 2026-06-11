#include<stdio.h>
void checkprime(int a);
int main()
{
    int n;
    printf("enter a number lets see if it is prime or not:\n");
    scanf("%d",&n);
    checkprime(n);
}
void checkprime(int a)
{
    int prime=1;
    if(a==2)
    printf("yes,its a prime number");
    else
    {
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                prime--;
                break;
            }
        }
       if(prime==1)
       printf("yes its a prime number");
       else
       printf("Its not a prime number");
        

     }
}
/* 
we initialised variable 'prime' with 1 and let it change when 
 there is a factor of inputted number leaving 1 and the number itself
 so if value of prime changes that means there is some factor
 implying not being a prime number
 */