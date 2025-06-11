// Write a program to calculate the sum of digits of a given number.


#include <stdio.h>

int main () {

   int num, sum = 0, digit;

   printf("Enter a number: ");
   scanf("%d", &num);

   while (num != 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
   }

   printf("Sum of digit is: %d\n", sum);

   return 0;

}

// Explanation:
// 	•	The last digit is extracted using num % 10.
// 	•	It’s added to sum.
// 	•	num is divided by 10 to remove the last digit.
// 	•	Loop continues until num becomes 0.