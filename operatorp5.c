#include<stdio.h>

main()
{
	int x,y;
	printf("enter the x:");
	scanf("%d",&x);
	
	printf("enter the y:");
	scanf("%d",&y);
	
	x = x+y;
	y = x-y;
	x = x-y;
	
	printf("the swap value of x: %d\n",x);
	printf("the swap value of y: %d\n",y);
	
}
