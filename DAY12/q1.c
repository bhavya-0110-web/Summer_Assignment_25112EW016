#include<stdio.h>
void check(int n);
int main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    check(a);
    return 0;
}
void check(int n)
{   int rev=0;
    int temp=n;
    while(n>0)
    {   
        int r=n%10;
        rev=rev*10+r ;
        n=n/10;

    }
    if(rev==temp)
    printf("entered number is palindrome");
    else
    printf("entered number is not a palindrome number");
}
//a number is palindrome if it is equal to its reverse too.
/*
we stored our original value in the variable temp ....we at first found it's reverse then 
checked if the reverse *rev* is equal to the original value
*/