// Write a single C program to demonstrate the use of “typedef” and “enum”

#include <stdio.h>

// Using typedef to define an alias for unsigned int
typedef unsigned int uint;

// Using typedef to define an enumeration for days
typedef enum {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
} Day;


int main() {
    uint age = 25;  // Using typedef alias
    Day today = WEDNESDAY;  // Using enum

    printf("Age: %u\n", age);
    printf("Today is day number: %d\n", today);

    return 0;
}