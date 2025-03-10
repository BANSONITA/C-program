#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float x1,x2,delta;
	printf("===============\n");
	printf("\n A =");scanf("%f",&a);
	printf("\n B =");scanf("%f",&b);
	printf("\n C =");scanf("%f",&c);
	delta =(b*b)-(4*a*c);
	printf("\n Delta = %.2f\n",delta);
	if(delta == 0)
	{
		printf("Only One Root");
		printf("\n X = %.2f",-b/(2*a));
	}
	if(delta<0){
		printf("\n Two root");
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("\n X1 = %.2f",x1);
		printf("\n X2 = %.2f",x2);
	}
	if(delta<0)
	printf("No root");
	getch();
	return 0;
}
