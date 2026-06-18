#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter number of elements in arr1 and arr2:\n");
    scanf("%d%d",&n1,&n2);
    int arr1[n1],arr2[n2];
    printf("enter elements in array1:\n");
    for(int i=0;i<n1;i++)
{
    scanf("%d",&arr1[i]);
}
printf("enter elements in array2:\n");
for(int j=0;j<n2;j++)
{
    scanf("%d",&arr2[j]);
}
int merged[n1+n2];
for(int k=0;k<n1;k++)
{
    merged[k]=arr1[k];
}
for(int r=0;r<n2;r++)
{
    merged[n1+r]=arr2[r];
}
printf("hence the merged array is:\n");
for(int k=0;k<(n1+n2);k++)
{
    printf("%d ",merged[k]);
}
}