#include<stdio.h>
int main ()
{
	int i;
	float x;
	printf("Enter a Number\n");
	scanf("%d",&i);
	x = sqrt(i);
	printf("\n sqrt Root of %d is %10.3f\n",i,x);
	getch();
	return 0;
	
}
