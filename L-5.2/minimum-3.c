#include <stdio.h>

main() {
    int a,b,c;

	printf("Enter value of A :");
	scanf("%d", &a);
	printf("Enter value of B :");
	scanf("%d", &b);
	printf("Enter value of C :");
	scanf("%d", &c);
	
    if (a < b) 
	{
        if (a < c) 
		{
            printf("A is Minimum", a);
        } 
		else 
		{
            printf("C is Minimum", c);
        }
    } 
	else 
	{
        if (b < c) 
		{
            printf("B is Minimum", b);
        } 
		else 
		{
            printf("C is Minimum", c);
        }
    }
}