#include<stdio.h>
int main()
{
    int n=5,arr[100];
    printf("enter elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
       {
        arr[j]=arr[i];
        j++;
       }
    }
    
   for(int i=0;i<n;i++)
   {if(arr[i]==0)
   { arr[j]=0 ;
    j++;
   }
   }
   for(int j=0;j<n;j++)
   {
    printf("%d ",arr[j]);
   }
}