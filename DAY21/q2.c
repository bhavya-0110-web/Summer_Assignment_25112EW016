#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int len;
    strcpy(name,"bhavya");
    len=strlen(name);
    printf("reversed string is:\n");
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",name[i]);
    }



}