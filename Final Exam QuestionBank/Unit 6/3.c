// Write a program to input and display student details using structure.

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main () {

    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf(" %[^\n]", s.name); // To read string with spaces

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n---- Student Details ----\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;

}


// Explanation:
// 	•	A structure Student is defined with roll, name, and marks.
// 	•	scanf(" %[^\n]", s.name); reads full name with spaces.
// 	•	Inputs are stored in structure s and then printed.

// ⸻
