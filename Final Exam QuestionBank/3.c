// Design a program to accept 10 numbers from the user and print only even
// numbers

#include <stdio.h>

int main () {

    int numbers[10], i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Even numbers are:\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
  
    return 0;

}