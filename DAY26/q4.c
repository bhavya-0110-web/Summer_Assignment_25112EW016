#include<stdio.h>
int main()
{  char ans[30],choice[30];
    ans[0]='b',ans[1]='c',ans[2]='a',ans[3]='a',ans[4]='c';
    int count=0;

    printf(" WELCOME to the QUIZZZ\n ");
    printf("1. which one of these is the longest river in the world:\n");
    
    printf("a.Amazon\n");
    printf("b.NILE\n");
    printf("c.Mississippi\n");
    scanf("%c",&choice[0]);
    if(choice[0]==ans[0])
    {
        printf("right!\n");
        count++;
    }
    else
    printf("%c is the correct answer\n",ans[0]);
    printf("2. Which country has the highest population\n");

    printf("a.china\n");
    printf("b.canada\n");
    printf("c.india\n");
    scanf(" %c",&choice[1]);
    if(choice[1]==ans[1])
    {
        printf("right!!\n");
        count++;
    }
    else
    printf("%c is the right answer\n",ans[1]);

    printf("3. Youtube was founded in which year:\n");
    
    printf("a.2005\n");
    printf("b.2014\n");
    printf("c.2006\n");
    scanf(" %c",&choice[2]);
    if(choice[2]==ans[2])
    {
        printf("right!\n");
          count++;
    }
        else
    printf("%c is the correct answer\n",ans[2]);
    printf("4. Where did the highest rainfall recorded in India\n");

    printf("a.mawsynram\n");
    printf("b.cherapunji\n");
    printf("c.surat\n");
    scanf(" %c",&choice[3]);
    if(choice[3]==ans[3])
    {
    printf("right!!\n");
    count++;
    }

    else
    printf("%c is the right answer\n",ans[3]);

printf("5. which is the toughest exam in the world according to reports\n");
    
    printf("a.UPSC\n");
    printf("b.IITJEE\n");
    printf("c.Gaokao\n");
    scanf(" %c",&choice[4]);
    if(choice[4]==ans[4])
   { printf("right!\n");
    count++;
   }
    else
    printf("%c is the correct answer\n\n\n",ans[4]);



printf("Congratulations!! you completed the quiz\n");
printf("your score is:%d out of 5",count);

}