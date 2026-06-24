#include<stdio.h>
int main()
{
    char string[100];
    printf("enter a string:\n");
    fgets(string,100,stdin);
    char non_rep;
    for(int i=0;string[i]!='\0'&&string[i]!='\n';i++)
    {int repeating=0,already_seen=0;
        for(int k=0;k<i;k++)
        {
            if(string[i]==string[k])
            already_seen++;
        }
        if(already_seen==0)
        {
        for(int j=i+1;string[j]!='\0'&&string[j]!='\n';j++)
        {
            if(string[i]==string[j])
            {
                repeating++;
            break;
            }
        }
        if(repeating==0)
        { non_rep=string[i];
        break;
        }
        }
    }
    printf("first non repeating character is:%c",non_rep);
}