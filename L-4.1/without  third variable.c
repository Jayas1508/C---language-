#include<stdio.h>

main()
{
    int a, b;
    
    
    printf("Enter value of a = ");
    scanf("%d", &a);
    printf("Enter value of b = ");
    scanf("%d", &b);
    

    printf("Before swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    
    a = a + b;
    b = a - b;
    a = a - b;
    
   
    printf("After swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
   
}