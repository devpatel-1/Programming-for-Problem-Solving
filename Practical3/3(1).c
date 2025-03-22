// Write a program which makes use of following mathematical expressions.
// (Note: This program is based on the Operators Precedence and Associativity)
// i. a+b / c+d
// ii. (a+b)*(a-b)
// iii. a+b/2
// iv. (a+b )/ (c+d)
// v. a+b*a-b
// vi. (a+b)/2
// Where a, b, c, d are int variables.


#include <stdio.h>

int main() {

  int a, b, c, d;

  printf("Enter the value of a, b , c, and d : ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  int res1 = a + b / c + d;
  int res2 = (a + b) * (a - b);
  int res3 = a + b / 2;
  int res4 = (a + b) / (c + d);
  int res5 = a + b * a - b;
  int res6 = (a + b) / 2;

  printf("Expression of res1 is : %d\n", res1);
  printf("Expression of res2 is : %d\n", res2);
  printf("Expression of res3 is : %d\n", res3);
  printf("Expression of res4 is : %d\n", res4);
  printf("Expression of res5 is : %d\n", res5);
  printf("Expression of res6 is : %d\n", res6);

  return 0;
}
// Answer is 5, -3, 2, 0, 1, 1.