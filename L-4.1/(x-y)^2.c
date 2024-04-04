#include<stdio.h>

main()
{
    int x, y, result;
    
   
    printf("Enter value of x = ");
    scanf("%d", &x);
    printf("Enter value of y = ");
    scanf("%d", &y);
    
    result = (x - y) * (x - y);
    
    printf("(%d - %d)^2 = %d\n", x, y, result);
    
}