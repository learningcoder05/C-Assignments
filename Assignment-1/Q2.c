#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2;
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    int hcf = a;
    printf("The HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}

