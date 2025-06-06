// Write a C program to check if a given string is a palindrome.

#include <stdio.h>
#include <string.h>

int main () {

    char str[100];
    int i, len, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string '%s' is a palindrome.\n", str);
    } else {
        printf("The string '%s' is not a palindrome.\n", str);
    }

    return 0;

}


// Explanation:
// •	A palindrome reads the same forward and backward (e.g., “madam”, “level”).
// •	We compare the first and last characters, then move inward.
// •	If all characters match, the string is a palindrome.