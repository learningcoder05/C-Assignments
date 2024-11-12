#include <stdio.h>

int main()
{
    int marks[5]={50,60,45,35,25};
    for (int i = 0; i < 5; i++)
    {
        marks[i]+=5;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}