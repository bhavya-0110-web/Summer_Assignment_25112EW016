#include<stdio.h>
int main()
{
    int n,arr[100];
    int largest=arr[0];
    int smallest=arr[0];
    printf("enter number of elements in array:");
    scanf("%d",&n);
    printf("first enter the elements in array:\n");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(arr[i]>largest)
       largest=arr[i];
       if(arr[i]<smallest)
       smallest=arr[i];
    }
    printf("largest value is:%d\n",largest);
    printf("smallest value is:%d",smallest);
}
//we did not know in array which position's value is largest or smallest
//we assumed largest and smallest value at the 0th position only at the same time
//then updated it if we found something larger or smaller