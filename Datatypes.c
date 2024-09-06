#include<stdio.h>

main()
{
	int num1,num2,sum,sub,multi,div,mod;
	num1 = 12;
	num2 = 6;
	sum = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;
	
	printf("Adition of %d + %d is %d\n",num1,num2,sum);
	printf("Subtration of %d - %d is %d\n",num1,num2,sub);
	printf("Multiplication of %d * %d is %d\n",num1,num2,multi);
	printf("Division of %d / %d is %d\n",num1,num2,div);
	printf("Module of %d %% %d is %d\n",num1,num2,mod);
	
	return 0;
}
