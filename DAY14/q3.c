#include<stdio.h>
int main()
{
    int n=10,arr[300],k,key;
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
   
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
       {
          largest=arr[i];
          key=i;
       }
    }
    
    int sec_largest=arr[0];
    for(int i=0;i<n;i++)
    {  if(i==key)
        {
            continue;
        }
       else if(arr[i]>sec_largest)
       sec_largest=arr[i];
    }   
    printf("second largest in the array is:%d",sec_largest);
    
}