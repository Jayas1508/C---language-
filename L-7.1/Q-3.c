#include <stdio.h>

main() 
{
    int r = 5;

    for (int i = 1; i <= r; i++)  
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("%d ", r - i + 1);
        }
        printf("\n");
    }
}