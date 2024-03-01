// Connor Brown
// CSC 2030
// 3/1/2024
// Chapter 7 Bonus Program

#include <stdio.h>
#define SIZE 5

// function prototypes
void printArray(int *arr);
void reverseArray(int *arr);


// begin program execution
int main(void) {

    // initialize array
    int numArray[SIZE];
    
    puts(""); // spacing 

    // prompt user for input to populate array
    printf("Enter %d integers, each separated by a space: ", SIZE);
    for (size_t i = 0; i < SIZE; ++i) {
        scanf("%d", &numArray[i]);
    }

    puts(""); // spacing

    // display array before swap
    printf("%s", "Array before swap: ");
    printArray(numArray);

    // swap elements across center of array
    reverseArray(numArray);

    // display array after swap
    printf("%s", "Array after swap: ");
    printArray(numArray);

    puts(""); // spacing
    
    return 0;
}


// takes pointer to int array as argument and prints all values of array
void printArray(int *arr) {
    printf("%s", "[");
    for (size_t i = 0; i < SIZE - 1; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("%d%s", arr[SIZE - 1], "]\n");
}

// takes pointer to int array as argument and reverses array
void reverseArray(int *arr) {
    for (size_t i = 0; i < SIZE / 2; ++ i) {
        int temp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = temp;
    }
}