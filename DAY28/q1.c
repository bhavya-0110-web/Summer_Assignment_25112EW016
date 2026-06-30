#include <stdio.h>

typedef struct
{
    int book_id;
    char title[50];
    char author[50];
    int quantity;
} Book;

void addBook(Book b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].book_id);

        printf("Enter Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter Quantity: ");
        scanf("%d", &b[i].quantity);
    }
}

void displayBooks(Book b[], int n)
{
    printf("\n------ Library Books ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", b[i].book_id);
        printf("Title   : %s\n", b[i].title);
        printf("Author  : %s\n", b[i].author);
        printf("Quantity: %d\n", b[i].quantity);
    }
}

void searchBook(Book b[], int n)
{
    int id, found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(b[i].book_id == id)
        {
            found = 1;
            printf("\nBook Found\n");
            printf("Title : %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            printf("Quantity: %d\n", b[i].quantity);
        }
    }

    if(found == 0)
        printf("Book not found.\n");
}

void issueBook(Book b[], int n)
{
    int id;

    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(b[i].book_id == id)
        {
            if(b[i].quantity > 0)
            {
                b[i].quantity--;
                printf("Book issued successfully.\n");
            }
            else
            {
                printf("Book is not available.\n");
            }
            return;
        }
    }

    printf("Book not found.\n");
}

void returnBook(Book b[], int n)
{
    int id;

    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(b[i].book_id == id)
        {
            b[i].quantity++;
            printf("Book returned successfully.\n");
            return;
        }
    }

    printf("Book not found.\n");
}

int main()
{
    Book b[100];
    int n = 0, choice;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of books: ");
                scanf("%d", &n);
                addBook(b, n);
                break;

            case 2:
                displayBooks(b, n);
                break;

            case 3:
                searchBook(b, n);
                break;

            case 4:
                issueBook(b, n);
                break;

            case 5:
                returnBook(b, n);
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