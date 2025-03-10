#include <stdio.h>

int main()
{
    int id, age;
    char name[50];
    float khmer, math, Ph;
    float total, avg;
    char gender;

    printf("===================\n");

    // Input student ID
    printf("Enter id: ");
    scanf("%d", &id);fflush(stdin);
   // Input name
   
   printf("Enter name:");
   gets(name);

    // Input age
    printf("Enter age: ");
    scanf("%d", &age);

    // Input gender
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender); 

    // Input scores
    printf("Input score of Khmer: ");
    scanf("%f", &khmer);

    printf("Input score of Math: ");
    scanf("%f", &math);

    printf("Input score of Physics: ");
    scanf("%f", &Ph);

  
    total = khmer + math + Ph;
    avg = total / 3;

  
    printf("\n=== Student Information ===\n");
    printf("ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Total Score: %.2f\n", total);
    printf("Average Score: %.2f\n", avg);

    return 0;
}

