#include <stdio.h>

void next(void);
static int counter = 7;

int main() {
    while(counter < 10) {
        next();
        counter++;
    }
    return 0;
}

void next(void) {
    static int iteration = 13;
    iteration++;
    printf("iteration=%d and counter= %d\n", iteration, counter);
}







// Concepts Used:

// 🔹 static int counter = 7;
// 	•	A static global variable, initialized to 7.
// 	•	Retains value within this file (not accessible from other files).
// 	•	Accessible in both main() and next() in this case.

// 🔹 while(counter < 10)
// 	•	Runs the loop while counter is less than 10.

// 🔹 static int iteration = 13; inside next()
// 	•	iteration is a static local variable.
// 	•	Retains its value across multiple calls to next().



//     Step-by-step Execution:

//     Initial:
//         •	counter = 7
//         •	iteration = 13 (but declared inside next() — initializes only once on first call)
    
//     ⸻
    
//     🔁 Loop Iterations:
    
//     ➤ 1st iteration (counter = 7)
//         •	next() is called
//         •	iteration = 13 → incremented to 14
//         •	Prints: iteration=14 and counter= 7
//         •	counter++ → becomes 8
    
//     ⸻
    
//     ➤ 2nd iteration (counter = 8)
//         •	next() is called
//         •	iteration = 14 → incremented to 15
//         •	Prints: iteration=15 and counter= 8
//         •	counter++ → becomes 9
    
//     ⸻
    
//     ➤ 3rd iteration (counter = 9)
//         •	next() is called
//         •	iteration = 15 → incremented to 16
//         •	Prints: iteration=16 and counter= 9
//         •	counter++ → becomes 10 → loop ends
    
//     ⸻
    
//     🖥️ Final Output:

//     iteration=14 and counter= 7
// iteration=15 and counter= 8
// iteration=16 and counter= 9