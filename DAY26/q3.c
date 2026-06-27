#include<stdio.h>
int main()
{
    float balance=10000;
    int choice;
    printf("            ##   Welcome to ATM  ##\n");
    printf("1.deposit money\n");
    printf("2.withdraw money\n");
    printf("3.check balance\n");
    printf("4.Exit\n");


    printf("enter your choice:");
    scanf("%d",&choice);
    
if(choice==4)
printf("thank you!! visit again");
    switch(choice)
{
    case 1 : printf("enter the amount you want to deposit:");
               float deposit;
               scanf("%f",&deposit);
               balance+=deposit;
               printf("deposit successful!!\n");
             printf("curret balance:%d\n",balance);
             break;
     
    case 2:  printf("enter amount you want to withdraw:");
             float withdraw;
             scanf("%f",&withdraw);
             printf("withdrawl successful !!\n");
             balance-=withdraw;
             printf("available balance:%f\n",balance);
             break;
             
    case 3:  printf("your current balance is:%f\n",balance);
    break;
    
    case 4: printf("thank you!! visit again");

}
printf("enter what you want to do next:\n");
scanf("%d",&choice);
if(choice==4)
printf("thank you!! visit again");
return 0;

}