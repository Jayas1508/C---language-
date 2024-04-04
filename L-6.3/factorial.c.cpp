#include<stdio.h>
main() 
{
    int N;
    unsigned long long factorial = 1;


    printf("Enter a number: ");
    scanf("%d", &N);


    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d is %llu\n", N, factorial);
}
