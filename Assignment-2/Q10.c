#include <stdio.h>

int main()
{
    int marks[5] = {50, 60, 3, 2, 25};
    int count = 0;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        int isPrime = 1;

        if (marks[i] <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for (j = 2; j <= marks[i] / 2; j++)
            {
                if (marks[i] % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
        {
            count++;
        }
    }

    printf("Number of prime numbers: %d\n", count);
    return 0;
}
