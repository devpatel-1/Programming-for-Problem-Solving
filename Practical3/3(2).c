// Write a program for each: (i) Implicit type casting (ii) Explicit type casting


#include <stdio.h>

int main() {

  // Example of Implicit Typecasting
  int a = 10;
  float b = a;

  printf("Value of b :%f\n", b); // output is 10.000000

  float x = 10.99;
  int y = x;

  printf("Value of y : %d\n", y); // output is 10

  return 0;
  
}
