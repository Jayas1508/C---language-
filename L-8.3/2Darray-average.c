#include<stdio.h>

main(){
	
    int r,c,i,j,t;
    float avg,sum=0;
    
    printf("Enter the 2D array's row size: ");
    scanf("%d", &r);
    printf("Enter the 2D array's column size: ");
    scanf("%d", &c);
    
    int a[r][c];
    t = r+c;
    
    printf("\nEnter 2D array's elements:\n");
    for(i=0;i<r;i++)
	 {
        for(j=0;j<c;j++) 
		{
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++) 
	{
        for(j=0;j<c;j++) 
		{
            sum += a[i][j];
        }
    }
    printf("\nSum of 2D array = %.2f", sum);
    avg = sum/t;
    printf("\nAverage of an Array: %.2f\n", avg);
}
