#include <stdio.h>


// function Prototype
int isPrime(int num);

int main () {
    
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    // Function Calling
    if (isPrime(num)) {
        printf("%d is a Prime number.\n", num);
    }else {
        printf("%d is not a Prime number.\n", num);
    }
    
    return 0;
}

// function Definition
int isPrime (int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
             return 0;
    }
    return 1;
}