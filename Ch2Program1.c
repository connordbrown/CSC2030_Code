// Connor Brown
// CSC2030
// 1/26/2024
// Chapter 2 Program 1

#include <stdio.h>

// begin program execution
int main(void) {
    // declare input variables
    int num1, num2;

    puts(""); // spacing

    // prompt for and read user inputs
    printf("%s", "Enter first integer: ");
    scanf("%d", &num1);

    printf("%s", "Enter second integer: ");
    scanf("%d", &num2);

    puts(""); // spacing

    // declare and define arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;

    // display output
    printf("The sum is: %d\n", sum);
    printf("The difference is: %d\n", difference);
    printf("The product is: %d\n", product);
    printf("The quotient is: %d\n", quotient);
    printf("The remainder is: %d\n", remainder);

    puts(""); // spacing

    return 0;
} // end function main