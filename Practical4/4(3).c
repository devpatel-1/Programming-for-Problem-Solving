// Write a separate program using each of the following to find the maximum of two
// numbers scanned from the keyboard (consider the case where both can be equal):
// (a) else if statement
// (b) switch ()
// (c) Conditional operator



// Code for a



// #include <stdio.h>

// int main() {
//     int num1, num2;
    
//     printf("Enter two numbers : ");
//     scanf("%d %d", &num1, &num2);
    
//     if (num1 > num2) {
//         printf("Maximum number is : %d\n", num1);
//     } else if (num2 > num1) {
//         printf("Maximum number is : %d\n", num2);
//     }else {
//         printf("Both numbers are equal.\n");
//     }
    
//     return 0;
// }




// code for b


// #include <stdio.h>

// int main() {
//     int num1, num2, diff;

//     // Input two numbers
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     diff = (num1 > num2) - (num1 < num2); // -1 if num1<num2, 0 if equal, 1 if num1>num2

//     switch (diff) {
//         case 1:
//             printf("Maximum number is: %d\n", num1);
//             break;
//         case -1:
//             printf("Maximum number is: %d\n", num2);
//             break;
//         default:
//             printf("Both numbers are equal.\n");
//     }

//     return 0;
// }



// code for c


// #include <stdio.h>

// int main() {
//     int num1, num2, max;

//     // Input two numbers
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     // Using conditional operator to find max
//     max = (num1 > num2) ? num1 : (num2 > num1) ? num2 : 0;

//     if (max)
//         printf("Maximum number is: %d\n", max);
//     else
//         printf("Both numbers are equal.\n");

//     return 0;
// }



// Uncomment the code you want to test and run in you local machine or any online compiler.