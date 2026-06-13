#include<stdio.h>
int main()
{
    int n=10,arr[100],count_even=0,count_odd=0;
    printf("enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        count_even++;
        else
        count_odd++ ;
    }
    printf("no. of even elements in this array is:%d\n",count_even);
    printf("no. of odd elements in this array is:%d",count_odd);
}