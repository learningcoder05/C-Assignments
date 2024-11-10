#include <stdio.h>

int main()
{
    // Method-1 (Using a temporary variable)
    // int num, num2, temp;
    // printf("Enter two integers: ");
    // scanf("%d %d", &num, &num2);
    // temp = num;
    // num = num2;
    // num2 = temp;
    // printf("After swapping: %d %d\n", num, num2);

    // Method-2 (Without using a temporary variable)
    // int num,num2;
    // printf("Enter two integers: ");
    // scanf("%d %d", &num, &num2);
    // num=num+num2;
    // num2=num-num2;
    // num=num-num2;
    // printf("After swapping: %d %d\n", num, num2);

    // Method-3 (Using bitwise XOR operator)
    int num, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num, &num2);
    num = num ^ num2;
    num2 = num ^ num2;
    num = num ^ num2;
    printf("After swapping: %d %d\n", num, num2);
    return 0;
}