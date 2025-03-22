#include <stdio.h>

int main() {
    int x;
    
    scanf("%d", &x);
    
    switch(x) {
        case 1: printf("1");
        break;
        
        case 2:
        printf("2");
        
        default: printf("3");
    }
    return 0;
}
// Scenario 1: Enter value of x = 1
// 	•	switch(1) will match case 1.
// 	•	It prints 1.
// 	•	break; prevents further execution.
// output is 1

// Scenario 2: Enter value of x = 2
// 	•	switch(2) will match case 2.
// 	•	It prints 2.
// 	•	No break; after case 2, so execution “falls through” into default.
// 	•	default prints 3.
// output is 23

// Scenario 3: Enter value of x = 3
// 	•	switch(3) has no matching case.
// 	•	The default case executes, printing 3.
// output is 3



