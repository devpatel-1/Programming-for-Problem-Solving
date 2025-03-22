// Write a program to solve Quadratic Equation.
// (Hint: The standard form of a quadratic equation is: ax2 + bx + c = 0, where
// a, b and c are real numbers and a != 0. The term b2-4ac is known as the
// discriminant of a quadratic equation. It tells the nature of the roots.)
// Formulas to be used:
// If the discriminant > 0, the roots are real and different.
// If the discriminant = 0, the roots are real and equal.
// If the discriminant < 0, the roots are imaginary.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function prototype
void findRoots(int a, int b, int c);

int main() {
    int a, b, c;
    printf("Please enter a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    findRoots(a, b, c);
    return 0;
}

void findRoots(int a, int b, int c) {
    if (a == 0) {
        printf("Invalid input: 'a' cannot be zero.\n");
        return;
    }

    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(fabs(d));  // Use fabs() for floating-point absolute value

    if (d > 0) {
        printf("Roots are real and different\n");
        printf("%f\n%f\n", (-b + sqrt_val) / (2.0 * a), (-b - sqrt_val) / (2.0 * a));
    }
    else if (d == 0) {
        printf("Roots are real and same\n");
        printf("%f\n", -(double)b / (2 * a));  // Fixed incorrect format specifier
    }
    else {
        printf("Roots are complex\n");
        printf("%f + i%f\n%f - i%f\n", -(double)b / (2 * a), sqrt_val / (2 * a), -(double)b / (2 * a), sqrt_val / (2 * a));
    }
}