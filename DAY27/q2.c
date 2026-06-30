#include<stdio.h>
typedef struct employee_record
{
    char name[30];
    char position[20];
    int age;
    int salary;
}rec;
void print_details(rec employee[],int a)
{
    printf("name:");
    getchar();
    fgets(employee[a].name,30,stdin);
    printf("position:");
    
    fgets(employee[a].position,20,stdin);
    printf("age:");
    scanf("%d",&employee[a].age);
    printf("salary is:");
    scanf("%d",&employee[a].salary);
    printf("name of employee %d is %s\n",a,employee[a].name);
printf("position of employee %d is %s\n",a,employee[a].position);
printf("age of employee %d is %d\n",a,employee[a].age);
printf("salary of employee %d is %d\n",a,employee[a].salary);

}
int main()
{   int n;
    rec employee[100];
    printf("enter number of employees:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        print_details(employee,i);
    }
}