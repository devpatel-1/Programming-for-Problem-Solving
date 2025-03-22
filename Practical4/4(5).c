// Write a program to generate a table of entered number using goto keyword.


#include <stdio.h>

int main() {
    int num, i = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    table:
    if (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
        goto table;
    }
    
    return 0;
}


