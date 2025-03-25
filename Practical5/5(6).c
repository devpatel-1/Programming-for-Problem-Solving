// Write a simple calculator program performing all five basic operations shown
// below. Make sure that after performing each operation your program should
// prompt to keep continue after each operation (do not use GOTO statement) like
// shown below:
// Enter the value of a: 5 Enter the value
// of b: 4
// ===================
// Enter any operation listed below:
// 1.Addition (press +)
// 2.Subtraction (Press -)
// 3.Multiplication (Press *)
// 4.Division (Press /)
// 5.Modulo (Press %)
// Enter your choice of operation: + The sum of 5 and
// 4 is : 9
// Do you want to continue (Y/N)?: Y


#include <stdio.h>

int main() {
    
    char choice;
    int a, b;
    char operation;
    
    do {
        printf("\n Enter the value of a : ");
        scanf("%d", &a);
        printf("Enter the value of b : ");
        scanf("%d", &b);
        
        printf("===================\n");
        printf("Enter any operation listed below:\n");
        printf("1. Addition (press +)\n");
        printf("2. Subtraction (Press -)\n");
        printf("3. Multiplication (Press *)\n");
        printf("4. Division (Press /)\n");
        printf("5. Modulo (Press %%)\n");
        printf("Enter your choice of operation: ");
        scanf(" %c", &operation);
        
        switch (operation) {
            case '+':
                printf("The sum of %d and %d is : %d\n", a, b, (a + b));
                break;
                
            case '-':
                printf("The difference of %d and %d is: %d\n", a, b, (a - b));
                break;
                
            case '*':
                printf("The product of %d and %d is: %d\n", a, b, (a * b));
                break;
                
            case '/':
                if (b != 0)
                    printf("The division of %d by %d is: %.2f\n", a, b, (float)a / b);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
                
            case '%':
                if (b != 0)
                    printf("The remainder when %d is divided by %d is: %d\n", a, b, (a % b));
                else
                    printf("Error! Modulo by zero is not allowed.\n");
                break;
            default:
                printf("Invalid operation! Please enter a valid operation.\n");
        }
        printf("Do you want to continue (Y/N)?: ");
        scanf(" %c", &choice);
    } 
    while (choice == 'Y' || choice == 'y');
    
    printf("Thank you for using the calculator!\n");
    return 0;
    
}
