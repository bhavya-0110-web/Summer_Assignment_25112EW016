#include<stdio.h>
#include<string.h>
int main()
{   char string[100],reverse[100];
    printf("enter a string:\n");
 scanf("%s",&string);
    int len= strlen(string);
    int j=0;
    for(int i=len;i>=0;i--)
    {  if(i==len)
        {
            reverse[i]='\0';
        
        }
        else
       { reverse[i]=string[j];
        j++;
       }
    }
    int comparison =strcmp(string,reverse);
    if(comparison==0)
    printf("entered string is palindrome");
    else
    printf("entered string is not palindrome");
}