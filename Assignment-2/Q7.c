#include <stdio.h>

int main()
{
    int marks[5] = {50, 60, 45, 35, 25};
    int i;
    for (i = 0; i < 5; i++)
    {
        if (marks[i] % 2 == 0)
        {
            printf("It is even \n", marks[i]);
        }
        else
        {
            printf("It is odd \n", marks[i]);
        }
    }
    return 0;
}