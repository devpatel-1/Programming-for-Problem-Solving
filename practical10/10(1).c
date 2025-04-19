#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // 1. Create a file and open it in write mode
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // 2. Write to the file
    printf("Enter some text to write to the file: ");
    fgets(data, sizeof(data), stdin);
    fprintf(file, "%s", data);
    fclose(file);  // Close after writing

    // 3. Open the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    // 4. Read from the file
    printf("\nContent of the file:\n");
    while (fgets(data, sizeof(data), file)) {
        printf("%s", data);
    }

    fclose(file);  // Close after reading

    return 0;
}