#include<stdio.h>

int main() 
{
    int i,j;
    
    for(i=1;i<=3;i++) 
	{
        for(j=1;j<=5;j++) 
		{
			if(i==1 || i==3) 
			{
                printf("* ");
            }
            else if(i==2 || i==4) 
			{
                if(j==1 || j==5) 
				{
                    printf("* ");
                }
				else
				{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=2;i++)
    {
    	for(j=1;j<=2;j++)
    	{
    		printf("*\t");
		}
		printf("\n");
	}
}
