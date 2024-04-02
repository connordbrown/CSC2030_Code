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

  return 0;
}