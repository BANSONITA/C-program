#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    // Performing logical operations
    printf("Logical Operators:\n");

    // Logical AND (&&)
    printf("(a < b) && (b < c): %d\n", (a < b) && (b < c)); // True && True = True (1)
    printf("(a > b) && (b < c): %d\n", (a > b) && (b < c)); // False && True = False (0)

    // Logical OR (||)
    printf("(a > b) || (b < c): %d\n", (a > b) || (b < c)); // False || True = True (1)
    printf("(a > b) || (b > c): %d\n", (a > b) || (b > c)); // False || False = False (0)

    // Logical NOT (!)
    printf("!(a < b): %d\n", !(a < b)); // Not True = False (0)
    printf("!(a > b): %d\n", !(a > b)); // Not False = True (1)

    return 0;
}
