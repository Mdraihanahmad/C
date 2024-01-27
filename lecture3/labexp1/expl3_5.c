#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt user for three numbers
    printf("Enter three numbers: ");
    
    // Read user input
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number
    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    // Print the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
