#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    float x;

    a = 89780;
    b = 565890;

    x = (float)a / b;
    printf("x = %f\n", x);

    int remainder = a % b;
    printf("Remainder = %d\n", remainder);
    return 0;
}

