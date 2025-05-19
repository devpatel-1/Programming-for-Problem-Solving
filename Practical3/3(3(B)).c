#include <stdio.h>

void main () {

  int x;

  x = 3 + 4 - 7 * 8 / 5 % 10;

  printf("x = %d\n", x);

  return 0;

}



// C follows this precedence (in order):
// 	1.	*, /, % (left to right)
// 	2.	+, - (left to right)


//     Expression: 3 + 4 - 7 * 8 / 5 % 10
// 	1.	Multiplication first:
// 7 * 8 = 56
// So, expression becomes:
// 3 + 4 - 56 / 5 % 10
// 	2.	Division next:
// 56 / 5 = 11 (integer division; fractional part discarded)
// Now:
// 3 + 4 - 11 % 10
// 	3.	Modulus next:
// 11 % 10 = 1
// Now:
// 3 + 4 - 1
// 	4.	Left to right addition/subtraction:
// 3 + 4 = 7
// 7 - 1 = 6


// x = 6