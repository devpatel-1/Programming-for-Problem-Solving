// First code :- No Arguments and No Return Value 

#include <stdio.h>
#define PI 3.1415

void areaOfCircle () {
    
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    area = PI * radius * radius;
    
    printf("Area = %.2f\n", area);
    
}

int main () {
    
    areaOfCircle();
    return 0;
    
}