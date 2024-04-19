#include<stdio.h>

int main() 
{
    
    FILE *e, *o;
    int i;

    e = fopen("even.txt", "w");
    o = fopen("odd.txt", "w");

    if(e == NULL || o == NULL)
	{
        printf("can't open file\n");
    }
    for(i = 50; i <= 70; i++)
	{
        if(i % 2 == 0)
		{
            fprintf(e,"%d\n", i);
        }
		else
		{
            fprintf(o,"%d\n", i);
        }
    }

    printf("Successfully added  numbers to files\n");

}