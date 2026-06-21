#include<stdio.h>
int main()
{
    char name[20];
    int count=0;
    printf("enter your name:\n");
    fgets(name,20,stdin);
    for(int i=0;name[i]!='\0'&&name[i]!='\n';i++)
    {
        count++;
    }
    printf("length of string is:%d",count);
}