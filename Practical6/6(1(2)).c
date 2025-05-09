#include <stdio.h>

int main () {

    float numbers[10];
    float sum = 0;
    float average;


    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
         scanf("%f", &numbers[i]);
    }

    // calculate the sum
    for (int i = 0; i < 10; i++) {
            sum += numbers[i];
    }

    // calculate the average
    average = sum / 10.0;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;

}