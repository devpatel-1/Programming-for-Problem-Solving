// Write a program to swap (interchange) values of two
// variables with or without using a third variable.

#include <stdio.h>

int main () {

   int a, b, temp;
   a = 5;
   b = 10;

   temp = a;
   a = b;
   b = temp;

   printf("After swapping, a = %d, b = %d\n", a, b);

   return 0;

}