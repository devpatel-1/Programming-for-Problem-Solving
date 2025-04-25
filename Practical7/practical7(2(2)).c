//Second code :- No Arguments but a Return Value

#include <stdio.h>

float area();

int main () {

   float result;
   result = area();
   printf("Area of circle: %.2f\n", result);
   return 0;

}

float area () {

   float radius;
   printf("Enter radius of circle: ");
    scanf("%f", &radius);
    return 3.14 * radius * radius;

}