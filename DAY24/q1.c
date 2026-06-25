#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],rot[100];
    printf("enter two strings:\n");
    scanf("%s%s",str1,str2);
    int len=strlen(str1);
    int i;
    for(i=0;i<=len;i++)
    {  if(i<len-1)
        rot[i]=str1[i+1];
     if(i==len-1)
     rot[i]=str1[0];
     if(i==len)
     rot[i]='\0';
    }
    
    int comparison=strcmp(str2,rot);
    if(comparison==0)
    printf("yes both strings are rotation of each other");
    else
    printf("both strings are not rotation of each other");
 
}