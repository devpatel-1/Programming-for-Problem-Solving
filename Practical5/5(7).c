// Write a program to print below patterns.
// a. b


// For a

#include <stdio.h>

int main() {
    int count = 1;
    
    for (int i = 1; i <= 4; i++) {  // 4 rows in the pattern
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}

//  For b

//  #include <stdio.h>

//  int main() {
//     int count = 1;
    
//     for (int i = 1; i <= 4; i++) {  // 4 rows in the pattern
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", count);
//             count++;
//         }
//         printf("\n"); // Move to the next line
//     }
    
//     return 0;
// }