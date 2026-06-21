#include<stdio.h>
int main()
{
    char string[100];
    printf("enter a string:\n");
    scanf("%s",string);
    for(int i=0;string[i]!='\0';i++)
    {  if(string[i]<=90)
        string[i]=string[i]+32;
        else
        string[i]=string[i]-32;
        
    }
    for(int i=0;string[i]!='\0';i++)
    {
        printf("%c",string[i]);
    }
}