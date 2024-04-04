#include <stdio.h>

main() 
{
    int r = 5;
    int i, j, n = 11;

    for (i = 1; i <= r; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }

}