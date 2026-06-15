#include<stdio.h>
int main()
{
    int n=10,arr[30];
    printf("enter numbers from 1 to 10:\n");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=\t",i);
        scanf("%d",&arr[i]);
    }
    printf("reverse of numbers is:\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
//to print reverse initialise i from last