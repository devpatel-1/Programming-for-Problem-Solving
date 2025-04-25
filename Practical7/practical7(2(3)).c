// Code 3 :- With Arguments but no Return Value 

#include <stdio.h>

void area(float r);

int main () {

   float radius;
   printf("Enter radius of circle: ");
   scanf("%f", &radius);
   area(radius);
    return 0;

}

void area (float r) {
    float result = 3.14 * r * r;
    printf("Area of circle: %.2f\n", result);
}