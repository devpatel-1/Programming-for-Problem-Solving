
// Code 4 :- With Arguments and a Return Value

#include <stdio.h>

float area(float r);

int main () {

   float radius, result;
   printf("Enter radius of circle: ");
   scanf("%f", &radius);
   result = area(radius);
   printf("Area of circle: %.2f\n", result);
   return 0;

}

float area (float r) {
    return 3.14 * r * r;
}
