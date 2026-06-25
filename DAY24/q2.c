#include<stdio.h>
#include<string.h>
int main()
{
    char string[50];
    printf("enter a string:\n");
    scanf("%s",string);
    printf("short form of the string or compressed string is:\n");
    for(int i=0;string[i]!='\0';i++)
    {
        int already_seen=0,freq=1;
        for(int k=0;k<i;k++)
        {
            if(string[k]==string[i])
            already_seen++;
        }
        if(already_seen==0)
        {
            for(int j=i+1;string[j]!='\0';j++)
            {
                if(string[j]==string[i])
                freq++;
            }
            printf("%c%d",string[i],freq);
        }
        
    }
}