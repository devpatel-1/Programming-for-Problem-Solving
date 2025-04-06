
// Code 4 :- With Arguments and a Return Value

#include <stdio.h>
#define PI 3.14


float areaOfCircle (float radius) {
    
    return PI * radius * radius;
    
}

int main () {
    
    float r, area;
    printf("Enter the radius: ");
    scanf("%f", &r);
    
    area = areaOfCircle(r);
    printf("Area = %.2f\n", area);
    
    return 0;
    
}

