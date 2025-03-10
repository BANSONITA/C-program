#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("Input number of terms : ");
	scanf("%d",&n);
	printf("\nThe even numbers are :");
	for(i=0;i<=n;i++)
{
	printf("%d ",2*i);
	sum+=2*i;
}
	printf("\nThe Sum of even Number %d terms : %d \n",n,sum);
} 
