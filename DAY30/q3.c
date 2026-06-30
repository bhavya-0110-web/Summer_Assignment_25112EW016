#include <stdio.h>

typedef struct
{
    int emp_id;
    char name[50];
    char department[30];
    float salary;
} Employee;

void addEmployee(Employee e[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].emp_id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Enter Department: ");
        scanf(" %[^\n]", e[i].department);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }
}

void displayEmployee(Employee e[], int n)
{
    printf("\n------ Employee Details ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", e[i].emp_id);
        printf("Name        : %s\n", e[i].name);
        printf("Department  : %s\n", e[i].department);
        printf("Salary      : %.2f\n", e[i].salary);
    }
}

void searchEmployee(Employee e[], int n)
{
    int id;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(e[i].emp_id == id)
        {
            printf("\nEmployee Found\n");
            printf("Name       : %s\n", e[i].name);
            printf("Department : %s\n", e[i].department);
            printf("Salary     : %.2f\n", e[i].salary);
            return;
        }
    }

    printf("Employee not found.\n");
}

void updateSalary(Employee e[], int n)
{
    int id;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(e[i].emp_id == id)
        {
            printf("Enter New Salary: ");
            scanf("%f", &e[i].salary);

            printf("Salary updated successfully.\n");
            return;
        }
    }

    printf("Employee not found.\n");
}

void deleteEmployee(Employee e[], int *n)
{
    int id;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for(int i = 0; i < *n; i++)
    {
        if(e[i].emp_id == id)
        {
            for(int j = i; j < *n - 1; j++)
            {
                e[j] = e[j + 1];
            }

            (*n)--;

            printf("Employee deleted successfully.\n");
            return;
        }
    }

    printf("Employee not found.\n");
}

int main()
{
    Employee e[100];
    int n = 0, choice;

    do
    {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employees\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of employees: ");
                scanf("%d", &n);
                addEmployee(e, n);
                break;

            case 2:
                displayEmployee(e, n);
                break;

            case 3:
                searchEmployee(e, n);
                break;

            case 4:
                updateSalary(e, n);
                break;

            case 5:
                deleteEmployee(e, &n);
                break;

            case 6:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}
