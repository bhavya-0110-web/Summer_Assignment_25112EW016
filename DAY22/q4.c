#include<stdio.h>
int main()
{
    char string[100],string_without_space[100];
    printf("enter a string:\n");
    fgets(string,100,stdin);
    int j=0;
    for(int i=0;string[i]!='\0'&&string[i]!='\n';i++)
    {   
        if(string[i]==' ')
        continue;
        else
        string_without_space[j]=string[i];
        j++;
    }
    string_without_space[j]='\0';
    printf("string without space is:\n");
    for(int i=0;string_without_space[i]!='\0';i++)
    {
        printf("%c",string_without_space[i]);
    }

}