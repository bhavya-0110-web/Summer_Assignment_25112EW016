#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter no. of element in array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter a number:");
    scanf("%d",&sum);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
 printf("pair of elements whose sum is equal to the number entered is %d and %d\n",arr[i],arr[j]);
        }
    }

}