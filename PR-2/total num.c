#include<stdio.h>
main()
{
    int n , count;
    
    printf("Enter of number = ");
    scanf("%d", &n);
    
    while(n>0){
        count++;
        n = n/10;
    }
    printf("No. of digits = %d", count);

}
