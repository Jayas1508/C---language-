#include<stdio.h>
int main()
{
	
	int a[5];
	int *ptr;
	int i,n;
	
	printf("enter any number = ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter any number = ");
		scanf("%d",&a[i]);
	}
	ptr = &a[n-1];
	
	for(i=0; i<n; i++)
	{
		printf("Reversed array elements = %d\n",*ptr--);
		
	}
	return 0;
}