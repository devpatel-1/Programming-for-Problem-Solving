// Write a program to calculate sum of all digits of a number.
// (Ex: Enter any number: 456 -> 6+5+4:11)


#include <stdio.h>

int main()
{
    
    int num, sum = 0, remainder;
    
    printf("Enter a number : ");
    scanf("%d", &num);
    
    while (num > 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    
    printf("Sum of digits : %d\n", sum);
    
    return 0;
    
}

// 	•	Extracts the last digit using num % 10.
// 	•	Adds it to sum.
// 	•	Removes the last digit using num /= 10.
// 	•	Repeats until num becomes 0.

