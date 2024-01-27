#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    // Prompt user for a three-digit number
    printf("Enter a three-digit number: ");
    
    // Read user input
    scanf("%d", &number);

    // Check if the number is three digits
    if (number < 100 || number > 999) {
        printf("Invalid input. Please enter a three-digit number.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10;  // Extract the last digit
        sum += digit;         // Add the digit to the sum
        number /= 10;         // Remove the last digit
    }

    // Print the result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
