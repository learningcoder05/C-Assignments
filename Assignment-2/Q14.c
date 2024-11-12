#include <stdio.h>

int main()
{
    int arr[100];
    int i, j;
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    printf("Enter the elements of the array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Duplicate element = %d ; Found at %d\n",arr[j], j);
            }
        }
    }
    return 0;
}