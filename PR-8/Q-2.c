#include <stdio.h>

void calculateCubes(int *ptr, int r, int c) 
{
    for (int i = 0; i < r; i++) 
	{
        for (int j = 0; j < c; j++) 
		{
            *(ptr + i * c + j) = (*(ptr + i * c + j)) * (*(ptr + i * c + j)) * (*(ptr + i * c + j));
        }
    }
}

int main()
{
    int r, c;

    printf("Enter the number of rows = ");
    scanf("%d", &r);
    printf("Enter the number of columns = ");
    scanf("%d", &c);

    int a[r][c];

    
    printf("Enter array elements =\n");
    for (int i = 0; i < r; i++) 
	{
        for (int j = 0; j < c; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

  
    calculateCubes(&a[0][0], r, c);

   
    printf("\nCubes of all elements:\n");
    for (int i = 0; i < r; i++) 
	{
        for (int j = 0; j < c; j++)
		 {
            printf("%d ", a[i][j]);
         }
        printf("\n");
    }

    return 0;
}
