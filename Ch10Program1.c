// Connor Brown
// CSC 2030
// 3/28/2024
// Chapter 10 Program 1

#include <stdio.h>

// define union
union integer {
    char c;
    short s;
    int i;
    long b;
};

// begin program execution
int main(void) {

    union integer value;

    puts("");

    // prompt for and scan character
    printf("%s", "Enter a character: ");
    scanf("%c", &value.c);

    puts("");

    // prompt for and scan short integer
    printf("%s", "Enter a short integer: ");
    scanf("%hd", &value.s);

    puts("");

    // prompt for and scan integer
    printf("%s", "Enter an integer: ");
    scanf("%d", &value.i);

    puts("");

    // prompt for and scan long integer
    printf("%s", "Enter a long integer: ");
    scanf("%ld", &value.b);

    puts("");

    // print results - values can be different because previous values are overwritten during input
    printf("Character value: %c\n", value.c);
    printf("Short int value: %hd\n", value.s);
    printf("Signed int value: %d\n", value.i);
    printf("Long int value: %ld\n", value.b);

    puts("");

    return 0;
} // end function main