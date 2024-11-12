#include <stdio.h>

int main()
{
    int marks[5] = {50, 60, 45, 99, 25};
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] == 99)
        {
            printf("Student %d scored the first 99 in the list", i + 1);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("No student scored 99 in the list");
    }

    return 0;
}