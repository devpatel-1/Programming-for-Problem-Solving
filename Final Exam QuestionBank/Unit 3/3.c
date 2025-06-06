// Write a program to calculate row-wise sum for a 3x3 2D array

#include <stdio.h>

int main () {

    int arr[3][3], i, j, sum;

    printf("Enter elements of matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d is: %d\n", i + 1, sum);
    }

    return 0;

}


// Explanation:
// 	•	We first take input for a 3×3 matrix.
// 	•	Then, for each row, we initialize sum = 0, add all elements in that row, and print the sum.

// ⸻
