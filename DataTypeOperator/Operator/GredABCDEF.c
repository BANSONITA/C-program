
#include <stdio.h>
#include <string.h>

int main() {
    int Age;
    float Ch, Ph, Math, avg, total, Score;
    char name[50];

    printf("====================================\n");
    printf("           Student Report           \n");
    printf("====================================\n");

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; 

    printf("Enter Age: ");
    scanf("%d", &Age);

    printf("Enter Chemistry Score: ");
    scanf("%f", &Ch);

    printf("Enter Physics Score: ");
    scanf("%f", &Ph);

    printf("Enter Math Score: ");
    scanf("%f", &Math);

    total = Ch + Ph + Math;
    avg = total / 3;
    Score = avg;  

    printf("\n====================================\n");
    printf("             Results                \n");
    printf("====================================\n");
    printf("Name          : %s\n", name);
    printf("Age           : %d\n", Age);
    printf("Total Score   : %.2f\n", total);
    printf("Average Score : %.2f\n", avg);
    printf("Grade         : ");

    if (Score > 90 && Score <= 100) {
        printf("A");
    } else if (Score > 80 && Score <= 90) {
        printf("B");
    } else if (Score > 70 && Score <= 80) {
        printf("C");
    } else if (Score > 60 && Score <= 70) {
        printf("D");
    } else if (Score >= 50) {
        printf("E");
    } else {
        printf("F");
    }

    printf("\n====================================\n");

}

