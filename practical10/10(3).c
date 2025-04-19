#include <stdio.h>
#include <string.h>
#include <errno.h>

int main () {
    FILE *file;

    file = fopen("nonexistent.txt", "r");

    if (file == NULL) {

        perror("Error opening file");

        printf("Error using strerror: %s\n", strerror(errno));
        return 1;
    }

    fclose(file);
    return 0;
}