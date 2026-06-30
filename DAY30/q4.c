#include <stdio.h>

typedef struct
{
    int roll;
    char name[50];
    int age;
    float percentage;
} Student;

void add(Student s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Age: ");
        scanf("%d", &s[i].age);

        printf("Enter Percentage: ");
        scanf("%f", &s[i].percentage);
    }
}

void display(Student s[], int n)
{
    printf("\n----- Student Records -----\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nRoll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Age         : %d\n", s[i].age);
        printf("Percentage  : %.2f\n", s[i].percentage);
    }
}

void search(Student s[], int n)
{
    int roll;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Name : %s\n", s[i].name);
            printf("Age : %d\n", s[i].age);
            printf("Percentage : %.2f\n", s[i].percentage);
            return;
        }
    }

    printf("Student not found.\n");
}

void update(Student s[], int n)
{
    int roll;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("Enter New Percentage: ");
            scanf("%f", &s[i].percentage);

            printf("Record Updated Successfully.\n");
            return;
        }
    }

    printf("Student not found.\n");
}

void deleteRecord(Student s[], int *n)
{
    int roll;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < *n; i++)
    {
        if(s[i].roll == roll)
        {
            for(int j = i; j < *n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            (*n)--;

            printf("Record Deleted Successfully.\n");
            return;
        }
    }

    printf("Student not found.\n");
}

int main()
{
    Student s[100];
    int n = 0, choice;

    do
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number of Students: ");
                scanf("%d", &n);
                add(s, n);
                break;

            case 2:
                display(s, n);
                break;

            case 3:
                search(s, n);
                break;

            case 4:
                update(s, n);
                break;

            case 5:
                deleteRecord(s, &n);
                break;

            case 6:
                printf("Project Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}