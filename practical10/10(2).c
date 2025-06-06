#include <stdio.h>

int main () {
    FILE *file;
    char str [100];

    // 1. Open file in write mode
    file = fopen("sample.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    c
    // 2. Use fputrc() to write a single character
    fputc('H', file);
    fputc('i', file);
    fputc('\n', file);

    // 3. Use fputs() to write a string
    fputs("This is a sample text.\n", file);
    fclose(file);

    // 4. Reopen file in read mode
    file = fopen("sample.txt", "r");
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }


    // 5. Use fgets() to read and display file content
    printf("Reading from the file: \n");
    while (fgets(str, sizeof(str), file)) {
        printf("%s", str);
    }

    fclose(file);  // Close the file

    return 0;

}