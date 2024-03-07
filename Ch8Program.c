// Connor Brown
// CSC 2030
// 3/7/2024
// Chapter 8 Program

#include <stdio.h>
#include <ctype.h> // character handling library

// begin program execution
int main(void) {
    char input;

    puts(""); // spacing

    // get user input
    printf("%s", "Enter a character: ");
    input = getchar();

    // display results of passing input into character-handling functions
    printf("\n%s%c%s%d%s\n", "isblank(\'", input, "\') == ", isblank(input), isblank(input) ? " (True)" : " (False)");
    printf("\n%s%c%s%d%s\n", "isdigit(\'", input, "\') == ", isdigit(input), isdigit(input) ? " (True)" : " (False)");
    printf("\n%s%c%s%d%s\n", "isalpha(\'", input, "\') == ", isalpha(input), isalpha(input) ? " (True)" : " (False)");
    printf("\n%s%c%s%d%s\n", "isalnum(\'", input, "\') == ", isalnum(input), isalnum(input) ? " (True)" : " (False)");
    printf("\n%s%c%s%d%s\n", "isxdigit(\'", input, "\') == ", isxdigit(input), isxdigit(input) ? " (True)" : " (False)");

    printf("\n%s%c%s%d%s\n", "isupper(\'", input, "\') == ", isupper(input), isupper(input) ? " (True)" : " (False)");
    printf("\n%s%c%s%d%s\n", "islower(\'", input, "\') == ", islower(input), islower(input) ? " (True)" : " (False)");

    printf("\n%s%c%s%c%s\n", "tolower(\'", input, "\') == \'", tolower(input), "\'");
    printf("\n%s%c%s%c%s\n", "toupper(\'", input, "\') == \'", toupper(input), "\'");

    printf("\n%s%c%s%d%s\n", "isspace(\'", input, "\') == ", isspace(input), isspace(input) ? " (True)" : " (False)");
    printf("\n%s%c%s%d%s\n", "iscntrl(\'", input, "\') == ", iscntrl(input), iscntrl(input) ? " (True)" : " (False)");
    printf("\n%s%c%s%d%s\n", "ispunct(\'", input, "\') == ", ispunct(input), ispunct(input) ? " (True)" : " (False)");
    printf("\n%s%c%s%d%s\n", "isprint(\'", input, "\') == ", isprint(input), isprint(input) ? " (True)" : " (False)");
    printf("\n%s%c%s%d%s\n", "isgraph(\'", input, "\') == ", isgraph(input), isgraph(input) ? " (True)" : " (False)");

    puts(""); // spacing

    return 0;
} // end function main