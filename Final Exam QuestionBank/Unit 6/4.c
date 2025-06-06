// Define an employee structure and pass it to a function for display.

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void dispaly (struct Employee e) {

    printf("\n---- Employee Details ----\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

}

int main () {

    struct Employee emp;

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name); // To read string with spaces

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    dispaly(emp);

    return 0;

}

// Explanation:
// 	•	The structure Employee contains id, name, and salary.
// 	•	Function display() takes the structure as an argument and prints its contents.
// 	•	The structure is passed by value, not by reference.