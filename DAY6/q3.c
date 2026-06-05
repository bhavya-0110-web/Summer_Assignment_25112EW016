#include<stdio.h>
int main()
{
    int binary,count=0;
    printf("enter a binary number:");
    scanf("%d",&binary);
    while(binary>0)
    {
       int r= binary%10;
       if(r==1)
       
        count++ ;
       
       binary=binary/10;
    }
    printf("number of set bits in enetered binary number is:%d",count);

}