#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array before deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the position of the element to delete (1 for front, %d for end): ", n);
    scanf("%d", &pos);
    if (pos == 1)
    {
        for (i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    else if (pos == n)
    {
        n--;
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}