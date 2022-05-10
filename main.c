#include <stdio.h>

#define HELLO_WORLD_MACRO "Hello World with a macro!\n"

int main(void)
{
  printf("Hello World!\n");

  printf(HELLO_WORLD_MACRO);
}
