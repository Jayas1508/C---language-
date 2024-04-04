#include<stdio.h>

main() 
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N % 2 == 0)
        N--;

  
    printf("Odd numbers from %d to 1 are:\n", N);
    
    while (N >= 1) 
	{
        printf("%d\n", N);
        N -= 2; 
    }

}