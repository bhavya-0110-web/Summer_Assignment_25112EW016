#include<stdio.h>
int main()
{
    char string[100];
    int count_vow=0,count_conso=0;
    printf("enter a string:\n");
    scanf("%s",&string);
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        {
            count_vow++;
            
        }
        else
        count_conso++;
    }
    printf("no. of vowels is:%d\n",count_vow);
    printf("no. of consonants is:%d",count_conso);
}