#include <stdio.h>
#include <string.h>

int main () {
    
    char str1[] = "hello";
    char str2[] = "WORLD";

    printf("Original: %s\n", str1);
    printf("Uppercase: %s\n", strupr(str1));

    printf("Original: %s\n", str2);
    printf("Lowercase: %s\n", strlwr(str2));

    return 0;
}