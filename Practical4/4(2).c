// Write a C program to find that the accepted number is Negative or
// Positive or Zero. (using nested if).

#include <stdio.h>

int main() {
    int num;
    
   
    printf("Enter a number: ");
    scanf("%d", &num);
    
  
    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }
    
    return 0;
}

