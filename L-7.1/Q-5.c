#include <stdio.h>

main() 
{
    int r = 5;

    for (int i = 1; i <= r; i++)  
	{
        for (int j = 1; j <= r-i+1; j++) 
		{
            printf("%d ", i);
        }
        printf("\n");
    }
}