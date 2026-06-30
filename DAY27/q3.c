#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    float basic;
    float hra;
    float da;
    float deduction;
    float gross;
    float net;
} Employee;

void addEmployee(Employee emp[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basic);

        printf("Enter HRA: ");
        scanf("%f", &emp[i].hra);

        printf("Enter DA: ");
        scanf("%f", &emp[i].da);

        printf("Enter Deduction: ");
        scanf("%f", &emp[i].deduction);

        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
        emp[i].net = emp[i].gross - emp[i].deduction;
    }
}

void displayEmployee(Employee emp[], int n)
{
    printf("\n----------- Employee Details -----------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID : %d\n", emp[i].id);
        printf("Name : %s\n", emp[i].name);
        printf("Basic Salary : %.2f\n", emp[i].basic);
        printf("HRA : %.2f\n", emp[i].hra);
        printf("DA : %.2f\n", emp[i].da);
        printf("Deduction : %.2f\n", emp[i].deduction);
        printf("Gross Salary : %.2f\n", emp[i].gross);
        printf("Net Salary : %.2f\n", emp[i].net);
    }
}

int main()
{
    Employee emp[100];
    int n, choice;

    do
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of employees: ");
                scanf("%d", &n);
                addEmployee(emp, n);
                break;

            case 2:
                displayEmployee(emp, n);
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}