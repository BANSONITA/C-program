#include<stdio.h>
int main()
{
	printf("======================= logic AND =========================\n");
	printf("	10>5 && 10 == 5 		Answer = %d	\n",10 > 5 && 10 == 5);
	printf("	10>5 && 10 == 10 		Answer  = %d \n",10 > 5 && 10 ==10);
	printf("	10<5 && 10 == 10 		Answer = %d \n",10 < 5 && 10 ==10);
	printf("======================= Logical OR ========================\n");
	printf("	10 > 5 || 10== 5    	Answer = %d\n ",10>5 || 10==5);
	printf("	10 > 5 || 10== 5    	Answer = %d\n ",10>5 || 10==10);
	printf("	10 < 5 || 10== 5    	Answer = %d\n ",10<5 || 10==10);
	printf("	10 < 5 || 10!= 10   	Answer = %d\n ",10<5 || 10!=10);
	printf("======================== Logical ! ========================\n");
	printf("	!(10 > 5 || 10==5)  	Answer = %d \n",!(10>5 || 10==5));
	printf("	!(10 > 5 || 10==10) 	Answer = %d \n",!(10>5 || 10==10));
	printf("***** Note: 1 : True; 0 : false");
	return 0; 
	
}
