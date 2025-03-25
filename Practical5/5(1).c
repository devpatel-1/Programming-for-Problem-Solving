// Write a program in C to display the n terms of odd natural number and their
// sum


#include <stdio.h>

int main () {
    
    int n;
    int sum = 0;
    
    printf("Enter the number : ");
    scanf("%d", &n);
    
    printf("The first %d odd natural numbers are : \n", n);
    
    for (int i = 1, count = 0; count < n; i += 2, count++) {
        
        printf("%d", i);
        sum += i;
        }
    printf("\nSum of these odd numbers = %d\n", sum);
    
    return 0;
}