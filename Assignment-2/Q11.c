#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, pos, value;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before insert: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Enter the position where you want to insert: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n)
    {
        printf("Invalid position!\n");
        return 0;
    }

    printf("Enter the value to be inserted: ");
    scanf("%d", &value);

    // Shift elements to the right from the given position
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("Array after insert: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}