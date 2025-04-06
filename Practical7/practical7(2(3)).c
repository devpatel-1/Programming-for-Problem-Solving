// Code 3 :- With Arguments but no Return Value 


#include <stdio.h>
#define PI 3.14

void areaOfCircle (float radius) {
    
    float area = PI * radius * radius;
    printf("Area : %.2f\n", area);
    
} 

int main () {
    
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    areaOfCircle(r);
    return 0;
    
}