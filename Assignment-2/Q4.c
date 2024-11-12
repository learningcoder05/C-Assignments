#include <stdio.h>

int main()
{
    int marks[5] = {50, 99, 45, 99, 99};
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] == 99)
        {
            printf("Student %d, ", i + 1);
            flag += 1;
        }
    }
    printf("\nTotal students to score 99 marks are %d. \n", flag);
    return 0;
}