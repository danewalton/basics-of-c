#include <stdio.h> // for printf()
#include <stdlib.h> // for malloc()


// Functions must be declared or defined before they are used.
void mallocExample(void);
void memoryLeakExample(void);

struct FooStruct
{
  int a;
  int b;
};

int main(void)
{
  mallocExample();

  getchar();

  memoryLeakExample();
}

void mallocExample(void)
{
  struct FooStruct* myAllocatedStruct = malloc(sizeof(struct FooStruct));

  (*myAllocatedStruct).a = 1;
  myAllocatedStruct->b = 2;

  printf("Value of (a): %i\n", myAllocatedStruct->a);
  printf("Value of (b): %i\n", myAllocatedStruct->b);

  free(myAllocatedStruct);

  printf("Value of (a): %i\n", myAllocatedStruct->a);
  printf("Value of (b): %i\n", myAllocatedStruct->b);
}

void memoryLeakExample(void)
{
  struct FooStruct* myAllocatedStruct = malloc(sizeof(struct FooStruct));

  (*myAllocatedStruct).a = 4;
  myAllocatedStruct->b = 5;

  printf("Value of (a): %i\n", myAllocatedStruct->a);
  printf("Value of (b): %i\n", myAllocatedStruct->b);
}
