#include<stdio.h>
#include<string.h>

main()
{
	char pass[100];
	int i , c_ltr = 0 , s_ltr = 0 , di = 0 , sp_symbol = 0;
	
	printf(" Enter your pass = ");
	gets(pass);
	
	if(strlen(pass)>=6)
	{
		for(i = 0 ; pass[i]!= '\0' ; i++)
		{
			if(pass[i]>='A'  &&  pass[i]<='Z')
			{
				c_ltr = 1;
			}
			else if(pass[i]>='a'  &&  pass<'z')
			{
				s_ltr = 1;
			}
			else if(pass[i]>='0'  &&  pass[i]<='9')
			{
				di = 1;
			}
			else
			{
				sp_symbol = 1;
			}
		}
		if(c_ltr == 1 && s_ltr == 1 && di == 1 && sp_symbol == 1)
		{
			printf("your password is strong...");
		}
		else
		{
			printf("Your password is not strong ....");
		}
	}
	else
	{
		printf("Your password os no longer more than 6 latter ...");
	}
}