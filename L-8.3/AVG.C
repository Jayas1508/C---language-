#include <stdio.h>

main() 
{
    int r, c;

    printf("Enter the array's row size = ");
    scanf("%d", &r);
    printf("Enter the array's column size = ");
    scanf("%d", &c);

    int array[r][c];
    double sum = 0.0;

    printf("\nEnter array's elements = \n");
    for (int i = 0; i < r; i++)
	 {
        for (int j = 0; j < c; j++)
		 {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }

    double average = sum / (r * c);

    printf("\nAverage of the Array: %.2lf\n", average);
}