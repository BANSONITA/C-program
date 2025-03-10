#include<stdio.h>

int main()
{
    int n1, n2, min, max;

    printf("Enter the first value: ");
    scanf("%d", &n1);

    printf("Enter the second value: ");
    scanf("%d", &n2);

    if (n1 < n2) {  
        min = n1;
        max = n2;
    } else {
        min = n2;
        max = n1;
    }

    printf("\nMax = %d", max);
    printf("\nMin = %d\n", min);

    return 0;
}

