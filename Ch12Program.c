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

int main(void) {

    return 0;
}


// insertion function for adding new nodes to linked list
void insert(Node** head, char data) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;
  }
  else {
    Node* current = *head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = newNode;
  }
}

// reverse copy function for creating a reversed copy of linked list
Node* reverse(Node* head) {
  Node* reversedHead = NULL;
  Node* current = head;

  while (current != NULL) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = current->data;
    newNode->next = reversedHead;
    reversedHead = newNode;

    current = current->next;
  }

  return reversedHead;
}