#include<stdio.h>

int main()
{
    int n1, n2;

    printf("Enter number of elements in arr1 and arr2:\n");
    scanf("%d%d", &n1, &n2);

    int arr1[n1], arr2[n2], inter[100];
    int k = 0;

    printf("Enter elements in array1:\n");
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements in array2:\n");
    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                inter[k] = arr1[i];
                k++;
                break;      // Prevents adding the same element multiple times
            }
        }
    }

    printf("Intersection of arrays is:\n");
    for(int i = 0; i < k; i++)
    {
        printf("%d ", inter[i]);
    }

    return 0;
}