#include<stdio.h>
main() 
{
    int N, i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    i = 2;

    printf("Even numbers from 1 to %d are:\n", N);
    
	do 
	{
        printf("%d ", i);
        i += 2;
    } while (i <= N);

}