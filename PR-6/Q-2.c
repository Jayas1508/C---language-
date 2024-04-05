#include<stdio.h>
#include<string.h>

main()
{
	
	char s[100];
	int count=0;
	int i,j,k,n;
	
	printf("Enter the name = ");
    gets(s);
	
	for(j = 0 ; s[j]!=NULL; j++);
	{
		printf("%c", s[j]);
	}
	n = j;
	
	printf(" frequency of each character = \n");
	
	for(i = 0 ; i<n ; i++)
	{
		count = 1;
		if(s[i]!= NULL)
		{
			for(j=i+1 ; j<n ; j++)
			{
				if(s[i]==s[j])
				{
					count++;
					s[j]='\0';
				}
			}
			printf("'%c' = %d \n" , s[i] , count);
		}
	}
	}