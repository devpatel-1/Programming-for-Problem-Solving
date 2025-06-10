// Write a program to input and print 5 numbers using pointers

#include <stdio.h>

int main () {

    int numbers[5], i;
    int *ptr; // Pointer to the array

    ptr = numbers;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", ptr + i); // Using pointer arithmetic to input values
    }

    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // Using dereferencing to print values
    }

    return 0;

}


// Explanation:
// •	ptr = numbers; sets the pointer to point to the array.
// •	scanf("%d", ptr + i); inputs values using pointer arithmetic.
// •	printf("%d", *(ptr + i)); prints values using dereferencing.