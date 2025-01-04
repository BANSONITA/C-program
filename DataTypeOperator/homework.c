#include <stdio.h>

char getGrade(int score) {
    if (score > 90 && score <= 100) {
        return 'A';
    } else if (score > 80 && score <= 90) {
        return 'B';
    } else if (score > 70 && score <= 80) {
        return 'C';
    } else if (score > 60 && score <= 70) {
        return 'D';
    } else if (score >= 50 && score <= 60) {
        return 'E';
    } else {
        return 'F';
    }
}

int main() {
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
    } else {
        char grade = getGrade(score);
        printf("Your grade is: %c\n", grade);
    }

    return 0;
}
