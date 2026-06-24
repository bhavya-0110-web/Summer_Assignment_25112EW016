#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int count=0,j=0,flag=1;
    printf("enter string1:\n");
   scanf("%s",str1);
    printf("enter second string:\n");
  scanf("%s",str2);
    if(strlen(str1)!=strlen(str2))
    printf("entered strings are not anagram");
    else
    {    
        for(int i=0;str1[i]!='\0'&&str1[i]!='\n';i++)
        {
            int already_seen=0,frequency=1,found=0;
            {
                for(int k=0;k<i;k++)
                {
                    if(str1[i]==str1[k])
                    already_seen++;
                }
            }
            if(already_seen==0)
            {   for(int j=i+1;j<strlen(str1);j++)
                {
                    if(str1[i]==str1[j])
                    frequency++;
                }
                for(int j=0;str2[j]!='\0'&&str2[j]!='\n';j++)
                {
                    if(str1[i]==str2[j])
                    found++;
                }
                if(frequency!=found)
                flag=0;
            }
        }
        
    }
    
    if(flag==1)
    printf("entered strings are anagram");
    else
    printf("not anagram");


}