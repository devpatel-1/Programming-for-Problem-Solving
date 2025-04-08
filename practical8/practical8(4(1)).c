#include <stdio.h>
int main( )
{
    auto int j = 1;         // Outer j
    {
        auto int j = 2;     // Middle j
        {
            auto int j = 3; // Inner j
            printf(" %d ", j); // Line A
        }
        printf("\t %d ", j);    // Line B
    }
    printf("%d\n", j);      // Line C
}









// Understanding Scope and auto:
// 	•	auto is the default storage class for local variables in C.
// 	•	Each time you write auto int j = ... inside a new block { ... }, you are declaring a new variable named j that shadows the outer one.
// 	•	Inner variables are destroyed when their block ends.
// 	•	So we actually have 3 different variables named j in 3 nested blocks.


    
//     1.	auto int j = 1;
// 🔹 Declares a variable j in main scope, value = 1
// 	2.	Inside first block:
// 	•	auto int j = 2;
// 🔹 New variable j (shadows the outer j), value = 2
// 	3.	Inside second block:
// 	•	auto int j = 3;
// 🔹 New variable j again (shadows the previous one), value = 3
// 	4.	printf(" %d ", j);
// 🔹 Refers to innermost j = 3 → prints: 3
// 	5.	Exit inner block → back to j = 2
// 	6.	printf("\t %d ", j);
// 🔹 Refers to middle j = 2 → prints: tab + 2
// 	7.	Exit block → back to outer j = 1
// 	8.	printf("%d\n", j);
// 🔹 Refers to outer j = 1 → prints: 1


//     9.	Final output:

//     3 	 2 1