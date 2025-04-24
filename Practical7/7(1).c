#include <stdio.h>

int isPrime(int num);

int main () {

   int number;

   printf("Enter a number: ");
   scanf("%d", &number);

   if (isPrime(number)) {
        printf("Prime number.\n");
   } else {
        printf("Not a prime number.\n");
   }

}


int isPrime(int num) {

    int i;

    if (num <= 1) {
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}