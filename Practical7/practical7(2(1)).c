// First code :- No Arguments and No Return Value 

#include <stdio.h>

void area();

int main () {

   area();
   return 0;

}

void area () {

   float radius, result;
   printf("Enter radius of circle: ");
   scanf("%f", &radius);
    result = 3.14 * radius * radius;
    printf("Area of circle: %.2f\n", result);

}