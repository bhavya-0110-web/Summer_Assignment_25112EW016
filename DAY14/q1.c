#include<stdio.h>
int main()
{
    int arr[30],n=10,key,found=0;
    printf("enter elements of array:\n");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
    printf("enter which element you want to find:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("%d is found at %dth position of array",key,i+1);
            found=1;
            break;
        }
    }
    if(found==0)
    printf("element not found:|");
}
//if found variable remains as it is then the element was not found
//we updated the *found* variable if we found it