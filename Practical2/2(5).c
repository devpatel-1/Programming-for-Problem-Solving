// Write a single C program to demonstrate the use of “typedef” and “enum”

#include <stdio.h>

// typedef in C
// 	•	typedef is used to create a new name (alias) for an existing data type.
// 	•	It improves code readability and portability.

typedef unsigned int uint;

// 🔷 enum (Enumeration) in C
// 	•	enum is used to define a group of named integer constants.
// 	•	The default values start from 0 and increase by 1 unless specified.

typedef enum {
    GREEN,
    RED,
    BLUE
} Color;

int main () {

   uint age = 69;
   Color niceColor = RED;

   printf("Age: %u\n", age);
   printf("Color: %d\n", niceColor);

   return 0;

}