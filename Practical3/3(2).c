// Write a program for each: (i) Implicit type casting (ii) Explicit type casting


#include <stdio.h>

int main () {

  int a = 10;
  float b = a;
  
  pritnf("Implicit type casting: a = %d, b = %f\n", a, b);

  float x = 10.99;
  int y = x;

  printf("Explicit type casting: x = %f, y = %d\n", x, y);

  return 0;
  
}