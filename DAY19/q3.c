#include<stdio.h>
int main()
{
    int matrix[30][30],m,n,transpose[30][30];
    printf("enter no. of rows and columns of matrix:\n");
    scanf("%d%d",&m,&n);
    printf("now fill up the elements in matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("transpose of matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            transpose[i][j]=matrix[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
        
    }

}