#include<stdio.h>


main()
{
	
	int a[100];
	int i,n;
	
	printf("enter array size = ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	    {
		printf("enter count [%d]=",i);
		scanf("%d",&a[i]);
		}
		printf("\n All neftive elemenats = ");
		for(i=0; i<n; i++)
		{
			if(a[i]<=0)
			{
				printf("%d\t",a[i]);
			}
		}	
		printf("\n");
}