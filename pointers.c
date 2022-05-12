#include <stdio.h>

// Functions must be declared or defined before they are used.
void pointerExample(void);

int main(void)
{
  pointerExample();
}

void pointerExample(void)
{
  printf("\n-----Pointer Example-----\n");

  int x = 5;
  int *xPointer;

  printf("Pointer value = %p\n", xPointer);

  xPointer = &x;

  printf("Pointer value after assignment = %p\n", xPointer);
  printf("Dereference pointer and print value = %i\n", *xPointer);

}

