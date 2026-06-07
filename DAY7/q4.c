#include<stdio.h>
int reverse(int n,int rev);
int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
   printf("reverse of the entered number is:%d",reverse(num,0));

}
int reverse(int n,int rev)
{
    if(n==0)
    return rev;
    else
    return reverse(n/10,rev*10+n%10);
}
//for example reverse of 237 will be 732
