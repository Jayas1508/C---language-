#include <stdio.h>

main() 
{
    int mr, mc;
    int a[mr][mc], b[mr][mc], c[mr][mc];

    printf("Enter the array's row size = ");
    scanf("%d", &mr);
    printf("Enter the array's column size =  ");
    scanf("%d", &mc);

    printf("\nEnter array A's elements = \n");
    for (int i = 0; i < mr; ++i)
	 {
        for (int j = 0; j < mc; j++)
		 {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter array B's elements = \n");
    for (int i = 0; i < mr; ++i) 
	{
        for (int j = 0; j < mc; j++)
		 {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nArray C is:\n");
    for (int i = 0; i < mr; i++) 
	{
        for (int j = 0; j < mc; j++)
		 {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}