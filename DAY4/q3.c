#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,sum=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    int temp=n;
    
   do{ 
    
    n=n/10;
    count++;
   }
   while(n>0);
  
   n=temp;
   do
   {
    int r;
    double s;
    r=n%10;
    s=pow(r,count);
    sum+=s;
    n=n/10;
   } while (n>0);
  if(temp==sum)
  {
    printf("entered number is armstrong number");
  }
  else
 {
    printf("not armstrong");
 }
   return 0;
   
}