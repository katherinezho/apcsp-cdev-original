#include<stdio.h>

int main()
{
  int a = 545;
  char c = 'a';
  float f = 12.345;
  double d = 123.456;
  unsigned int i = 7;
  short int y = 9;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("char c value: &d and size: %lu bytes\n", c, sizeof(c));
  printf("float f value: %d and size: %lu bytes\n", f, sizeof (f));
  printf("double d value: %d and size: %lu bytes\n", d, sizeof (d));
  printf("unsigned int i value: %d and size: %lu bytes\n", i, sizeof (i));  
  printf("short int y value: %d and size: %lu bytes\n", y, sizeof (y));
}

