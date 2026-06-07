#include<stdio.h>
int factorial(int n);
int main()
{
int num;
printf("give a number:\n");
scanf("%d",&num);
int f=factorial(num);
printf("factorial of given number is:%d",f);
}
int factorial(int n) 
{
    if(n==1)
  return 1;
  else
  return n*factorial(n-1) ;
    
}
/*factorial of a number is multiplication of all the 
                             numbers from 1 to that number
                             e.g. factorial of4=1*2*3*4
                             */