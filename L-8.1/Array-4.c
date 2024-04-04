#include<stdio.h>
main()
{
	int n , i;
	
	printf("Size of Array Element = ");
	scanf("%d",&n);
	int a[n],b[n],sum[n];
	
	printf("Enter of A Array Elements =\n ");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter of B Array Elements =\n ");
	
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	printf("sum of Array = ");
	
	for(i=0;i<n;i++)
	{
		sum[i
		] = a[i] + b[i];
		printf("%d",sum[i]);
	}
}