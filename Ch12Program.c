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

// function prototypes
void insert(Node** head, char data);
Node* reverse(Node* head);
void printList(Node* head);


// begin program execution
int main(void) {

  // create linked list
  Node* head = NULL;

  // create a list of 10 characters
  char data[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
  for (int i = 0; i < 10; ++i) {
    insert(&head, data[i]);
  }

  // create a reversed copy of the list
  Node* reversedHead = reverse(head);

  puts(""); // spacing

  // print the original and reversed lists
  printf("%s", "Original List: ");
  printList(head);

  printf("%s", "Reversed List: ");
  printList(reversedHead);

  puts(""); // spacing
  
    return 0;
} // end function main


// insertion function for adding new nodes to linked list
void insert(Node** head, char data) {
  // allocate memory for node
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  // if head is empty
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
    // allocate memory for node
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = current->data;
    newNode->next = reversedHead;
    reversedHead = newNode;

    current = current->next;
  }

  return reversedHead;
}

// print function for printing linked list
void printList(Node* head) {
  Node* current = head;
  while (current != NULL) {
    printf("%c ", current->data);
    current = current->next;
  }
  printf("\n");
}