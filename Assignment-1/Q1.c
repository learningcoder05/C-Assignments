#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    int num, res, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    res = 0;
    while (div > 0)
    {
        rem = num % 10;
        res += rem * rem * rem;
        num /= 10;
    }
    return 0;
}