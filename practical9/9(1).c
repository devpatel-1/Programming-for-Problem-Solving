#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float m1, m2;
};

int main() {
    struct Student s[3];
    int i;
    float total, percent;

    for(i = 0; i < 3; i++) {
        printf("\nEnter Roll, Name, Marks1, Marks2: ");
        scanf("%d %s %f %f", &s[i].roll, s[i].name, &s[i].m1, &s[i].m2);
    }

    printf("\n--- Student Result ---\n");

    for(i = 0; i < 3; i++) {
        total = s[i].m1 + s[i].m2;
        percent = total / 2;
        printf("\nRoll: %d\nName: %s\nTotal: %.2f\nPercent: %.2f%%\n", s[i].roll, s[i].name, total, percent);
    }

    return 0;
}