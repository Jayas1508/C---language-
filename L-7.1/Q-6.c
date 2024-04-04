#include <stdio.h>

main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < rows - i; j++) 
		{
            if (j % 2 == 0) 
			{
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n"); 
    }
}
