// Write a structure to store book information (title, author, price). Read and
// display.

#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main () {

    struct Book b;

    printf("Enter book title: ");
    fgets(b.title, sizeof(b.title), stdin);

    printf("Enter book author: ");
    fgets(b.author, sizeof(b.author), stdin);

    printf("Enter book price: ");
    scanf("%f", &b.price);

    printf("\n---- Book Information ----\n");
    printf("Title: %s", b.title);
    printf("Author: %s", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;

}


// Explanation:
// 	•	struct Book has 3 members: title, author, and price.
// 	•	fgets() is used to read strings with spaces.
// 	•	scanf() reads the float value for price.
// 	•	Book details are then printed.
