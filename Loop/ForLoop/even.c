#include <stdio.h>
main()
{
	int i,sum=0;
	for(i=0;i<=10;i++)
{
	if ( i%2==0)
	{
		printf("%d ",i);
		sum+=i;
	}
}
	printf("\nSum of even number : %d \n",sum);
} 		
