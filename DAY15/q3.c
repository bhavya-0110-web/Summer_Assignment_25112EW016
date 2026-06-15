#include<stdio.h>
int main()
{
    int n=5,arr[100];
    printf("enter elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    //shifting last element of original array to 1st place
    printf("if array is rotated right by 1 place it would look as~~~\n");
   arr[0]=temp;
   for(int i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
}