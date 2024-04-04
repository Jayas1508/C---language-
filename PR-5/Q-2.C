#include <stdio.h>

main() 
{
	
    int r,c,i,j,largest;
    int a[100][100];
    
    
    printf("Enter the number of rows = ");
    scanf("%d",&r);
    printf("Enter the number of columns = ");
    scanf("%d",&c);

    for (i=0; i<r; i++) 
	{
        for (j=0; j<c; j++) 
		{
        	printf("Enter the elements of the array  =");
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<r; i++) 
	{
        for (j=0; j<c; j++) 
		{
            if (a[i][j]>largest) 
			{
                largest = a[i][j];
            }
        }
    }
    printf("large elements are :- %d\n", largest);

}