// Write a c program to check whether a given number is a perfect number or not.
// (Hint: Perfect number is a positive number which sum of all positive divisors
// excluding that number is equal to that number. For example, 6 is perfect
// number since divisor of 6 are 1, 2 and 3. Sum of its divisor is 1 +
// 2+ 3 = 6)


#include <stdio.h>

int main()
{
  
  int num; 
  int sum = 0;
  
  printf("Enter a positive number : ");
  scanf("%d", &num);
  
  for (int i = 1; i <= num/2; i++) {
      if (num % i == 0) {
          sum += i;
      }
  }
  
  if (sum == num && num > 0) {
      printf("%d is a perfect number.\n", num);
  }else {
      printf("%d is not a perfect number.\n", num);
  }
  
  return 0;
}
