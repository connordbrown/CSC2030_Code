// Connor Brown
// CSC 2030
// 3/28/2024
// Chapter 10 Program 2

#include <stdio.h>

// a) define structure
struct part {
    unsigned int partNumber;
    char partName[25];
};

// b) new type name for struct part
typedef struct part Part; 


// begin program execution
int main(void) {

    // c) variable declarations
    Part a;
    Part b[10];
    Part *ptr;

    puts("");

    // d) read part number and part name from keyboard into individual members
    printf("%s", "Enter a part number: ");
    scanf("%u", &a.partNumber);

    puts("");

    printf("%s", "Enter a part name: ");
    scanf("%24s", a.partName);
    
    puts("");

    // e) assign member values from a to third element of array b
    b[2] = a;
    
    // f) assign the address of a to ptr
    ptr = &a;

    // g) print member values of element 3 of array b
    printf("Member values of element 3, accessed using arrow operator:\n");
    printf("Part number: %u\n", ptr->partNumber);
    printf("Part name: %s\n", ptr->partName);

    puts("");

    printf("Member values of element 3, accessed using dot operator:\n");
    printf("Part number: %u\n", b[2].partNumber);
    printf("Part name: %s\n", b[2].partName);

    puts("");

    return 0;
}

