#include <stdio.h>

// Function to convert binary to decimal
#include <stdio.h>

int main() {
    int choice;
    long long binary;
    int decimal;
    
    printf("Enter your choice:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            
            int decimal = 0, base = 1;
            
            while (binary > 0) {
                int lastDigit = binary % 10;
                binary /= 10;
                decimal += lastDigit * base;
                base *= 2;
            }
            
            printf("Decimal equivalent: %d\n", decimal);
            break;
            
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            
            long long binary = 0;
            int base = 1;
            
            while (decimal > 0) {
                int rem = decimal % 2;
                decimal /= 2;
                binary += rem * base;
                base *= 10;
            }
            
            printf("Binary equivalent: %lld\n", binary);
            break;
            
        default:
            printf("Invalid choice!\n");
            break;
    }
    
    return 0;
}
