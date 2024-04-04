#include<stdio.h>

main()
{
	
	int i,j,k=41;
	
	for (i=41; i<=45; i++)
	{
		for(j=i; j>=41; j--)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}