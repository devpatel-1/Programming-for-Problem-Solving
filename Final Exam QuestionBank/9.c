// Explain a C code segment that uses do-while to print odd numbers up to 10.

#include <stdio.h>

int main () {

    int i = 1;

    do {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    } while (i <= 10);

    return 0;

}


// Explanation:
// 	•	We initialize i = 1.
// 	•	The do-while loop runs at least once, even if the condition is false.
// 	•	Inside the loop:
// 	•	if (i % 2 != 0) checks if the number is odd.
// 	•	If true, it prints the number.
// 	•	The loop continues until i exceeds 10.
