#include <stdio.h>
#include <string.h>

typedef struct
{
    int roll_no;
    char name[50];
    int age;
    float percentage;
} Student;

void addStudents(Student s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Age: ");
        scanf("%d", &s[i].age);

        printf("Enter Percentage: ");
        scanf("%f", &s[i].percentage);
    }
}

void displayStudents(Student s[], int n)
{
    printf("\n------ Student Records ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll_no);
        printf("Name        : %s\n", s[i].name);
        printf("Age         : %d\n", s[i].age);
        printf("Percentage  : %.2f\n", s[i].percentage);
    }
}

void searchStudent(Student s[], int n)
{
    int roll;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll_no == roll)
        {
            printf("\nStudent Found\n");
            printf("Name       : %s\n", s[i].name);
            printf("Age        : %d\n", s[i].age);
            printf("Percentage : %.2f\n", s[i].percentage);
            return;
        }
    }

    printf("Student not found.\n");
}

void updateStudent(Student s[], int n)
{
    int roll;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll_no == roll)
        {
            printf("Enter New Percentage: ");
            scanf("%f", &s[i].percentage);

            printf("Record updated successfully.\n");
            return;
        }
    }

    printf("Student not found.\n");
}

void deleteStudent(Student s[], int *n)
{
    int roll;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < *n; i++)
    {
        if(s[i].roll_no == roll)
        {
            for(int j = i; j < *n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            (*n)--;

            printf("Record deleted successfully.\n");
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
        printf("\n===== Student Record System =====\n");
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
                printf("Enter number of students: ");
                scanf("%d", &n);
                addStudents(s, n);
                break;

            case 2:
                displayStudents(s, n);
                break;

            case 3:
                searchStudent(s, n);
                break;

            case 4:
                updateStudent(s, n);
                break;

            case 5:
                deleteStudent(s, &n);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}