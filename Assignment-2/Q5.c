#include <stdio.h>

int main()
{
    int marks[5] = {50, 60, 45, 50, 25};
    int i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    printf("The sum of the marks is %d\n", sum);
    return 0;
}