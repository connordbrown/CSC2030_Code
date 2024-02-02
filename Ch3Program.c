// Connor Brown
// CSC 2030
// 2/2/2024
// Chapter 3 Program

#include <stdio.h>

// begin program execution
int main(void) {

    puts(""); // spacing

    // declare and define counter variable
    unsigned int ctr = 1;

    // execute loop body 500 times
    while (ctr <= 500) {
        // print $ followed by space
        printf("%s", "$ ");
        // if ctr is a multiple of 50, print newline
        if (ctr % 50 == 0) {
            puts("");
        } // end if
        
        ctr += 1; // increment ctr by 1
    } // end while

    puts(""); // spacing

} // end function main