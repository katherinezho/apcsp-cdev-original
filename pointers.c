#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  int d = 10;
  int e = 12;

  int* ptrtod = &d;
  int* ptrtoe = &e;

  printf("The value of d is %p\n", d);
  printf("It stores the value %d\n", *ptrtod);
  printf("The address of d is %p\n", (void*)&d);

  printf("The value of e is %p\n", e);
  printf("It stores the value %d\n", *ptrtoe);
  printf("The address of e is %p\n", (void*)&e);
  
}
