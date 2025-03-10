#include <stdio.h>

int main() {
    int a = 20, b = 10;
    int addition, subtraction, multiplication, division, modulus;

    // Performing arithmetic operations
    addition = a + b;         // Addition
    subtraction = a - b;      // Subtraction
    multiplication = a * b;   // Multiplication
    division = a / b;         // Division
    modulus = a % b;          // Modulus (remainder)

    // Displaying results
    printf("Arithmetic Operations:\n");
    printf("Addition (a + b) = %d\n", addition);
    printf("Subtraction (a - b) = %d\n", subtraction);
    printf("Multiplication (a * b) = %d\n", multiplication);
    printf("Division (a / b) = %d\n", division);
    printf("Modulus (a %% b) = %d\n", modulus);

    return 0;
}
