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

void setStructByValue(struct FooStruct modifyMe)
{
  modifyMe.a = 100;
  modifyMe.b = 200;
}

void setStruct(struct FooStruct* modifyMe)
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

  setStructByValue(myStruct);

  printf("Value of struct after set (a): %i\n", myStruct.a);
  printf("Value of struct after set (b): %i\n", myStruct.b);

  setStruct(&myStruct);

  printf("Value of struct after set (a): %i\n", myStruct.a);
  printf("Value of struct after set (b): %i\n", myStruct.b);
}
