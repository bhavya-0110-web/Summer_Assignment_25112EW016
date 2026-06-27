#include<stdio.h>
int main()
{
    int num= rand() % 100 +1 ;
    int guess;
    printf("welcome to number guessing game '~'\n");
    printf("lets start with the 1st guess:\n");
    scanf("%d",&guess); 
    while(guess!=num)
    {
        printf("ohh wrong guess ;(\n");
        if(guess>(num+15))
        printf("its too high\n");
        if(num>15)
        {
        if( guess<(num-15))
        printf("too low!\n");
        }
        if(guess<(num+15)&&guess>(num-15))
        printf("you are too close!keep guessing...give one more try\n");
        printf("try another guess:\n");
        scanf("%d",&guess);
    }
    if(guess==num)
    printf("correct!! you nailed it");
}