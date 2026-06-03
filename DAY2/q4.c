#include<stdio.h>
int main()
{
    int n,rev=0,temp;
    printf("enter a two or more digit number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        int r; 
        r=n%10;
        rev=rev*10+r ;
        n=n/10;
    }
     if(temp==rev)
    printf("entered number is palindrome number");
    else
     printf("entered number is not a palindrome number");
    return 0;    
}
