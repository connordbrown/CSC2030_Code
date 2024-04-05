// Connor Brown
// CSC 2030
// 4/5/2024
// Chapter 11 Bonus Program

#include <stdio.h>

// array of letters corresponding to telephone digits - 10 string elements each with max length of 4, including null character
char letters[10][4] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "WXY"};

// function prototype
void generateWords(char *number, char *word, int index, FILE *file);


// begin program execution
int main(void) {
  
  // 7-digit phone number
  char number[8] = "";

  // prompt user for for phone number
  printf("%s", "Enter a seven-digit phone number without 0 and 1: ");
  scanf("%s", number);

  // open a text file in write mode
  FILE *file = fopen("words.txt", "w");
  if (file == NULL) {
    printf("%s", "Error opening file.\n");
    return 1;
  }

  // reserve memory for possible words corresponding to phone number
  char word[8] = "";

  // loop through all possible combinations of letters
  generateWords(number, word, 0, file);

  printf("%s", "Words have been written to 'words.txt'.\n");

  // close file
  fclose(file);

  return 0;
} // end function main


// recursive function to generate all possible words corresponding to phone number
void generateWords(char *number, char *word, int index, FILE *file) {
  // if index is 7, write word to file and return
  if (index == 7) {
    fprintf(file, "%s\n", word);
    return;
  }

  // convert native ASCII (string) value of number[index] to integer
  int digit = number[index] - '0';

  // loop through all possible letters corresponding to digit
  for (int i = 0; i < 4 && letters[digit][i] != '\0'; ++i) {
    word[index] = letters[digit][i];
    generateWords(number, word, index + 1, file);
  }
}