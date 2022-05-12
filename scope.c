#include <stdio.h>

// You can bring in local files by using quotes surrounding the header file name
#include "lib/mymath.h"

// Static variables are scope to this file only.
// Anything declared as static or outside a function is stored
// in the "data" section of the program, and are initialized to 0.
static int myStaticVariable;
int myGlobalVariable;

// Functions must be declared or defined before they are used.
void mathExample(void);
void scopeExample(void);

int main(void)
{
  mathExample();

  scopeExample();
}

void mathExample(void)
{
  printf("\n-----Math Example-----\n");

  int three = 3;
  int four = 4;
  int sum = add(three, four);
  printf("3 + 4 = %i\n", sum);
}

void scopeExample(void)
{
  printf("\n-----Scope Example-----\n");

  // Printing our global and static variables
  printf("Global int: %i\n", myGlobalVariable);
  printf("Static int: %i\n", myStaticVariable);

  // Printing an uninitialized local int
  int myLocalInt;
  printf("Uninitialized int: %i\n", myLocalInt);

  // Uncomment these for first stack reuse
  int anotherLocalInt;
  printf("Another uninitialized int: %i\n", anotherLocalInt);

  // Uncomment these for second stack reuse
  int lastLocalInt;
  printf("Last uninitialized int: %i\n", lastLocalInt);
}
