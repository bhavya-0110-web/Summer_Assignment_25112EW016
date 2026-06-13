#include<stdio.h>
int main()
{
    int n,arr[100],sum=0;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    printf("enter the values in array:\n");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("sum of array elements=%d\n",sum);
    
    printf("avg of array elements =%f",(float)sum/n);
}
//we added value in each element of array 
//and initialized a variable sum with 0;