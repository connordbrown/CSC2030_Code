// Connor Brown
// CSC 2030
// 4/2/2024
// Chapter 11 Program 1

#include <stdio.h>
#include <string.h>

// person record
struct person {
  char lastName[15];
  char firstName[15];
  char age[4];
};

// begin program execution
int main(void) {

  // ########## a) ###########
  
  // create file pointer and struct instance
  FILE *fp;
  struct person newPerson = {"unassigned", "unassigned", "0"};

  // open file
  fp = fopen("nameage.dat", "wb");
  if (fp == NULL) {
    puts("Error opening file.");
    return 1;
  }

  // write 100 blank records to file
  for (int i = 0; i < 100; ++i) {
    fwrite(&newPerson, sizeof(struct person), 1, fp);
  }

  // close file
  fclose(fp);
  puts("File initialized with 100 empty records.");
  

  // ########## b) ###########

  // open file for editing
  fp = fopen("nameage.dat", "rb+");
  if (fp == NULL) {
    puts("Error opening file.");
    return 1;
  }

  // add 10 records
  for (int i = 0; i < 10; ++i) {
    struct person newPerson;

    puts(""); // spacing
    
    // get last name
    printf("%s", "Enter last name: ");
    scanf("%14s", newPerson.lastName);
    // get first name
    printf("%s", "Enter first name: ");
    scanf("%14s", newPerson.firstName);
    // get age
    printf("%s", "Enter age: ");
    scanf( "%3s", newPerson.age);

    puts(""); // spacing
    
    // write record to file
    fwrite(&newPerson, sizeof(struct person), 1, fp);
  }

  // close file
  fclose(fp);
  puts("10 records written to the file");

  return 0;
}