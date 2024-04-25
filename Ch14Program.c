// Connor Brown
// CSC 2030
// Chapter 14 Program - Exercise 14.8

#include <stdio.h>

// begin program execution
int main() {

  // declare and initialize index/counter variable
  int i = 0;

  // print line one - repeat first print statement until i is equal to 5, then print newline
  line1: // label
      printf("%s", "*");
      ++i; // increment i
      if (i < 5) {
          goto line1;
      }
      printf("%s", "\n");
      // reset i to 0
      i = 0;

  // print line two - carry out first print statement for i = 0 or i = 4, otherwise print spaces, until i
  // is equal to 5, then print newline
  line2: // label
      if (i == 0 || i == 4) {
          printf("%s", "*");
      } else {
        printf("%s", " ");
      }
      ++i; // increment i

      // simulate looping using goto
      if (i < 5) {
          goto line2;
      }
      printf("%s", "\n");
      i = 0;

  // print line three - carry out first print statement for i = 0 or i = 4, otherwise print spaces, until i
  // is equal to 5, then print newline
  line3: // label
 
      if (i == 0 || i == 4) {
          printf("%s", "*");
      } else {
        printf("%s", " ");
      }
      ++i; // increment i
      // simulate looping using goto
      if (i < 5) {
          goto line3;
      }
      printf("%s", "\n");
      i = 0;

  // print line four - carry out first print statement for i = 0 or i = 4, otherwise print spaces, until i
  // is equal to 5, then print newline
  line4: // label
      if (i == 0 || i == 4) {
          printf("%s", "*");
      } else {
        printf("%s", " ");
      }
      ++i; // increment i
      // simulate looping using goto
      if (i < 5) {
          goto line4;
      }
      printf("%s", "\n");
      i = 0;

  // print line five - repeat first print statement until i is equal to 5, then print newline
  line5: // label
      printf("%s", "*");
      ++i; // increment i
  
      // simulate looping using goto
      if (i < 5) {
          goto line5;
      }
      printf("%s", "\n");

  return 0;
} // end function main
