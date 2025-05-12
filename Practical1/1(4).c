// Write a program to take two input values a and b from keyboard and print
// the following as output (Hint: use \t for alignment):
// a + b = answer
// a – b = answer a % b = answer a * b = answer
// a / b = answer



#include <stdio.h>

int main () {

   int a, b;

   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);

   printf("\t\ta+b = %d\n", a+b);
   printf("a-b = %d\ta%%b = %d\t\ta*b = %d\n", a-b, a%b, a*b);
   printf("\t\ta/b = %d", a/b);

   return 0;

}