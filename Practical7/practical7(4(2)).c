#include <stdio.h>

int factorial (int n) {

    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;

}

int main () {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);

    printf("Factorial of %d is %d\n", num, result);

    return 0;

}