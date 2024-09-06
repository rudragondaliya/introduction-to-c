#include<stdio.h>

main()
{
	int x,y,results;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);
	
	results = (x+y) * (x+y);
	printf("results of (x+y)^2 is: %d",results);
}
