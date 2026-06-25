#include<stdio.h>
int main()
{
    char string[100],new_string[100];
    int j=0;
    printf("enter string:\n");
    scanf("%s",string);
    for(int i=0;string[i]!='\0';i++)
    { int already_seen=1;
        for(int k=0;k<i;k++)
        {
            if(string[i]==string[k])
            already_seen++;
        }
        if(already_seen==1)
        {
           new_string[j]=string[i];
           j++;
        }
    }
    new_string[j]='\0';
    printf("new string is:\n");
    for(int i=0;new_string[i]!='\0';i++)
    {
        printf("%c",new_string[i]);
    }
}