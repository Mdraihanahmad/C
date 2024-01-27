#include <stdio.h>

int main() {
    char input;

    // Prompt user for input
    printf("Enter a character: ");
    
    // Read user input
    scanf("%c", &input);

    // Print ASCII value
    printf("ASCII value of %c is %d\n", input, input);

    return 0;
}
