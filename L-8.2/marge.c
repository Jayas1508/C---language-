#include<stdio.h>

main() 
{
	
    int i, size1, size2, size, k;
    
    printf("Enter array A's size = ");
    scanf("%d", &size1);
    
    printf("Enter array B's size = ");
    scanf("%d", &size2);
    
	size = size1+size2;
	
    int a[size1], b[size2], c[size];

    printf("\nEnter array A's elements =\n");
    
    for(i=0; i<size1; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        
        c[i] = a[i];
    }
    
	k=i;
	
    printf("\nEnter array B's elements =\n");
    for(i=0; i<size2; i++) 
	{
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
        
        
        c[k] = b[i];
        k++;
    }

    printf("\nArray C is: \n");
    
    for(i=0; i<size; i++) 
	{
        printf("c[%d] = %d\n", i,c[i]);
    }
}
