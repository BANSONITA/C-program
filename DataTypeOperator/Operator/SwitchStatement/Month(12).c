#include <stdio.h>

int main() {
    int m;
    
    printf("===========================\n");
    printf("Enter any number of month(1-12): ");
    scanf("%d", &m);
    printf("===========================\n");
    switch (m) {
        case 1:  printf("============\nJanuary\n============\n"); break;
        case 2:  printf("============\nFebruary\n============\n"); break;
        case 3:  printf("============\nMarch\n============\n"); break;
        case 4:  printf("============\nApril\n============\n"); break;
        case 5:  printf("============\nMay\n============\n"); break;
        case 6:  printf("============\nJune\n============\n"); break;
        case 7:  printf("============\nJuly\n============\n"); break;
        case 8:  printf("============\nAugust\n============\n"); break;
        case 9:  printf("============\nSeptember\n============\n"); break;
        case 10: printf("============\nOctober\n============\n"); break;
        case 11: printf("============\nNovember\n============\n"); break;
        case 12: printf("============\nDecember\n============\n"); break;
        default: printf("Only enter a value from 1 to 12\n");
    }

    printf("===========================\n");

    return 0;
}

