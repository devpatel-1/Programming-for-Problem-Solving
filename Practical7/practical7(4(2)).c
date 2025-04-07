#include <stdio.h>

int factorial(int n) {

    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main () {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    return 0;
}