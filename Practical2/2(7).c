// Calculate the volume of following shapes in a single program:
// (1) Volume of Cylinder
// (2) Volume of Sphere
// (3) Volume of Cuboid


#include <stdio.h>

#define PI 3.14159  // Define the value of Pi

int main() {
    double radius, height, length, width;
    double volume_cylinder, volume_sphere, volume_cuboid;

    // Calculate Volume of Cylinder (V = πr²h)
    printf("Enter radius and height of the Cylinder: ");
    scanf("%lf %lf", &radius, &height);
    volume_cylinder = PI * radius * radius * height;
    printf("Volume of Cylinder: %.2lf\n\n", volume_cylinder);

    // Calculate Volume of Sphere (V = (4/3)πr³)
    printf("Enter radius of the Sphere: ");
    scanf("%lf", &radius);
    volume_sphere = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("Volume of Sphere: %.2lf\n\n", volume_sphere);

    // Calculate Volume of Cuboid (V = l × w × h)
    printf("Enter length, width, and height of the Cuboid: ");
    scanf("%lf %lf %lf", &length, &width, &height);
    volume_cuboid = length * width * height;
    printf("Volume of Cuboid: %.2lf\n", volume_cuboid);

    return 0;
}