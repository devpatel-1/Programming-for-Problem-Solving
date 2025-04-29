#include <stdio.h>   // Required for input/output functions

// 🔹 Function Declaration
int findMax(int a, int b, int c);

// 🔹 Main Function
int main() {
    int num1, num2, num3, max;

    // Taking input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calling the function and storing result in 'max'
    max = findMax(num1, num2, num3);

    // Printing the result
    printf("Maximum number is: %d\n", max);

    return 0;
}

// 🔹 User Defined Function Definition
int findMax(int a, int b, int c) {
    int max;

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    return max;
}

