#include<stdio.h>
int main()
{
	float a , b ,x;
	printf("enter A  = ");
	scanf("%f",&a);
	printf("Enter B = ");
	scanf("%f",&b);
	if (a==0)
	{
		if(b>0)
		printf("\n Infinitive");
		else
		printf("\n No root");
	}
	if(a>0)
	printf("\n x<%f",(b/a));
	if(a<0)
	printf("\nx < %f",(-b/a));
	getch();
	return 0;
}
