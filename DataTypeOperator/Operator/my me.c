#include <stdio.h>

int main() {
    int id;
    char name[50];
    char gender;
    float Khmer, math, Physise;
    float total, avg;

    printf("================\n");
    printf("Input your ID: ");
    scanf("%d", &id);

    printf("Input your name: ");
    getchar(); // To consume newline left by scanf
    fgets(name, sizeof(name), stdin);

    printf("Input gender (F/M): ");
    scanf(" %c", &gender); // Space before %c to ignore newline

    printf("Enter score of Khmer: ");
    scanf("%f", &Khmer);

    printf("Enter score of Math: ");
    scanf("%f", &math);

    printf("Enter score of Physics: ");
    scanf("%f", &Physise);

    // Calculate total and average
    total = Khmer + math + Physise;
    avg = total / 3;

    // Output information
    printf("======== Output Information =========\n");
    printf("My ID is: %d\n", id);
    printf("My name is: %s", name); // `fgets` includes newline, so no extra `\n` needed
    printf("My gender is: %c\n", gender);
    printf("My score of Khmer: %.2f\n", Khmer);
    printf("My score of Math: %.2f\n", math);
    printf("My score of Physics: %.2f\n", Physise);
    printf("My total: %.2f\n", total);
    printf("My average: %.2f\n", avg);

    return 0;
}

