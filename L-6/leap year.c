#include<stdio.h>
main() 
{
    int start_year, end_year;

    printf("Enter the start year: ");
    scanf("%d", &start_year);
    printf("Enter the end year: ");
    scanf("%d", &end_year);

  
    if (start_year > end_year) 
	{
        printf("Invalid input: Start year cannot be greater than end year.\n");
        
        return 1;
    }

    printf("Leap years between %d and %d are:\n", start_year, end_year);
    
    
    while (start_year <= end_year) 
	{
        if ((start_year % 4 == 0 && start_year % 100 != 0) || (start_year % 400 == 0)) 
		{
            printf("%d\n", start_year);
        }
        start_year++;
    }
    
}