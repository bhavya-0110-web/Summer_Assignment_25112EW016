#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char phone[15];
    char email[50];
} Contact;

void addContact(Contact c[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);

        printf("Enter Email: ");
        scanf("%s", c[i].email);
    }
}

void displayContacts(Contact c[], int n)
{
    printf("\n------ Contact List ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", c[i].name);
        printf("Phone : %s\n", c[i].phone);
        printf("Email : %s\n", c[i].email);
    }
}

void searchContact(Contact c[], int n)
{
    char name[50];

    printf("Enter name to search: ");
    scanf(" %[^\n]", name);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(c[i].name, name) == 0)
        {
            printf("\nContact Found\n");
            printf("Name  : %s\n", c[i].name);
            printf("Phone : %s\n", c[i].phone);
            printf("Email : %s\n", c[i].email);
            return;
        }
    }

    printf("Contact not found.\n");
}

void updateContact(Contact c[], int n)
{
    char name[50];

    printf("Enter name to update: ");
    scanf(" %[^\n]", name);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(c[i].name, name) == 0)
        {
            printf("Enter new phone number: ");
            scanf("%s", c[i].phone);

            printf("Enter new email: ");
            scanf("%s", c[i].email);

            printf("Contact updated successfully.\n");
            return;
        }
    }

    printf("Contact not found.\n");
}

void deleteContact(Contact c[], int *n)
{
    char name[50];

    printf("Enter name to delete: ");
    scanf(" %[^\n]", name);

    for(int i = 0; i < *n; i++)
    {
        if(strcmp(c[i].name, name) == 0)
        {
            for(int j = i; j < *n - 1; j++)
            {
                c[j] = c[j + 1];
            }

            (*n)--;
            printf("Contact deleted successfully.\n");
            return;
        }
    }

    printf("Contact not found.\n");
}

int main()
{
    Contact c[100];
    int n = 0, choice;

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contacts\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of contacts: ");
                scanf("%d", &n);
                addContact(c, n);
                break;

            case 2:
                displayContacts(c, n);
                break;

            case 3:
                searchContact(c, n);
                break;

            case 4:
                updateContact(c, n);
                break;

            case 5:
                deleteContact(c, &n);
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