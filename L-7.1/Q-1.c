#include <stdio.h>

main() 
{
    int r = 5;

    for (int i = 1; i <= r; i++)  
	{
        for (int j = i; j >= 1; j--) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }

}