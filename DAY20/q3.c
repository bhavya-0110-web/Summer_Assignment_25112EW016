#include<stdio.h>
int main()
{
    int n,m,a[m][n];
    printf("enter no. of columns and rows :\n");
    scanf("%d%d",&n,&m);
    printf("enter the elements in matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {  int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
        printf("sum of row %d is:%d\n",i,sum);
    }
}