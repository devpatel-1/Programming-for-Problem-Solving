// Write a program to check that whether the entered number is prime or not

#include <stdio.h>

int main() {
    
    int num, i, isPrime = 1;
    
    printf("Enter a positive Integer : ");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("%d is not a Prime number.\n", num);
        return 0;
    }
    
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime) {
        printf("%d is a Prime Number.\n", num);
    }else {
        printf("%d is NOT a Prime Number.\n", num);
    }
    
    return 0;
}