#include<stdio.h>
int main()
{
    int n=5,arr[100];
    printf("enter elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    //shifting 1st element of original array to last
    printf("if array is rotated left by 1 place it would look as~~~\n");
   arr[n-1]=temp;
   for(int i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
}