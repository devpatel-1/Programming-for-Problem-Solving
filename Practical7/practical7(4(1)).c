#include <stdio.h>


long long factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main () {

    int num;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for nagetive numbers.\n");

    }else {
        result = factorial(num);
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}
