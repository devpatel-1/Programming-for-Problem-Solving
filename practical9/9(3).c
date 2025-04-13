#include <stdio.h>
#include <string.h>

union Student {
    char name[50];
    char subject[50];
    float percentage;
};

int main () {

    union Student s[3];
    
    printf("Enter details for 3 students:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i+1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Subject: ");
        scanf(" %[^\n]", s[i].subject);

        printf("Percentage: ");
        scanf("%f", &s[i].percentage);
    }

    printf("\nStudent Details:\n");
    printf("=================\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Subject: %s\n", s[i].subject);
        printf("Percentage: %.2f\n", s[i].percentage);
    }
    return 0;
}