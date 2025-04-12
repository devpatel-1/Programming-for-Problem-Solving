#include <stdio.h>

int main() {
    register int weight;
    int *ptr = &weight;
}


// Concept Focus: register storage class

// 🔹 register int weight;
// 	•	The register keyword requests the compiler to store the variable in a CPU register (instead of RAM) for faster access.
// 	•	It’s a hint — not a command — the compiler may ignore it.

// 🔥 Important Rule:

// You cannot get the address of a variable declared with register using the & (address-of) operator.

// Because:
// 	•	Register variables may be stored in CPU registers, not in regular memory.
// 	•	Hence, no memory address is guaranteed for them.


// int *ptr = &weight;

// •	This line will cause a compile-time error because you’re trying to get the address of a register variable


// Output:
// error: address of register variable ‘weight’ requested