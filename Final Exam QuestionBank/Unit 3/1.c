// Write a program to find the sum of all elements in a 1D array

#include <stdio.h>

int main () {

    int arr[100], n, i, sum = 0;

    printf("Enter the number of element: ");
    scanf("%d", &n);

    printf("Enter elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of all elements in array: %d\n", sum);

    return 0;

}


// Explanation:
// 	•	The user enters the number of elements and the elements of the array.
// 	•	Each element is added to the variable sum during the input loop.
// 	•	After the loop, the total sum is printed.