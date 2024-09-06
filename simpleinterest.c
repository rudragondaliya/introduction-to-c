#include<stdio.h>
main()
{
	int p,r,n,si;
	printf("Enter the principal:");
	scanf("%d",&p);
	printf("enter rate of interest:");
	scanf("%d",&r);
	printf("enter no of times:");
	scanf("%d",&n);
	si=p*r*n/100;
	printf("simple interest:");
	printf("%d",si);
	
}
