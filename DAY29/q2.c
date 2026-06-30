#include <stdio.h>

void input(int arr[], int n)
{
    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int n)
{
    printf("Array elements are:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void maximum(int arr[], int n)
{
    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Maximum element = %d\n", max);
}

void minimum(int arr[], int n)
{
    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Minimum element = %d\n", min);
}

void sum(int arr[], int n)
{
    int s = 0;

    for(int i = 0; i < n; i++)
    {
        s += arr[i];
    }

    printf("Sum = %d\n", s);
}

void average(int arr[], int n)
{
    int s = 0;

    for(int i = 0; i < n; i++)
    {
        s += arr[i];
    }

    printf("Average = %.2f\n", (float)s / n);
}

void search(int arr[], int n)
{
    int key, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found.\n");
}

int main()
{
    int arr[100];
    int n, choice;

    printf("Enter size of array: ");
    scanf("%d", &n);

    do
    {
        printf("\n===== MENU DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Maximum Element\n");
        printf("4. Minimum Element\n");
        printf("5. Sum of Elements\n");
        printf("6. Average of Elements\n");
        printf("7. Search Element\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                input(arr, n);
                break;

            case 2:
                display(arr, n);
                break;

            case 3:
                maximum(arr, n);
                break;

            case 4:
                minimum(arr, n);
                break;

            case 5:
                sum(arr, n);
                break;

            case 6:
                average(arr, n);
                break;

            case 7:
                search(arr, n);
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