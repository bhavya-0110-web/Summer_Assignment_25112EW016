#include <stdio.h>

typedef struct
{
    int ticket_no;
    char passenger_name[50];
    char source[30];
    char destination[30];
    int seat_no;
    int booked;
} Ticket;

void addTickets(Ticket t[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nTicket %d\n", i + 1);

        printf("Enter Ticket Number: ");
        scanf("%d", &t[i].ticket_no);

        printf("Passenger Name: ");
        scanf(" %[^\n]", t[i].passenger_name);

        printf("Source: ");
        scanf(" %[^\n]", t[i].source);

        printf("Destination: ");
        scanf(" %[^\n]", t[i].destination);

        printf("Seat Number: ");
        scanf("%d", &t[i].seat_no);

        t[i].booked = 0;
    }
}

void displayTickets(Ticket t[], int n)
{
    printf("\n------ Ticket Details ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nTicket Number : %d\n", t[i].ticket_no);
        printf("Passenger     : %s\n", t[i].passenger_name);
        printf("Source        : %s\n", t[i].source);
        printf("Destination   : %s\n", t[i].destination);
        printf("Seat Number   : %d\n", t[i].seat_no);

        if(t[i].booked)
            printf("Status        : Booked\n");
        else
            printf("Status        : Available\n");
    }
}

void bookTicket(Ticket t[], int n)
{
    int num;

    printf("Enter Ticket Number: ");
    scanf("%d", &num);

    for(int i = 0; i < n; i++)
    {
        if(t[i].ticket_no == num)
        {
            if(t[i].booked == 0)
            {
                t[i].booked = 1;
                printf("Ticket Booked Successfully.\n");
            }
            else
            {
                printf("Ticket is already booked.\n");
            }
            return;
        }
    }

    printf("Ticket not found.\n");
}

void cancelTicket(Ticket t[], int n)
{
    int num;

    printf("Enter Ticket Number: ");
    scanf("%d", &num);

    for(int i = 0; i < n; i++)
    {
        if(t[i].ticket_no == num)
        {
            if(t[i].booked == 1)
            {
                t[i].booked = 0;
                printf("Ticket Cancelled Successfully.\n");
            }
            else
            {
                printf("Ticket is already available.\n");
            }
            return;
        }
    }

    printf("Ticket not found.\n");
}

void searchTicket(Ticket t[], int n)
{
    int num;

    printf("Enter Ticket Number: ");
    scanf("%d", &num);

    for(int i = 0; i < n; i++)
    {
        if(t[i].ticket_no == num)
        {
            printf("\nPassenger : %s\n", t[i].passenger_name);
            printf("Source    : %s\n", t[i].source);
            printf("Destination : %s\n", t[i].destination);
            printf("Seat No.  : %d\n", t[i].seat_no);

            if(t[i].booked)
                printf("Status    : Booked\n");
            else
                printf("Status    : Available\n");

            return;
        }
    }

    printf("Ticket not found.\n");
}

int main()
{
    Ticket t[100];
    int n = 0, choice;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Add Tickets\n");
        printf("2. Display Tickets\n");
        printf("3. Book Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Search Ticket\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of tickets: ");
                scanf("%d", &n);
                addTickets(t, n);
                break;

            case 2:
                displayTickets(t, n);
                break;

            case 3:
                bookTicket(t, n);
                break;

            case 4:
                cancelTicket(t, n);
                break;

            case 5:
                searchTicket(t, n);
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