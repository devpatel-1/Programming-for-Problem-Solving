// Write a program to check case of an entered character like following:
// Note: do not use any character test functions.
// Enter any character: a
// Entered character is in lowercase
// Enter any character: A
// Entered character is in uppercase
// Enter any character: 6
// Entered character is digit
// Enter any character: ?
// Not an alphanumeric character


#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    
    if (ch >= 'A' && ch <= 'Z') {
        printf("Entered character is in uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Entered character is in lowercase\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Entered character is digit\n");
    } else {
        printf("Not an alphanumeric character\n");
    }
    
    return 0;
}
