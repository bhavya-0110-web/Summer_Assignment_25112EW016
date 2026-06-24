#include<stdio.h>
int main()
{
    char string[100];
    printf("enter a string:\n");
    fgets(string,100,stdin);
    char rep;
    for(int i=0;string[i]!='\0'&&string[i]!='\n';i++)
    {  int repeating=0;
        for(int j=i+1;string[j]!='\0'&&string[j]!='\n';j++)
        {
            if(string[i]==string[j])
            {
                repeating++;

            break;
            }
        }
        if(repeating!=0)
        { rep=string[i];
        break;
        }
        
    }
    printf("first repeating character is:%c",rep);
}