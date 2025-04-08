#include <stdio.h>
#include <string.h>

int num = 10;

void display() {
    extern int num;
    printf("Value of num inside display(): %d\n", num);
}

int main () {
    extern int num;
    printf("Value of num in main(): %d\n", num);

    display();

    return 0;
}