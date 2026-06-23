#include<stdio.h>
int main()
{
    char string[100];
    printf("write a sentence:\n");
    fgets(string,100,stdin);
    int count=0;
    for(int i=0;string[i]!='\0'&&string[i]!='\n';i++)
    { if(string[i]==' ')
        continue;
        else
        count++;
    }
    printf("no. of words in sentence is:%d",count);
}