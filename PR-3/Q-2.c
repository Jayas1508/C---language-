//41
//41 42
//41 42 43
//41 42 43 44
//41 42 43 44 45

#include<stdio.h>

main() {
     int r = 45 , i , j; 

    
    for (i = 41; i <= r; i++) 
	{
        
        for (j = 41; j <= i; j++) 
		{
            printf("%d ", j); 
        }
        printf("\n"); 
    }

}