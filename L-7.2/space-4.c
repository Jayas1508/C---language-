/*
1 0 1 0 1 
  0 1 0 1
    1 0 1
      0 1
        1
*/

#include<stdio.h>

main() 
{
    int i,j,k;

    for(i=5;i>=1;i--) 
	{
		for(k=i;k<5;k++)
		{
			printf("  ");
		}
        for(int j=0;j<i;j++) 
		{
            if((i+j)%2==0) 
			{
                printf("0 ");
            } 
			else {
                printf("1 ");
            }
        }
        printf("\n");
    }
}
