// Calculate the volume of following shapes in a single program:
// (1) Volume of Cylinder
// (2) Volume of Sphere
// (3) Volume of Cuboid


#include <stdio.h>
#define PI 3.14159265358979323846

int main () {

    double radius, height, length, width;
    double volumeCylinder, volumeSphere, volumeCuboid;

    printf("Enter the radius and height of the cylinder: ");
    scanf("%lf %lf", &radius, &height);
    volumeCylinder = PI * radius * radius * height;
    printf("Volume of Cylinder: %.2lf\n", volumeCylinder);

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);
    volumeSphere = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("Volume of Sphere: %.2lf\n", volumeSphere);

    printf("Enter the length and width of the cuboid: ");
    scanf("%lf %lf", &length, &width);
    volumeCuboid = length * width * height; // Assuming height is the same as for the cylinder
    printf("Volume of Cuboid: %.2lf\n", volumeCuboid);

    return 0;

}