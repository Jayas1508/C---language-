#include<stdio.h>
#include<string.h>

int len()
{
	
	char a[100];
	int i;
	
	printf("enter value = ");
	gets(a);
	
	for(i=0; i<a[i]; i++)
	{
		printf("%d ",i);
	}
}
void main()
{
	len();
}