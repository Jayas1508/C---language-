#include<stdio.h>

main(){
    int r,c,i,j;
    
    printf("Enter the 2D array's row size: ");
    scanf("%d", &r);
    printf("Enter the 2D array's column size: ");
    scanf("%d", &c);
    
    int a[r][c], b[r][c], s[r][c];
    
    printf("\nEnter array A's elements:\n");
    for(i=0;i<r;i++) 
	{
        for(j=0;j<c;j++) 
		{
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nEnter array B's elements:\n");
    for(i=0;i<r;i++) 
	{
        for(j=0;j<c;j++) 
		{
            printf("b[%d][%d] = ",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("\nArray C is:\n");
    for(i=0;i<r;i++) 
	{
        for(j=0;j<c;j++) 
		{
            s[i][j] = a[i][j] + b[i][j];
            printf("%d  ", s[i][j]);
        }
        printf("\n");
    }
}
