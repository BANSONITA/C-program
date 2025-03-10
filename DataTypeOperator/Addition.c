#include<stdio.h>
int main(){
	int a,b,c;
	printf("Input A=");
	scanf("%d",&a);
	printf("Input B=");
	scanf("%d",&b);
	c=a+b;
	printf("A+B=%d\n",c);
	c=a-b;
	printf("A-B=%d\n",c);
	c=a*c;
	printf("A*B=%d\n",c);
	c=a/b;
	printf("A/B=%d\n",c);
	c=a%b;
	printf("A%%B=%d\n",c);
	return 0;

}
//#include <stdio.h>
//
//int main() {
//    int a, b;
//
//    // Prompt user for input
//    printf("Input A = ");
//    scanf("%d", &a);
//    printf("Input B = ");
//    scanf("%d", &b);
//
//    // Perform and display arithmetic operations
//    printf("A + B = %d\n", a + b); // Fixed incorrect usage of arguments
//    printf("A - B = %d\n", a - b);
//    printf("A * B = %d\n", a * b);
//    printf("A / B = %d\n", a / b);  // Integer division
//    printf("A %% B = %d\n", a % b); // Modulus operator
//
//   
//    return 0;
//}

