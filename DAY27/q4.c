#include<stdio.h>

typedef struct student_result
{
    char name[30];
    int rollno;
    int phy,chem,bio,english,computer;
    float percentage;
    float total_obtained;
    char grade;

}student;
void input(student s[],int a)
{
    printf("enter name:");
    getchar();
    fgets(s[a].name,30,stdin);
    printf("enter marks in physics,chem,bio,english,computer:\n");
    scanf("%d%d%d%d%d",&s[a].phy,&s[a].chem,&s[a].bio,&s[a].english,&s[a].computer);
    printf("enter roll no.:");
    scanf("%d",&s[a].rollno);
}
void calculate(student s[],int a)
{
   s[a].percentage=((s[a].phy+s[a].chem+s[a].bio+s[a].english+s[a].computer)*100)/500;
s[a].total_obtained=s[a].phy+s[a].chem+s[a].bio+s[a].english+s[a].computer;

}
void display(student s[],int a)
{
    printf("-----------");
    printf("MARKSHEET");
    printf("-----------\n");
    printf("-----------");
    printf("         ");
    printf("-----------\n");
printf("NAME: %s\t",s[a].name);
printf("roll no.: %d\n",s[a].rollno);
printf("physics:%d\n",s[a].phy);
printf("chemistry:%d\n",s[a].chem);
printf("biology:%d\n",s[a].bio);
printf("english:%d\n",s[a].english);
printf("computer:%d\n",s[a].computer);

printf("total marks obtained:%d\t",s[a].total_obtained);
printf("percentage:%f\n",s[a].percentage);
printf("grade:");
if(s[a].percentage>=80)
printf("A");
else
printf("B");
}
int main()
{
    int n;
    student s[100];
    printf("enter number of students:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        input(s,i);
        calculate(s,i);
        display(s,i);
    }
}