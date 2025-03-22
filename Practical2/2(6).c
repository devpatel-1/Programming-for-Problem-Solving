// Justify the output of the following code:

#include <stdio.h>

int main() {
    printf("The color : %s\n", "blue");
    printf("First number : %d\n", 12345);
    printf("Second number : %04d\n", 25);
    printf("Third number : %i\n", 1234);
    printf("Float number : %3.2f\n", 3.14159);
    printf("Hexadecimal : %x\n", 255);
    printf("Octal : %o\n", 255);
    printf("Unsigned value : %u\n", 150);
    printf("Just print the percentage sign %%\n", 10);

    return 0;
}

// Explanation of Code
// 	1.	printf("The color : %s\n", "blue");
// 	•	%s is used to print a string.
// 	•	Output: The color : blue

// 	2.	printf("First number : %d\n", 12345);
// 	•	%d is used to print an integer (decimal format).
// 	•	Output: First number : 12345

// 	3.	printf("Second number : %04d\n", 25);
// 	•	%04d means the number will be printed with at least 4 digits, padded with leading 0s if necessary.
// 	•	25 is only 2 digits, so it becomes 0025.
// 	•	Output: Second number : 0025

// 	4.	printf("Third number : %i\n", 1234);
// 	•	%i is the same as %d (prints an integer).
// 	•	Output: Third number : 1234

// 	5.	printf("Float number : %3.2f\n", 3.14159);
// 	•	%3.2f means:
// 	•	3 (minimum width of the number).
// 	•	.2 (round to 2 decimal places).
// 	•	3.14159 gets rounded to 3.14.
// 	•	Output: Float number : 3.14

// 	6.	printf("Hexadecimal : %x\n", 255);
// 	•	%x prints an integer in lowercase hexadecimal.
// 	•	255 in hexadecimal is FF, but since %x is lowercase, it prints ff.
// 	•	Output: Hexadecimal : ff

// 	7.	printf("Octal : %o\n", 255);
// 	•	%o prints an integer in octal (base 8).
// 	•	255 in octal is 377.
// 	•	Output: Octal : 377

// 	8.	printf("Unsigned value : %u\n", 150);
// 	•	%u prints an unsigned integer (non-negative numbers only).
// 	•	150 remains 150.
// 	•	Output: Unsigned value : 150

// 	9.	printf("Just print the percentage sign %%\n");
// 	•	%% prints a literal % (since % is a special character in printf).
// 	•	Output: Just print the percentage sign %


