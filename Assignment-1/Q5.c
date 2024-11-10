#include <stdio.h>

int main()
{
    int num, sumOfdivisors = 0;
    printf("Enter the number to check: ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sumOfdivisors += i;
        }
    }
    if (sumOfdivisors == num)
    {
        printf("The number is a perfect number\n");
    }
    else
    {
        printf("The number is not a perfect number\n");
    }

    return 0;
}
