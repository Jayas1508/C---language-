#include<stdio.h>
main() 
{
    int N, i;
    unsigned long long int a = 0, b = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &N);


    printf("Fibonacci series up to %d terms:\n", N);

    for (i = 1; i <= N; ++i) 
	{
        printf("%llu, ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

}