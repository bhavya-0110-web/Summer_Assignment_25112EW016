#include<stdio.h>
int main()
{   int num[100],n;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    printf("enter numbers in array in a sequence:\n");
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&num[i]);
    }
    int expected_sum;
    if(num[0]==1)
    expected_sum=n*(n+1)/2;
    else
    expected_sum=0;
    int temp=num[0];
    for(int i=0;i<n;i++)
    {
      expected_sum+=num[0];
        num[0]++;
    }
    int actual_sum=0; 
    num[0]=temp;
    for(int i=0;i<n-1;i++)
    {
       actual_sum+=num[i];
    }
    printf("missing element is:%d",expected_sum-actual_sum);
}