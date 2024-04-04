#include<stdio.h>
main()
{
	const float pi = 3.14;
	float r , perimeter;
	
	printf("Enter redius of cricle = ");
	scanf("%f" , &r);
	
	perimeter = 2*pi*r;
	printf("peramiter of cricle = %.2f" , perimeter);
}