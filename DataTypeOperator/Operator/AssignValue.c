#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    printf("========AssignValue======\n");
    printf("%d > %d =%d\n",a,b,a>b);
    printf("%d < %d =%d\n",a,b,a<b);
    printf("%d >= %d =%d\n",a,b,a>=b);
    printf("%d <= %d =%d\n",a,b,a<=b);
    printf("%d == %d =%d\n",a,b,a==b);
    printf("%d != %d =%d\n",a,b,a!=b);
    printf("========Logical AND==========\n");
    printf("10>5 && 10==5 Answer = %d \n",10 > 5 && 10 ==5);
    printf("10<5 && 10==5 Answer = %d \n",10< 5&& 10==5 );
    printf("%d && %d =%d\n",a,b,a&&b);
    printf("========Logical OR==========\n");
    printf("10>5 || 10==5 	Answer = %d \n",10 >5 || 10==5);
    printf("10<5 || 10==10 	Answer = %d \n",10 <5 || 10==5); 
	printf("10<5 || 10==10 	Answer = %d \n",10 <5 || 10==10);
	printf("10<5 || 10!==10 Answer = %d \n",10 >5 || 10!=10);   
    printf("====logical NOT operator\n");
    printf("!(10 > 5 || 10==5) Answer = %d \n",!(10>5 || 1==5));
    printf("!(10 < 5 || 10==5 Answer = %d \n)",!(10<5 || 1==5));
    printf("10<5 || 10!==10 Answer = %d \n",10 < 5 || 10!=10);
    printf("Note: 1=true, 0=False");
    printf("====================\n");
    return 0;
}
