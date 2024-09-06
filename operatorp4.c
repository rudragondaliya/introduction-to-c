#include<stdio.h>

main()
{
	int num1,num2,temp;
	printf("Enter the number 1:");
	scanf("%d",&num1);
	printf("Enter the number 2:");
	scanf("%d",&num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("after swapping:\n");
	printf("first number: %d\n",num1);
	printf("second number: %d\n",num2);
	
}
