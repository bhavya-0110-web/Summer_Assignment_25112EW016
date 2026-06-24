#include<stdio.h>
int main()
{
    char string[100],freq_char;
    int frequency=1;
    printf("enter the string:\n");
    scanf("%s",string);
    for(int i=0;string[i]!='\0';i++)
    {  int new_freq=1;
        
        int already_seen=0;
        for(int k=0;k<i;k++)
        {
            if(string[i]==string[k])
            already_seen++;
        }
        if(already_seen==0)
        {
            for(int j=i+1;string[j]!='\0';j++)
            {  if(string[i]==string[j])
                new_freq++;
            }
            if(frequency<new_freq)
           { frequency=new_freq;
               freq_char=string[i];
           }
    }
    }
    printf("maximum frequency character is:%c",freq_char);
}