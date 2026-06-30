#include <stdio.h>

typedef struct
{
    int account_no;
    char name[50];
    float balance;
} Account;

void createAccount(Account a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nAccount %d\n", i + 1);

        printf("Enter Account Number: ");
        scanf("%d", &a[i].account_no);

        printf("Enter Account Holder Name: ");
        scanf(" %[^\n]", a[i].name);

        printf("Enter Initial Balance: ");
        scanf("%f", &a[i].balance);
    }
}

void displayAccounts(Account a[], int n)
{
    printf("\n------ Account Details ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nAccount %d\n", i + 1);
        printf("Account Number : %d\n", a[i].account_no);
        printf("Name           : %s\n", a[i].name);
        printf("Balance        : %.2f\n", a[i].balance);
    }
}

void searchAccount(Account a[], int n)
{
    int acc;
    int found = 0;

    printf("Enter Account Number: ");
    scanf("%d", &acc);

    for(int i = 0; i < n; i++)
    {
        if(a[i].account_no == acc)
        {
            found = 1;
            printf("\nAccount Found\n");
            printf("Name : %s\n", a[i].name);
            printf("Balance : %.2f\n", a[i].balance);
        }
    }

    if(found == 0)
        printf("Account not found.\n");
}

void deposit(Account a[], int n)
{
    int acc;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc);

    for(int i = 0; i < n; i++)
    {
        if(a[i].account_no == acc)
        {
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            a[i].balance += amount;

            printf("Deposit Successful.\n");
            printf("New Balance = %.2f\n", a[i].balance);
            return;
        }
    }

    printf("Account not found.\n");
}

void withdraw(Account a[], int n)
{
    int acc;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc);

    for(int i = 0; i < n; i++)
    {
        if(a[i].account_no == acc)
        {
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if(amount <= a[i].balance)
            {
                a[i].balance -= amount;
                printf("Withdrawal Successful.\n");
                printf("Remaining Balance = %.2f\n", a[i].balance);
            }
            else
            {
                printf("Insufficient Balance.\n");
            }
            return;
        }
    }

    printf("Account not found.\n");
}

int main()
{
    Account a[100];
    int n = 0, choice;

    do
    {
        printf("\n===== Bank Account Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of accounts: ");
                scanf("%d", &n);
                createAccount(a, n);
                break;

            case 2:
                displayAccounts(a, n);
                break;

            case 3:
                searchAccount(a, n);
                break;

            case 4:
                deposit(a, n);
                break;

            case 5:
                withdraw(a, n);
                break;

            case 6:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}