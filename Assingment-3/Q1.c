#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float add(float a, float b)
{
    float res = a + b;
    return res;
}
float sub(float a, float b)
{
    float res = a - b;
    return res;
}
float mul(float a, float b)
{
    float res = a * b;
    return res;
}
float divide(float a, float b)
{
    float res = a / b;
    return res;
}

int main()
{
    printf("Enter the operation you want to perform:\n1.Addition          2.Subtraction \n3.Multiplication    4.Division\n");
    int choice;
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    float a, b;
    switch (choice)
    {
    case 1:
        printf("Enter the two numbers:\n");
        scanf("%f %f", &a, &b);
        printf("The sum is %.2f\n", add(a, b));
        break;
    case 2:
        printf("Enter the two numbers:\n");
        scanf("%f %f", &a, &b);
        printf("The difference is %.2f\n", sub(a, b));
        break;
    case 3:
        printf("Enter the two numbers:\n");
        scanf("%f %f", &a, &b);
        printf("The product is %.2f\n", mul(a, b));
        break;
    case 4:
        printf("Enter the two numbers:\n");
        scanf("%f %f", &a, &b);
        printf("The quotient is %.2f\n", divide(a, b));
        break;
        return 0;
    }
}