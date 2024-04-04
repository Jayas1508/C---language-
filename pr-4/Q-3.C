#include<stdio.h>

main() 
{
    int r = 5;
    int i, j, k;

    for (i = 1; i<=r; i++) 
	{
        for (j = i; j <= r; j++) 
		{
            printf("%d ", j);
        }
        for (k = i; k <= r; k++) 
		{
            printf("  ");
        }

        printf("\n");
    }
}