#include<stdio.h>
int main()
{
    int matrix[50][50],n;
    printf("enter the order of a square matrix:\n");
    scanf("%d",&n);
   
    printf("enter the elements of matrix:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==matrix[j][i])
              count++;
        }
    }
    if(count==n*n)
    printf("entered matrix is symmetric");
    else
    printf("entered matrix is not symmetric");
}