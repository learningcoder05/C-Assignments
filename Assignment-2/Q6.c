#include <stdio.h>

int main()
{
    int marks[5] = {50, 60, 45, 35, 25};
    int i, sum = 0, avg = 0;
    for (i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    avg = sum / 5;
    printf("The average of the marks is %d\n", avg);
    return 0;
}