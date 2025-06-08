#include <stdio.h>

int main () {
  
    FILE *fp;

    fp = fopen("data.txt", "w");

    if (fp == NULl) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Hello File!");

    fclose(fp);

    printf("Data written to file successfully.\n");

    return 0;

}