#include <stdio.h>

int main()
{
    int id, age;
    char name[50];
    float khmer, math, Ph;
    float total, avg;
    char gender;

    printf("===================\n");

    printf("Enter id: ");
    scanf("%d", &id);fflush(stdin);
   
    printf("Enter name:");
    gets(name);

    printf("Enter age: ");
    scanf("%d", &age);

    
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender); 

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
    
    printf("ID:%d\n",id);
    printf("Name:%s\n",name);
    printf("Gender:%d",gender);
    printf("Age:%d",age);
    printf("Gender:%d",gender);

    return 0;
}

