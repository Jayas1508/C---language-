#include<stdio.h>

main(){
    int k,i,j,sum = 0;
    
    printf("Enter the array's row & column size: ");
    scanf("%d", &k);
    
    int a[k][k];

    printf("Enter array's elements:\n");
    for(i=0;i<k;i++) 
	{
        for(j=0;j<k;j++) 
		{
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<k;i++) 
	{
        for(j=0;j<k;j++) 
		{
            if(i==0 || j==0 || i==k - 1 || j==k - 1) 
			{
                printf("%d ", a[i][j]);
                sum += a[i][j];
            } 
			else 
			{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nThe sum of boundary elements of an Array: %d\n", sum);
}
