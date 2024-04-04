#include <stdio.h>

main()
{
	const float pi = 3.14; 
	float r, area;
	printf("Enter Redius of circle = ");
	scanf("%f", &r);
	area = pi * r * r ;
	printf("Area of Circle = %.2f", area);
}