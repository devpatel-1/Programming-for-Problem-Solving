#include <stdio.h>

int main () {

   int numbers[10];
   int sum = 0;
   float average;

   printf("Enter 10 numbers:\n");
   for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
   }

   // Calculate the sum
   for (int i = 0; i < 10; i++) {
        sum += numbers[i];
   }

    // Calculate the average
    average = (float)sum / 10.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;

}