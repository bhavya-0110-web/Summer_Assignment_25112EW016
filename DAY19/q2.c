#include<stdio.h>
int main()
{
    int mat1[2][3]={{1,2,3},{1,2,3}};
    int mat2[2][3]={{1,3,5},{2,4,6}};
    int summat[50][50];
    for(int j=0;j<2;j++)
    {
        for(int i=0;i<3;i++)
        {
           summat[j][i]= mat1[j][i]-mat2[j][i];
        }
    }
    printf("subtraction of matrices is:\n");
    for(int j=0;j<2;j++)
    {
        for(int i=0;i<3;i++)
        {
            printf("%d ",summat[j][i]);
        }
        printf("\n");
    }
}