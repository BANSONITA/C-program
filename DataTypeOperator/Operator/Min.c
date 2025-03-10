//#include<stdio.h>
//int main()
//{
//	int n1,n2,max,min;
//	printf("Enter the  frist number:");
//	scanf("%d",&n1);
//	printf("Enter the  seconds number:");
//	scanf("%d",&n2);
//	
//	if(n1<n2){
//		min = n1;
//		max = n2;
//	}else{
//			
//	}
//	printf("\n Min number: %d\n",min);
//}
#include <stdio.h>

int main() {
    int n1, n2, min;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);

    if (n1 < n2) {
        min = n1;
    } else {
        min = n2;
    }

    printf("\nMin number: %d\n", min);

    return 0;
}


