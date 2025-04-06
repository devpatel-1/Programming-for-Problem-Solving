//Second code :- No Arguments but a Return Value

#include <stdio.h>
#define PI 3.14

float areaOfCircle() {
    
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    return PI * radius * radius;
    
}

int main() {
    
    float area = areaOfCircle();
    printf("Area = %.2f\n", area);
    return 0;
    
}