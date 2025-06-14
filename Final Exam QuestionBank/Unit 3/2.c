// Create a function that accepts an array and its size, and returns the maximum
// value.

#include <stdio.h>

int findMax (int arr[], int size) {

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;

}

int main () {

   int arr[100], n, i;

   printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxValue = findMax(arr, n);
    printf("Maximum value in the array is: %d\n", maxValue);

    return 0;                           

}

// Explanation:
// 	•	The function findMax takes two parameters: the array and its size.
// 	•	It initializes max with the first element and compares all other elements.
// 	•	It returns the largest value found.
