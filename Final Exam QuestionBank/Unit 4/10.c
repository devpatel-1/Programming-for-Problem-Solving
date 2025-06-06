// . Write a program to illustrate function returning structure.

#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};

struct Student getStudent () {

    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    return s;

}

int main () {

    struct Student student1;

    student1 = getStudent();

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student1.roll);
    printf("Marks: %.2f\n", student1.marks);

    return 0;

}


// Explanation:
// 	•	struct Student is defined to hold roll number and marks.
// 	•	getStudent() is a function that collects input and returns a structure object.
// 	•	The returned structure is stored in student1 and printed in main().
