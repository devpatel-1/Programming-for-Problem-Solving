// Without using the strlen function, write a program to find the length of a string.

#include <stdio.h>

int main () {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        i++;
    }

    printf("The length of the string is: %d\n", i);

    return 0;
}