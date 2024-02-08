// Connor Brown
// CSC 2030
// 2/7/2024
// Chapter 4 Program

#include <stdio.h>

// begin program execution
int main(void) {

    puts(""); // spacing

    // declare and define seed variable
    int seed = 1;

    // execute loop body five times
    for (int i = 1; i <= 5; ++i) {
        // update seed variable
        seed *= i;
        // print iteration variable followed by updated seed variable
        printf("%d! = %d\n", i, seed);
    } // end for

    puts(""); // spacing

    return 0;
} // end function main