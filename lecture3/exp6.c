#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    // Declare variables
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * pow(radius, 2);
    circumference = 2 * PI * radius;

    // Display the results
    printf("Area of the circle: %.3f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}