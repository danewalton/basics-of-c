#include <stdio.h>

// Comments can be created two ways:
//   - For single line comments: two forward slashes.
//   - For multiline or defined intraline: forward slash with a star (/*) then ended
//     with a star forward slash (*/)

/* Like this */

/*
  Or this
*/


// Macros are used to define values which will be substituted in by the preprocessor.
// These are NOT variables. These get "copy and pasted" wherever they are used.
//
// Run `gcc -E <file> > file.preprocess` to see the resulting file after preprocessing
// and before compilation.
#define HELLO_WORLD_MACRO "Hello World with a macro!\n"


// Functions must be declared or defined before they are used.
void printExample(void);


int main(void)
{
  printExample();
}

void printExample(void)
{
  printf("\n-----Print Example-----\n");

  printf("Hello World!\n");

  printf(HELLO_WORLD_MACRO);

/*
    printf has format specifiers for different types
    They are started with a % and are followed by some sequence of specifiers
*/

  // Integer
  int myInteger = 42;
  printf("I have a number for you: %i\n", myInteger);

  // Character
  char myChar = 'q';
  printf("I have a character for you: %c\n", myChar);

  // Character as an integer
  printf("I have a disguised integer for you: 0x%x\n", myChar);

  // String
  char* myString = "What is the airspeed velocity of an unladen swallow?\n";
  printf("I have a string for you: %s", myString);
}
