#include<stdio.h>
int main()
{
    int n,m;
    printf("enter no. of columns and rows :\n");
    scanf("%d%d",&n,&m);
    int a[m][n];
    printf("enter the elements in matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int j=0;j<n;j++)
    {  int sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=a[i][j];
        }
        printf("sum of column %d is %d\n",j,sum);
    }
}