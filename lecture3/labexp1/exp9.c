#include <stdio.h>

// Function to convert distance from kilometers to centimeters
float convertToCentimeters(float distanceInKm) {
    return distanceInKm * 100000; // 1 km = 100,000 cm
}

// Function to convert distance from kilometers to feet
float convertToFeet(float distanceInKm) {
    return distanceInKm * 3280.84; // 1 km = 3280.84 feet
}

// Function to convert distance from kilometers to inches
float convertToInches(float distanceInKm) {
    return distanceInKm * 39370.1; // 1 km = 39370.1 inches
}

// Function to convert distance from kilometers to meters
float convertToMeters(float distanceInKm) {
    return distanceInKm * 1000; // 1 km = 1000 meters
}

int main() {
    float distanceInKm;

    // Input distance from the user
    printf("Enter the distance in kilometers: ");
    scanf("%f", &distanceInKm);

    // Convert and display the distance in different units
    printf("Distance in centimeters: %.2f cm\n", convertToCentimeters(distanceInKm));
    printf("Distance in feet: %.2f feet\n", convertToFeet(distanceInKm));
    printf("Distance in inches: %.2f inches\n", convertToInches(distanceInKm));
    printf("Distance in meters: %.2f meters\n", convertToMeters(distanceInKm));

    return 0;
}
