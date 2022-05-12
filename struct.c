#include <stdio.h>

void structExample(void);

int main(void)
{
  structExample();
}

struct FooStruct
{
  int a;
  int b;
};

typedef struct FooStruct FooStructType;

void setStructByValue(FooStructType modifyMe)
{
  modifyMe.a = 100;
  modifyMe.b = 200;
}

void setStruct(FooStructType* modifyMe)
{
  modifyMe->a = 100;
  modifyMe->b = 200;
}

void structExample(void)
{
  printf("\n-----Struct Example-----\n");
  struct FooStruct myStruct;

  myStruct.a = 42;
  myStruct.b = 84;

  printf("Size of int: %li\n", sizeof(int));
  printf("Size of FooStruct: %li\n", sizeof(myStruct));
  printf("Value of (a): %i\n", myStruct.a);
  printf("Value of (b): %i\n", myStruct.b);
  printf("---press (Enter) to advance---\n");
  getchar();

  int *castedStruct = (int*)&myStruct;

  printf("Value of casted struct (a): %i\n", *castedStruct);
  printf("Value of casted struct (b): %i\n", *(castedStruct + 1));
  printf("---press (Enter) to advance---\n");
  getchar();

  FooStructType myStructAsType;
  myStructAsType.a = 10;
  myStructAsType.b = 20;

  printf("Value of struct as type (a): %i\n", myStructAsType.a);
  printf("Value of struct as type (b): %i\n", myStructAsType.b);
  printf("---press (Enter) to advance---\n");
  getchar();

  setStructByValue(myStructAsType);

  printf("Value of struct after set (a): %i\n", myStructAsType.a);
  printf("Value of struct after set (b): %i\n", myStructAsType.b);
  printf("---press (Enter) to advance---\n");
  getchar();

  setStruct(&myStructAsType);

  printf("Value of struct after set (a): %i\n", myStructAsType.a);
  printf("Value of struct after set (b): %i\n", myStructAsType.b);
  printf("---press (Enter) to advance---\n");
  getchar();
}
