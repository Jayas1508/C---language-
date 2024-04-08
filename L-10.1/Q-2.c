#include<stdio.h>

jay()
{
	int i;
		printf("enter any value = ");
		scanf("%d",&i);
		if(i%3==0 && i%5==0)
		{
			printf("The given number is divisible by both 3 & 5.");
	    }
	else
	{
		printf("The given number is not divisible by both 3 & 5.");
	}
}

void main()
{
	
 jay();
 
}