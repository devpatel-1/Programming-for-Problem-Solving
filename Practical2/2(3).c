// Write a program to display sum of total two variables taken input from
// keyboard and display its result like
// The sum of integer variables A and B is: answer
// The sum of float variables C and D is: answer
// The sum of character variables X and Y is: answer


#include <stdio.h>

int main () {

    // declare variables
   int a, b, intSum;
   float c, d, floatSum;
   char x, y, charSum;
 
   // input taking
   printf("Enter two integer values: ");
   scanf("%d %d", &a, &b);

   printf("Enter two float values: ");
   scanf("%f %f", &c, &d);

   printf("Enter two character values: ");
   scanf(" %c %c", &x, &y);

   // sum calculation
   intSum = a + b;
   floatSum = c + d;
   charSum = x + y;

   // display results
   printf("The sum of integer variables A and B is: %d\n", intSum);
   printf("The sum of float variables C and D is: %.2f\n", floatSum);
   printf("The sum of character variables X and Y is: %d\n", charSum);

   return 0;


}