// Connor Brown
// CSC 2030
// Chapter 13 Program - Exercise 13.6

// This program defines and uses macro MINIMUM2 to determine
// the smallest of two integer values.

#include <stdio.h>

// macro for minimum of two numbers
#define MINIMUM2(a, b) (a < b) ? a : b

// begin program execution
int main(void) {
    int num1, num2; // inputs

    puts(""); // spacing

    // prompt user for input
    printf("%s", "Enter two integers, separated by a space: ");
    scanf("%d %d", &num1, &num2);

    // declare and define min (minimum value) using macro
    int min = MINIMUM2(num1, num2);

    puts(""); // spacing

    // display result
    printf("Out of %d and %d, the smallest number is: %d\n", num1, num2, min);

    puts(""); // spacing

    return 0;
} // end function main