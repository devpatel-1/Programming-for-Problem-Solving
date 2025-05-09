#include <stdio.h>
#include <string.h>

int main () {
    char str[] = "Hello";
    char dest[100];

    strcpy(dest, str);

    printf("Copied string: %s\n", dest);
    return 0;

}