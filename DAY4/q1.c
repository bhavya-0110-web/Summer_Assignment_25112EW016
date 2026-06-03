#include<stdio.h>
int main()
{
    int a=0,b=1,n,c;
    printf("enter number of terms in fibonacci");
    scanf("%d",&n);
    printf("%d\t",a);
    printf("%d\t",b);
  
    for(int i=1;i<=(n-2);i++)        
        {
        c=a+b ;
        printf("%d\t",c);
        a=b;
        b=c;
        }
    
    
  
    

}