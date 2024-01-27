#include <stdio.h>
#include <math.h>

// Function to calculate the area of a triangle
float calculateArea(float side1, float side2, float side3) {
    // Calculate semi-perimeter
    float s = (side1 + side2 + side3) / 2;
    
    // Calculate area using Heron's formula
    float area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    
    return area;
}

int main() {
    float side1, side2, side3;

    // Input sides from the user
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    // Check if the sides form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Calculate and display the area
        float area = calculateArea(side1, side2, side3);
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("Invalid triangle. The sum of any two sides must be greater than the third side.\n");
    }

    return 0;
}
