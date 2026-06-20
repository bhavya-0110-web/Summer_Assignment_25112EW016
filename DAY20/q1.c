#include<stdio.h>
int main()
{  int r1,c1,r2,c2;
    int matrix1[50][50],matrix2[50][50];
     printf("enter no. of rows and columns in matrix1:\n");
     scanf("%d%d",&r1,&c1);
     printf("enter no. of rows and columns in matrix2:\n");
     scanf("%d%d",&r2,&c2);
     printf("enter elements in matrix1:\n");
     if(c1!=r2)
     printf("multiplication not possible");
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
     }
     printf("enter elements in matrix2:\n");
     for(int i=0;i<r2;i++)
     {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
     }
     int multiply[100][100];
     multiply[0][0]= 0;
     
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                multiply[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
     }
     printf("multiplied matrix is:\n");
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",multiply[i][j]);
        }
        printf("\n");
     }
}