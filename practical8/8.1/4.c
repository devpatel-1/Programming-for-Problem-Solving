#include <stdio.h>
#include <string.h>

int main () {

    char src[] = "Hello, World!";
    char dest[20];

    
    strcpy(dest, src);

    printf("SOurce: %s\n", src);
    printf("Copied to dest: %s\n", dest);

    return 0;


}