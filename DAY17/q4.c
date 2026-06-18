#include<stdio.h>

int main()
{
    int n1, n2;

    printf("Enter number of elements in first and second array:\n");
    scanf("%d%d", &n1, &n2);

    int arr1[n1], arr2[n2];

    printf("Enter elements in first array:\n");
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements in second array:\n");
    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements are:\n");

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;   // Avoids printing the same element multiple times
            }
        }
    }

    return 0;
}
