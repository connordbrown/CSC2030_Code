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
  for (int i = 0; i < 1; ++i) {
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

  // ########## c) ###########

  // Update a record; if there’s no information in the record, tell the user "No info".
  int recordNum;
  struct person differentPerson;
  
  // open file for editing
  fp = fopen("nameage.dat", "rb+");
  if (fp == NULL) {
    puts("Error opening file.");
    return 1;
  }
  
  // get record number
  printf("%s", "Enter record number to update (1-100): ");
  scanf("%d", &recordNum);

  // move file pointer to record
  fseek(fp, (recordNum - 1) * sizeof(struct person), SEEK_SET);
  // read record
  fread(&differentPerson, sizeof(struct person), 1, fp);


  // use strcmp to check if record is unassigned
  // if record is empty, print error message
  if (strcmp(differentPerson.lastName, "unassigned") == 0 && strcmp(differentPerson.firstName, "unassigned") == 0 && strcmp(differentPerson.age, "0") == 0) {
    printf("No info in record %d\n", recordNum);
  }
  else {
    puts(""); //spacing
    puts("Current information: ");
    printf("Last Name: %s\n", differentPerson.lastName);
    printf("First Name: %s\n", differentPerson.firstName);
    printf("Age: %s\n", differentPerson.age);
    
    // get new information
    puts(""); // spacing
    printf("%s", "Enter new last name: ");
    scanf("%14s", differentPerson.lastName);
    printf("%s", "Enter new first name: ");
    scanf("%14s", differentPerson.firstName);
    printf("%s", "Enter new age: ");
    scanf( "%3s", differentPerson.age);
    puts(""); // spacing
  
    // move file pointer to record
    fseek(fp, (recordNum - 1) * sizeof(struct person), SEEK_SET);
    
    // write record
    fwrite(&differentPerson, sizeof(struct person), 1, fp);
    printf("Record %d updated\n", recordNum);
  }
  
  // close file
  fclose(fp);

  // ########## d) ###########

  // open file for editing
  fp = fopen("nameage.dat", "rb+");
  if (fp == NULL) {
    puts("Error opening file.");
  }

  // get record number
  printf("%s", "Enter record number to delete (1-100): ");
  scanf("%d", &recordNum);

  // move file pointer to record
  fseek(fp, (recordNum - 1) * sizeof(struct person), SEEK_SET);
  // read record
  fread(&differentPerson, sizeof(struct person), 1, fp);
  
  // use strcmp to check if record is unassigned
  // if record is empty, print error message
  if (strcmp(differentPerson.lastName, "unassigned") == 0 && strcmp(differentPerson.firstName, "unassigned") == 0 && strcmp(differentPerson.age, "0") == 0) {
    printf("No info in record %d\n", recordNum);
  }
  else {
    puts(""); // spacing
    puts("Current information: ");
    printf("Last Name: %s\n", differentPerson.lastName);
    printf("First Name: %s\n", differentPerson.firstName);
    printf("Age: %s\n", differentPerson.age);
    puts(""); // spacing

    // move file pointer back to correct record
    fseek(fp, (recordNum - 1) * sizeof(struct person), SEEK_SET);
    
    // delete record 
    struct person blankPerson = {"unassigned", "unassigned", "0"};
    fwrite(&blankPerson, sizeof(struct person), 1, fp);
    printf("Record %d deleted\n", recordNum);
  }
  
  // close file
  fclose(fp);

  
  return 0;
} // end function main