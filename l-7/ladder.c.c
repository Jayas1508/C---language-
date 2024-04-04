#include<stdio.h>

main()
{
	int number;
    
	printf("Enter of number = ");
	scanf("%d", &number);
	
	if(number<0)
	{
		printf("This number is nagative");
	}
	else if(number==0)
	{
		printf("This number is neutral");
	}
	else
	{
		printf("This number is positive");
	}				
}
