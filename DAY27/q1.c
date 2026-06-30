#include<stdio.h>

typedef struct student_record
{
    char name[30];
    int age;
    float cgpa;
    int roll_no;
}rec;
void print_details(rec s[],int a)
{
    printf("enter name of student %d:",a);
    getchar();
    fgets(s[a].name,30,stdin);
    printf("enter age:");
    scanf(" %d",&s[a].age);
    printf("cgpa:");
    scanf("%f",&s[a].cgpa);
    printf("roll no.:");
    scanf("%d",&s[a].roll_no);

    
    printf("student %d name is:%s\n",a,s[a].name);
printf("student %d age is:%d\n",a,s[a].age);
printf("student %d cgpa is:%f\n",a,s[a].cgpa);
printf("student %d roll no. is:%d\n",a,s[a].roll_no);
}
int main()
{
    int n;
    rec st[1000];
    printf("enter number of students:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       print_details(st,i);
    }
}

