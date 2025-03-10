#include <stdio.h>

int main() {
    int a = 10; // Simple assignment operator
    int b =10;

    b = a;
    printf("Initial values: a = %d, b = %d\n", a, b);

    b += 5; // Equivalent to b = b + 5
    printf("After b += 5: b = %d\n", b);

    b -= 3; // Equivalent to b = b - 3
    printf("After b -= 3: b = %d\n", b);

    b *= 2; // Equivalent to b = b * 2
    printf("After b *= 2: b = %d\n", b);

    b /= 4; // Equivalent to b = b / 4
    printf("After b /= 4: b = %d\n", b);

    b %= 3; // Equivalent to b = b % 3
    printf("After b %= 3: b = %d\n", b);

    return 0;
}
