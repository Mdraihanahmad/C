#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    // Prompt user for a three-digit number
    printf("Enter a three-digit number: ");
    
    // Read user input
    scanf("%d", &number);

    // Check if the number is three digits
    if (number < 100 || number > 999) {
        printf("Invalid input. Please enter a three-digit number.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the reverse of the number
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;  // Build the reversed number
        number /= 10;  // Remove the last digit
    }

    // Print the result
    printf("Reverse of the number: %d\n", reversedNumber);

    return 0;
}
