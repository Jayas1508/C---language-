#include<stdio.h>

main()
{
    int i,size;

    printf("Enter array size = ");
    scanf("%d", &size);

    int a[size];

    printf("Enter array elements = \n");
    for(i=0; <size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nThe squares are = \n\n");
	for(i=0;i<size;i++)
	{
		printf("a[%d] = %d \n", a[i], a[i]*a[i]);
	}
}