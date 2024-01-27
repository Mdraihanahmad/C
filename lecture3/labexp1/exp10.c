#include <stdio.h>

int main() {
    // Declare two variables to store the numbers
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the original numbers
    printf("Original numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the numbers using a third variable
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    printf("Swapped numbers: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
