'''#include <stdio.h>

int main() {
    printf("Hello, World!\n");
     return 0;
}'''
#include <stdio.h>
int main() {
    // Declare variables
    int num1, num2, result;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Add the two numbers
    result = num1 + num2;

    // Display the result
    printf("Result of addition: %d\n", result);

    return 0;
}