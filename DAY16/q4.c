#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elelemnts in array:\n");
    scanf("%d",&n);
        int arr[n];
    printf("enter %d elements :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements are:\n");
    for(int i=0;i<n;i++)
    {  
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
                break;
        }
    }
}
}