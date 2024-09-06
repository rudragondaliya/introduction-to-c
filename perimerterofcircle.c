#include<stdio.h>
#define pi 3.14
main()
{
	int r,perimeter;
	printf("enter radius:");
	scanf("%d",&r);
	perimeter = 2*pi*r;
	printf("perimeter of circle:");
	printf("%f",perimeter);
}
