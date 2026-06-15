#include<stdio.h>
int main()
{
    int arr[30],n=10,key,fr=0;
    printf("enter elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter which element's frequency you want to know:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            fr+=1;
        }
    }
    printf("frequency of entered element is:%d",fr);

}
//frequency means how many times the entered element is present in the array