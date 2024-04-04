#include<stdio.h>
#include<string.h>

main()
{
	char a[]= "admin@gmail.com";
	char b[]= "123456789";
	char c[100] , d[100];
	
	
	printf("enter mail = ");
	scanf("%s" ,&c);
	printf("Enter password = ");
	scanf("%s", &d);
	
	if(stacmp(a,c)==0  && stacmp(b,d)==0)
	{
		printf("login successfull....");
	}
	else
	{
		printf("login failed...");
	}
	
}