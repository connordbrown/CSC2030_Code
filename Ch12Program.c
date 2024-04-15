// Connor Brown
// CSC 2030
// Chapter 12 Program

// for standard I/O and memory allocation
#include <stdio.h>
#include <stdlib.h>

// declare and define list node with alias Node
typedef struct Node {
  char data;
  struct Node* next;
} Node;