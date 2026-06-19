#include<stdio.h>
int main()
{
    int matrix[30][30],n;
    printf("enter order of matrix:\n");
    scanf("%d",&n);
    printf("now fill up the elements in matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("sum of diagonal elements is:\n");
    int count=0;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(i==j)
        {
           count+=matrix[i][j];
        }
    }
   }
   printf("%d",count);
}