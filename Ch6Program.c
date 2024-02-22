// Connor Brown
// CSC 2030
// 2/21/2024
// Chapter 6 Program

#include <stdio.h>
#define SIZE 10 // constant array size

// function prototypes
void populateArray(int arr[], size_t size);
int checkForUniqueVals(int currentArr[], int arrayToCompare[], int uniqueArray[], int uniqueArrayIndex, size_t size);


// begin program execution
int main(void) {
    // declare arrays
    int array1[SIZE];
    int array2[SIZE];
    int uniqueVals[SIZE * 2] = {0}; // can be no larger than twice original size

    // index for iterating over uniqueVals
    int uniqueIndex = 0;

    // fill arrays with integer data
    populateArray(array1, SIZE);
    populateArray(array2, SIZE);

    // check array1 for unique elements within itself and between array1 and array2, and update uniqueIndex
    uniqueIndex = checkForUniqueVals(array1, array2, uniqueVals, uniqueIndex, SIZE);
    // check array2 for unique elements within itself and between array2 and array1, and update uniqueIndex
    uniqueIndex = checkForUniqueVals(array2, array1, uniqueVals, uniqueIndex, SIZE);

    puts(""); // spacing

    // output values unique to both array1 and array2 until before next unassigned index in uniqueVals
    printf("Unique elements: ");
    for (size_t i = 0; i < uniqueIndex - 1; ++i) {
        printf("%d, ", uniqueVals[i]);
    }
    printf("%d\n", uniqueVals[uniqueIndex - 1]); // last value - no comma
    
    puts(""); // spacing

    return 0;
    
} // end function main


// fills array with user input values until size is reached
void populateArray(int arr[], size_t size) {
    printf("%s", "Enter ten integers, each separated by a space: ");
    for (size_t i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
}

// compares currentArr to to itself and arrayToCompare, and assigns values unique to both to uniqueArray
// returns: updated uniqueArrayIndex
int checkForUniqueVals(int currentArr[], int arrayToCompare[], int uniqueArray[], int uniqueArrayIndex, size_t size) {
    // iterate through currentArr
    for (size_t i = 0; i < size; ++i) {
        // all values unique unless shown otherwise
        int isUnique = 1;
        // iterate through currentArr again to check for unique values within;
        // iterate through arrayToCompare to check for unique values between
        for (size_t j = 0; j < size; ++j) {
            // if currentArr value not unique within currentArr and not comparing with itself, break and move to next value
            if (currentArr[j] == currentArr[i] && i != j) {
                isUnique = 0;
                break;
            }
            // if currArr value not unique when compared with arrayToCompare value, break and move to next value
            if (arrayToCompare[j] == currentArr[i]) {
                isUnique = 0;
                break;
            }
        }
        // update uniqueArray with unique value, increment index of uniqueArray to unassigned position
        if (isUnique) {
            uniqueArray[uniqueArrayIndex] = currentArr[i];
            ++(uniqueArrayIndex);
        }
    }
    // return the updated index
    return uniqueArrayIndex;
}