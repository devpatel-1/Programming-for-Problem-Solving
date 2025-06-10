// Write a function to swap two variables using pointers

#include <stdio.h>
 
void swap (int *a, int *b) {
    int temp;
    temp = *a;  // Store the value at address a in temp
    *a = *b;    // Assign the value at address b to address a
    *b = temp;  // Assign the value in temp to address b
}

int main () {

    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Befor swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);  // Pass the addresses of x and y to the swap function

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;

}


// Explanation:
// •	swap() takes pointers to a and b.
// •	It swaps the values using a temporary variable.
// •	In main(), we pass the addresses of x and y to the function using &.. Explain call by value and call by reference with suitable examples.
