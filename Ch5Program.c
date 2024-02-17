// Connor Brown
// CSC 2030
// 2/16/2024
// Chapter 5 Program

#include <stdio.h>

int sumDigits(int num); // function prototype


// begin program execution
int main(void) {

    puts(""); // spacing

    int userNum; // user input value

    // prompt user for number, read number
    printf("%s", "Enter a number: ");
    scanf("%d", &userNum);

    // calculate and output sum of digits
    printf("The sum of its digits is: %d\n", sumDigits(userNum));

    puts(""); // spacing

    return 0;
} // end function main


// calculate the sum of digits of an integer
int sumDigits(int num) {
    int sum = 0;
    
    while (num != 0) {
        // add rightmost digit to sum
        sum += (num % 10);
        // remove rightmost digit
        num /= 10;
    } // end while
    
    return sum; // return sum of digits
}