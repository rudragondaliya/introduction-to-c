#include<stdio.h>
#define pi 3.14
main()
{
	int r ,area;
	printf("enter radius:");
	scanf("%d",&r);
	area = pi*r*r;
	printf("area of circle:");
	printf("%d",area);
}
