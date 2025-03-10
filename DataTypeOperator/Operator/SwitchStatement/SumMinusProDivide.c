#include <stdio.h>

int main() {
    char choice;
    int a, b, res = 0;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &choice);  

    switch (choice) {
        case '+':
            res = a + b;
            printf("Sum: %d\n", res);
            break;

        case '-':
            res = a - b;
            printf("Difference: %d\n", res);
            break;

        case '*':
            res = a * b;
            printf("Product: %d\n", res);
            break;

        case '/':
            if (b != 0) {
                printf("Quotient: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}

