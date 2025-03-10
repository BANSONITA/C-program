#include<stdio.h>
int main()
{
	int n,j;
	printf("Input:");scanf("%d",&n);
	printf("/n");
	for(j=1;j<=10;j++){
		printf("%d x %d = %d \n",n,j,n*j);
	}
}
