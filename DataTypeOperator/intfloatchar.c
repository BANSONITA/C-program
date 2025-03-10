#include <stdio.h> // Include the standard input-output header
#include <conio.h> // Include for getch(), works with certain compilers like Turbo C/C++

int main() 
{
    int n;
    float x;
    char ch;
    char s[50]; // Correct way to declare a string in C
    // Assigning values
    n = 5;
    x = 4.5;
    ch = 'a';
    snprintf(s, sizeof(s), "Bansonita"); 

    // Print the values using printf
    printf("printf value: %d\n %.2f\n %c\n %s\n", n, x, ch, s);

    getch(); // Wait for a keypress (optional, based on your compiler)
    return 0;
}
//int %d ;long int %ld ;float %f; double %lf ; Char %c ; String %s
//int %d ;long int %ld ; float %f ; double %lf ;char %c ;String %s
//int %d ;long int %ld ;float %f ;double %lf ;char %c ;String %s
//int %d ;long int %ld ;float %f ;double %lf ;char %c ;String %s
//int %d long int %ld ;float %f ;double %lf ;char %c;String %s

