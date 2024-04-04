#include <stdio.h>

main()
{
    int first, second, year , i, k;
    
    printf("Enter the first number = ");
    scanf("%d", &first);
    
    printf("Enter the second number = ");
    scanf("%d", &second);

    int l[100]; 
    
    for(year=first;year<=second;year++) 
	{
        if(year % 4==0) 
		{
            l[k] = year;
            k++;
        }
    }

    printf("\nLeap Years are: \n\n");
    
    for(i=0; i<k; i++) 
	{
        printf("%d \n", l[i]);
    }
}
