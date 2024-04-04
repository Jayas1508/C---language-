#include<stdio.h>

main() 
{
    int i,j,k;
    
    printf("Enter the array's row & column size = ");
    scanf("%d", &k); 

    int a[k][k], tr[k][k];

    printf("Enter array's elements:\n");
    for (int i = 0; i < k; i++) 
	{
        for (int j = 0; j < k; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < k; i++) 
	{
        for (int j = 0; j < k; j++) 
		{
            tr[j][i] = a[i][j];
        }
    }

    printf("The transpose matrix of an array = \n");
    for (int i = 0; i < k; i++) 
	{
        for (int j = 0; j < k; j++) 
		{
            printf("%d ", tr[i][j]);
        }
        printf("\n");
    }
}