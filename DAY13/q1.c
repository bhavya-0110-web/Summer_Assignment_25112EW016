#include<stdio.h>
int main()
{
    int arr[20];
    printf("enter array elements:\n");  //input values
    for(int i=0;i<5;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }

    //output or printing array elements
    printf("the array elements are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}