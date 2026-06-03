#include<stdio.h>
int main()
{ 
    //if i is a factor of n that means i divides n completely with remainder 0
    
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    printf("factors of %d are: ",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("%d ",i);

    }
    return 0;

}