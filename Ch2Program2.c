// Connor Brown
// CSC 2030
// 1/26/2024
// Chapter 2 Program 2

#include <stdio.h>

// begin program execution
int main(void) {
    // declare input variables
    float u, a, t;

    puts(""); // spacing

    // prompt for and read user inputs
    printf("%s", "Enter initial velocity: ");
    scanf("%f", &u);

    printf("%s", "Enter inital acceleration: ");
    scanf("%f", &a);

    printf("%s", "Enter time elapsed: ");
    scanf("%f", &t);

    // declare and define outputs
    float v = u + (a * t); // final velocity
    float s = (u * t) + (0.5 * a * t * t); // distance traversed

    puts(""); // spacing

    // display output
    printf("The final velocity is: %f\n", v);
    printf("The distance traversed is: %f\n", s);

    puts(""); // spacing

    return 0;
} //end function main