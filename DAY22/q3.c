#include<Stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("enter a string:\n");
    fgets(string,100,stdin);
    for(int i=0;string[i]!='\0';i++)
    {   
        int already_seen=0;
   {
         for(int k=0;k<i;k++)
        {
           if(string[i]==string[k])
           already_seen++;
        }
    }

if(already_seen==0)
{
        int count=1;
        for(int j=i+1;string[j]!='\0';j++)
        {
             if(string[i]==string[j])
             count++;
        }
        printf("frquency of %c is %d\n",string[i],count);
}

}
}