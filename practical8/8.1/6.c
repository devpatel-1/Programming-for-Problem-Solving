#include <stdio.h>
#include <string.h>

int main () {

    char str1[] = "apple";
    char str2[] = "apple";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Stringd are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    return 0;
}