#include<stdio.h>

main() 
{
    int r = 5;
    char ch;

 

    for (int i = 0; i < r; i++) 
	{
        ch = 'A' + i; 

        for (int j = 0; j <= i; j++) 
		{
            printf("%c ", ch);
            ch--;
        }

        printf("\n");
    }

}