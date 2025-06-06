// Write a C function to calculate the power of a number (x^y) using recursion.

#include <stdio.h>

int power (int x, int y) {

    if (y == 0) {
        return 1;
    } else {
        return x * power(x, y - 1);
    }
}

int main () {

    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    int result = power (base, exponent);
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;

}




// Explanation:
// 	•	If the exponent y is 0, the result is always 1.
// 	•	Otherwise, multiply x by the result of power(x, y-1) recursively until base case is reached.