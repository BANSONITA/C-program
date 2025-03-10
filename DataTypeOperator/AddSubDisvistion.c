#include<stdio.h>
int main()
{
	//input 
	int a,b;
	float x,y;
	a=100;//ke oy 
	b=500;//ke oy
	printf("==================\n");
	printf("A=%d \nB=%d\n",a,b);
	printf("==================\n");
	printf("A-B=%d\n",a-b);
	printf("A+B=%d\n",a+b);
	printf("A*B=%d\n",a*b);
	printf("A/B=%d\n",a/b);
	printf("A%%B=%d\n,",a%b);
	printf("==================\n");
	x=a/b;
	printf("A/B=%f\n",x);
	y=a%b;
	printf("A%B=%.2f\n",y);
	printf("==================\n");
	return 0;
	
}

