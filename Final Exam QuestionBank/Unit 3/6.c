// Create a character array of size 10 and store a string in it. Print it using loops.

#include <stdio.h>
 
int main () {

    char str[10] = "Welcome";
    int i;

    printf("Characters in the string: \n");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
 
    return 0;
}



// Explanation:
// 	•	The array str[10] can store up to 9 characters + 1 null terminator (\0).
// 	•	The for loop prints each character one by one until it reaches \0.

// ⸻
