#include <stdio.h>

int main()
{
    int marks[5] = {50, 60, 45, 35, 25};
    int i;
    for (i = 0; i < 5; i++)
    {
        if (marks[i] >= 75 && marks[i] <= 100)
        {
            printf("A\n");
        }
        else if (marks[i] >= 60 && marks[i] < 75)
        {

            printf("B\n");
        }
        else if (marks[i] >= 40 && marks[i] < 60)
        {

            printf("C\n");
        }
        else if (marks[i] >= 0 && marks[i] < 40)
        {
            printf("D\n");
        }
    }
    return 0;
}