#include <stdio.h>
#include <string.h>

int countVowels(char str[]) {
    int count = 0;
    int i;

    for (i = 0; i < strlen(str); i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main () {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int vowels = countVowels(str);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}