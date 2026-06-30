#include <stdio.h>
#include <string.h>

void input(char str[])
{
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
}

void display(char str[])
{
    printf("String: %s\n", str);
}

void length(char str[])
{
    printf("Length = %d\n", strlen(str));
}

void copy(char str[])
{
    char copystr[100];

    strcpy(copystr, str);

    printf("Copied String: %s\n", copystr);
}

void concatenate(char str[])
{
    char str2[100];

    printf("Enter another string: ");
    scanf(" %[^\n]", str2);

    strcat(str, str2);

    printf("Concatenated String: %s\n", str);
}

void compare(char str[])
{
    char str2[100];

    printf("Enter another string: ");
    scanf(" %[^\n]", str2);

    if(strcmp(str, str2) == 0)
        printf("Strings are Equal.\n");
    else
        printf("Strings are Not Equal.\n");
}

void reverse(char str[])
{
    char rev[100];

    strcpy(rev, str);
    strrev(rev);

    printf("Reversed String: %s\n", rev);
}

int main()
{
    char str[100];
    int choice;

    do
    {
        printf("\n===== MENU DRIVEN STRING OPERATIONS =====\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Concatenate Strings\n");
        printf("6. Compare Strings\n");
        printf("7. Reverse String\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                input(str);
                break;

            case 2:
                display(str);
                break;

            case 3:
                length(str);
                break;

            case 4:
                copy(str);
                break;

            case 5:
                concatenate(str);
                break;

            case 6:
                compare(str);
                break;

            case 7:
                reverse(str);
                break;

            case 8:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}