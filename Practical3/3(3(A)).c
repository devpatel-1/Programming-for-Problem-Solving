#include <stdio.h>

void main () {

  int x;

  x = 3 * 4 % 5;

  printf("x = %d\n", x);

  return 0;

}


// •	This line performs an arithmetic expression:
// •	First: 3 * 4 = 12
// •	Then: 12 % 5 = 2 (% is the modulus operator, it gives the remainder)
// •	So, x is assigned the value 2.
