#include<stdio.h>
int main()
{   int arr[100],n;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    printf("enter numbers in array in a sequence:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxfreq=0,maxelement;
    for(int i=0;i<n;i++)
    {   int count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]=arr[j])
            count++;
        }
        if (count>maxfreq)
        {
            maxfreq=count;
            maxelement=arr[i];
    }
}
    printf("max frequency element is:%d ",maxelement);
    
}